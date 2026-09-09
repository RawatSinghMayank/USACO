// given an array of numbers, and a number x 
// find the maximum value of (arr[i] ^ x).

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class TrieNode {
public:
    TrieNode* children[2];
    TrieNode(){
        for (int i = 0; i < 2; i++) {
            children[i] = nullptr;
        }
    }

    TrieNode* get(int bit) {
        return children[bit];
    }

    void put(int bit, TrieNode* node) {
        children[bit] = node;
    }

    bool containsKey(int bit) {
        return children[bit] != nullptr;
    }
};

class Trie {
private:
    TrieNode* root;

public:
    Trie() {
        root =new TrieNode();
    }

    void insert(int number) {

        TrieNode* temp = root;
        for (int i = 31; i >= 0; i--) {
            int bit = (number & (1 << i)) ? 1 : 0;
            if (!temp->containsKey(bit)) {
                temp->put(bit, new TrieNode());
            }
            temp = temp->get(bit);
        }
    }

    void buildTrie(vector<int> &nums) {
        for (int ele: nums) {
            insert(ele);
        }
    }

    int maximizeXor(int x) {

        TrieNode* temp = root;
        int result = 0;
        for (int i = 31; i >= 0; i--) {
            int numBit = (x & (1 << i)) ? 1 : 0;
            if (temp->containsKey(1 - numBit)) {
                result = (result | (1 << i));
                temp = temp->get(1 - numBit);
            }else {
                temp = temp->get(numBit);
            }
        }
        return result;
    }
};

int main(){

    vector<int> nums = {9, 8, 5, 7, 4};
    int x = 8;

    Trie trie;
    trie.buildTrie(nums);
    cout << trie.maximizeXor( x) << endl;
    return 0;

}


// Operation	Complexity
// Build Trie	O(n × 32)
// Query	O(32)
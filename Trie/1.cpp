#include <bits/stdc++.h> 

class TrieNode {
public:
    unordered_map<char, TrieNode*> children;
    bool isEndOfWord;
    int prefixCount;
    int endCount;

    TrieNode() {
        isEndOfWord = false;
        prefixCount = 0;
        endCount = 0;
    }

    bool containsKey(char ch) {
        return children.find(ch) != children.end();
    }

    void put(char ch, TrieNode* node) {
        children[ch] = node;
    }

    void setEnd() {
        isEndOfWord = true;
    }

    bool isEnd(){
        return isEndOfWord;
    }

    TrieNode* get(char ch) {
        return children[ch];
    }

    void increasePrefixCount() {
        prefixCount++;
    }
    void increaseEndCount() {
        endCount++;
    }
    void decreasePrefixCount() {
        prefixCount--;
    }
    void decreaseEndCount(){
        endCount--;
    }

};

class Trie{

private:
    TrieNode* root;
    public:
    Trie(){
        root = new TrieNode();
    }

    void insert(string  &word){
        TrieNode* temp =root;

        for (char ch : word) {
            if (!temp->containsKey(ch)) {
                temp->put(ch, new TrieNode());
            }
            temp = temp->get(ch);
            temp->increasePrefixCount();
        }
        temp->increaseEndCount();
        temp->setEnd();
    }

    int countWordsEqualTo(string &word){
        TrieNode* temp = root;

        for (char ch : word) {
            if (!temp->containsKey(ch)) return false;
            temp = temp->get(ch);
        }
        if (temp->isEnd()) {
            return temp->endCount;
        }else {
            return 0;
        }
    }

    int countWordsStartingWith(string &word){
        
        TrieNode* temp = root;
        for (char ch : word) {
            if (!temp->containsKey(ch)) return false;
            temp = temp->get(ch);
        }
        return temp->prefixCount;
    }

    void erase(string &word){
        TrieNode* temp = root;
        for (char ch : word) {
            if (!temp->containsKey(ch)) return;
            temp = temp->get(ch);
            temp->decreasePrefixCount();
        }
        temp->decreaseEndCount();
    }
};

#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;
// Tushar Roy Method
class StringPermutation {
public:
    vector<string> permute(const string& input) {
        map<char, int> countMap;
        for (char ch : input) {
            countMap[ch]++;
        }

        vector<char> str;
        vector<int> count;
        for (const auto& entry : countMap) {
            str.push_back(entry.first);
            count.push_back(entry.second);
        }

        vector<string> resultList;
        vector<char> result(input.length());
        permuteUtil(str, count, result, 0, resultList);
        return resultList;
    }

private:
    void permuteUtil(const vector<char>& str, vector<int>& count, vector<char>& result, int level, vector<string>& resultList) {
        if (level == result.size()) {
            resultList.push_back(string(result.begin(), result.end()));
            return;
        }

        for (int i = 0; i < str.size(); i++) {
            if (count[i] == 0) {
                continue;
            }
            result[level] = str[i];
            count[i]--;
            permuteUtil(str, count, result, level + 1, resultList);
            count[i]++;
        }
    }
};

int main() {
    StringPermutation sp;
    vector<string> permutations = sp.permute("AABC");
    for (const string& s : permutations) {
        cout << s << endl;
    }
    return 0;
}

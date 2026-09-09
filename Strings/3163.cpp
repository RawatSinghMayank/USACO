class Solution {
public:
    string compressedString(string word) {
        int n = word.length();
        int i = 0;
        string result = "";
        while (i < n ){
            char ch = word[i];
          int  consecutive_count = 0;
            while (i < n and consecutive_count < 9 and word[i] == ch ){
                i++;
                consecutive_count ++;
            }
            result += to_string(consecutive_count) + ch ;  
    }

    return result;}
};





class Solution {
public:
    string compressedString(string word) {

        string result = "";
        int count = 1;
        for (int i = 1; i < word.length(); i++){
            if (word[i-1] == word[i] and count < 9){
                count ++;
            }
            else{
                result +=to_string(count) + word[i-1];
                count = 1;
            }
        }
        result += to_string(count) + word[word.length()-1];
        return result;
    }
};


            result += consecutive_count + '0';
            result += ch;
If you want to avoid using to_string (which involves dynamic memory allocation), you can append the count as 
a single character by adding '0' to the count (since the count is always between 1 and 9):
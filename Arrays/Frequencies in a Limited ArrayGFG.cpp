You are given an array arr[] containing positive integers. The elements in the array arr[] range from 1 to n
 (where n is the size of the array), and some numbers may be repeated or absent. Your task is to count the 
frequency of all numbers in the range 1 to n and return an array of size n such that result[i] represents 
the frequency of the number i (1-based indexing).
Examples
Input: arr[] = [2, 3, 2, 3, 5]
Output: [0, 2, 2, 0, 1]
Explanation: We have: 1 occurring 0 times, 2 occurring 2 times, 3 occurring 2 times, 4 occurring 0 times,
and 5 occurring 1 time.

 vector<int> frequencyCount(vector<int>& arr) {
       
       map <int, int> freq;
       for (auto &it : arr){
           freq[it]++;
       }
       
       vector <int> result;
       int n = arr.size();
       for (int i = 1; i <= n; i++){
           if (freq.find(i) == freq.end()){
               result.push_back(0);
           }
           else{
               result.push_back(freq[i]);
           }
       }
return result;}



O(N) time and O(n) space 
 vector<int> frequencyCount(vector<int>& arr) {
     
     int n = arr.size();
     vector <int> freq(n);
     
     for (int i = 0; i < n ; i++){
         if (arr[i] > 0){
             freq[arr[i]-1]++;
         }
     }
    
return freq;}






No extra space
 vector<int> frequencyCount(vector<int>& arr) {
      
      int i = 0;
      int n = arr.size();
      
      while (i < n){
          if (arr[i] <= 0){
              i++;
           continue;}
          int element_idx = arr[i] - 1;
          if (arr[element_idx] > 0){
              arr[i]=arr[element_idx];
              arr[element_idx] = -1;
          }
          else{
              arr[element_idx]--;
              arr[i]=0;
              i++;
          }
      }
      
      for (int i=0; i<arr.size();i++){
          arr[i] = abs(arr[i]);
      }
return arr;    }
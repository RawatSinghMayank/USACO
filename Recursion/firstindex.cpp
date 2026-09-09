#include<bits/stdc++.h>
using namespace std;
int findIndex(vector<int>&arr, int x, int size) {
    if (size == 0) return -1;
    if (arr[0] == x) return 0;
    vector<int>subArr(arr.begin()+1,arr.end());
    int ans = findIndex(subArr, x, size - 1);
    if (ans == -1) return -1;
    return ans + 1;
}
    
  
    int main(){
        vector<int>arr={1,2,-3,2};
        cout<< findIndex(arr,2,arr.size());
        return 0;
    }
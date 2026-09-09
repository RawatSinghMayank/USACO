
// CA sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.

//     Given an array of numbers arr,
//     return true if the array can be rearranged to form an arithmetic progression.Otherwise, return false.

//                                                                                                    Example 1 :

//     Input : arr = [ 3, 5, 1 ] Output : true Explanation : We can reorder the elements as[1, 3, 5] or [ 5, 3, 1 ] with differences 2 and -2 respectively,
//             between each consecutive elements.Example 2 :

//     Input : arr = [ 1, 2, 4 ] Output : false Explanation : There is no way to reorder the elements to obtain an arithmetic progression.

#include <bits/stdc++.h>
using namespace std;

// brute force by sorting

/*class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
       int j=1;
       int diff=arr[1]-arr[0];
        for(int i=2;i<arr.size();i++){
            if(arr[i]-arr[j]!=diff)return false;
            j++;
        }
        return true;
    }
};*/
/*
bool canMakeArithmeticProgression(vector<int> &arr)
{
    unordered_set<int> st(arr.begin(), arr.end());

    int min_ele = *min_element(arr.begin(), arr.end());
    int max_ele = *max_element(arr.begin(), arr.end());
    if ((max_ele - min_ele) % (arr.size() - 1) != 0)
        return false;
    int diff = (max_ele - min_ele) / (arr.size() - 1);

    for (int i = 0; i < arr.size(); i++)
    {
        int x = min_ele + i * diff;
        if (st.find(x) == st.end())
            return false;
    }
    return true;
} */

// OPTIMAL SOLUTION
int main()
{
    vector<int> v = {3, 5, 1};
    cout << canMakeArithmeticProgression(v);
    return 0;
}
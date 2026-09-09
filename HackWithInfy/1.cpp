// You are given an integer N, an array A of length N, and an array B of length N.

// You have N blocks of 1 bits with sizes A[1...N], and N blocks of 0 bits with sizes B[1...N]. You must arrange these blocks so that no two adjacent blocks have the same bit value.

// Among all possible valid arrangements, find the maximum possible number obtained by interpreting the resulting binary string as a decimal integer. Print the result modulo 10⁹ + 7.


// All blocks in A and B must be used exactly once.
// Blocks must strictly alternate between 0 and 1.
// The arrangement may start with either block type.
// The objective is to maximize the decimal value of the final binary string.

#include<bits/stdc++.h>
using namespace std;

// int ans(int N, vector<int> A, vector<int> B) {

//     sort(A.begin(), A.end(), greater<int>());
//     sort(B.begin(), B.end(), greater<int>());

//     int i = N - 1;
//     int j = N - 1;

//     int mod = 1e9 + 7;
//     long long result = 0;
//     long long firstTerm = 1;

//     bool flag = false; // false -> take from A (1s), true -> take from B (0s)

//                 // 1    1     1    1     0    0     0    0
//                 // 2^7  2^6  2^5  2^4   2^3   2^2  2^1  2^0

//     return result;
// }


// sort(v.begin(), v.end(), less<int>());
// Ye ascending order me sort karta hai



// sort(v.begin(), v.end(), greater<int>());
// Ye descending order me sort karta hai

//  priority_queue me behavior (IMPORTANT)
// priority_queue<int> pq;
//  Default = max heap

//  Using less<int>
// priority_queue<int, vector<int>, less<int>> pq;

//  Ye bhi max heap hi hota hai

//  Top = largest element

//  Using greater<int>
// priority_queue<int, vector<int>, greater<int>> pq;

//  Ye min heap banata hai

// Top = smallest element
#define int long long
   int mod = 1e9 + 7;
int myPow(int m, int n){
    int result = 1;
    while (n != 0) {
        if (n & 1) {
            result = (result%mod * m%mod)%mod;
        }
        m = (m%mod * m%mod)%mod;
        n = (n >> 1);
    }
    return result;
}

int ans(int N, vector<int> A, vector<int> B) {

    sort(A.begin(), A.end(), greater<int>());
    sort(B.begin(), B.end(), less<int>());

    int i = A.size() - 1;
    int j = B.size() - 1;

 
    long long result = 0;
    long long firstTerm = 1;
    int power = 1;
    bool flag = false; 
    int size;
    while (i >= 0 || j >= 0) {

        if (flag && i >= 0) {
            firstTerm = myPow(2,power - 1);
             size = A[i];
           
                result  = (result%mod +  firstTerm * (myPow(2,size) - 1)%mod)%mod;
               
            
            i--;
            flag = !flag;
        }
        
        else if (!flag && j >= 0) {
            size = B[j];
            flag = !flag;
            j--;
        }
        power += size;
    }

    return result;
}

signed main(){

    int n;
    cin >> n;
    vector<int> nums1(n), nums2(n);
    for (int i = 0; i < n; i++){
        cin >> nums1[i];
    }

    for (int i = 0; i < n; i++){
        cin >> nums2[i];
    }
    cout << ans(n, nums1, nums2);
    return 0;
}
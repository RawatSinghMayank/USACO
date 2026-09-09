// Given two sorted arrays A and B, generate all possible arrays such that the first element is taken 
// from A then from B then from A, and so on in increasing order till the arrays are exhausted. The 
// generated arrays should end with an element from B.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int arr1[n1];s
    int arr2[n2];;
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
     for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    
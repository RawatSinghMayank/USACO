
/*
    used to decide the order of elements inside a data structure (vector,
    set,map,heap) etc.

    1.Function Pointers : A function that implements the logic of comparsion.

    sort(nums.begin(),nums.end(), myComparator);
    bool myComparator()

*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool myComparator (int a, int b) {

    if (a > b) return true;
    return false;
}

void print(vector<int>& nums) {
    for (int &ele : nums) {
        cout << ele << " ";
    }
    cout << endl;
}
int main() {

    vector<int> nums = {1 , 6, 2 ,  5, 2, 1};
    sort(nums.begin(), nums.end(), myComparator);

    print(nums);
}
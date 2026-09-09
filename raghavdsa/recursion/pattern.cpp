#include<bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> nums){
        int low = 0;
        int high = nums.size()- 1;
        int mid;
        while (low < high) {
            mid = (low + high) / 2;
            if (mid % 2 != 0) {
                mid -= 1;
            }
            if (nums[mid] == nums[mid + 1]) {
                low = mid + 2;
            } else {
                high = mid;
            }
        }return nums[low];



}

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    int ans=getSingleElement(v);
    cout<<ans;
}
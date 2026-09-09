 #include<bits/stdc++.h>
 using namespace std;
 bool isSorted(int arr[],int size){
      if(size==0 || size==1)return true;
      if(arr[0]>arr[1])return false;
      return isSorted(arr+1,size-1);
  }
    

bool isSorted2(int arr[],int size){
    if(size==0 || size==1)return true;
    isSorted2(arr+1,size-1);
    if(!isSorted2(arr+1,size-1))return false;
    if(arr[0]>arr[1])return false;
    return true;
}
bool arraySortedOrNot(vector<int>& arr) {
        // code here
       int nums[arr.size()];
       for(int i=0;i<arr.size();i++){
           nums[i]=arr[i];
       }
        return isSorted2(nums,arr.size());
    }
    int main(){
        vector<int>arr={1,2,3,5634,45454};
        cout<<arraySortedOrNot(arr);
    }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>nums;
//     cout<<"enter size "<<endl;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         nums.push_back(x);
//     }
//    int z=0,o=0,t=0;
//         for(int i=0;i<sizeof(nums);i++){
//             if(nums[i]==0)z++;
//             else if(nums[i]==1)o++;
//             else t++;
//         }
//         for(int i=0;i<sizeof(nums);i++){
//             if(i>=0 && i<z)nums[i]=0;
//             else if(i>=z && i<z+o) nums[i]=1;
//             else nums[i]=2;
//         }
//         for(int i=0;i<n;i++){
//         cout<<nums[i]<<" ";
//         }
// }

 #include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums;
    cout<<"enter size "<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int low=0,mid=0,high=nums.size()-1;
    while(mid<=high){
        if(nums[mid]==2){
            int temp=nums[mid];
            nums[mid]=nums[high];
            nums[high]=temp;
            high--;}
            else if(nums[mid]==0){
                int temp=nums[mid];
                nums[mid]=nums[low];
                nums[low]=temp;
                low++;
                mid++;
            }
            else mid++;
    }
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}
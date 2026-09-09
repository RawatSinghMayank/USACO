#include<bits/stdc++.h>
using namespace std;
/*   
Time Complexity Analysis
To analyze the time complexity, consider the following points:
1.	Number of Subsets: For a set of size nnn, there are 2n2^n2n subsets.
2.	Recursive Calls: Each element has two possibilities (either it is included in the subset or it is not). Thus, for nnn elements, there are 2n2^n2n recursive calls.
3.	Processing Each Subset: Printing or storing each subset takes O(n)O(n)O(n) time in the worst case since each subset can have up to nnn elements.
Combining these points, the total time complexity is:
O(n⋅2n)O(n \cdot 2^n)O(n⋅2n)
•	2n2^n2n is the number of subsets.
•	O(n)O(n)O(n) is the time to process (print/store) each subset.
Therefore, the overall time complexity is O(n⋅2n)O(n \cdot 2^n)O(n⋅2n), where nnn is the number of elements in the original set.
4o
You said:
What's about space compelxity
ChatGPT said:
ChatGPT
The space complexity of generating all subsets using recursion can be analyzed based on the following factors:
1.	Recursive Call Stack: The depth of the recursive call stack can go up to nnn, where nnn is the number of elements in the input set. This is because each element can be included or excluded, leading to a binary decision at each step.
2.	Temporary Storage for Subsets: The temporary space used to store subsets during the recursive calls. In the worst case, a subset can have up to nnn elements.
Let's break it down:
Recursive Call Stack
Each recursive call adds a frame to the call stack. Since the maximum depth of recursion is nnn (one call per element), the space required for the call stack is O(n)O(n)O(n).
Temporary Storage for Subsets
During the recursion, subsets are temporarily stored in a vector or similar data structure. In the worst case, this can be O(n)O(n)O(n) space per call, but it's the same space being reused across different calls. So the space required for storing the current subset is O(n)O(n)O(n).
Total Space Complexity
Combining these two factors, the total space complexity is the sum of the space for the call stack and the space for the temporary subset storage:
O(n)+O(n)=O(n)O(n) + O(n) = O(n)O(n)+O(n)=O(n)
However, if we also consider the space used to store all the subsets generated, we have:
•	There are 2n2^n2n subsets.
•	Each subset can have up to nnn elements.
The space required to store all subsets would be O(n⋅2n)O(n \cdot 2^n)O(n⋅2n).
Therefore, the overall space complexity, including the storage for all subsets, is:
O(n⋅2n)O(n \cdot 2^n)O(n⋅2n)
In summary:
•	Space complexity for the recursive call stack and temporary storage: O(n)O(n)O(n)
•	Space complexity for storing all subsets: O(n⋅2n)O(n \cdot 2^n)O(n⋅2n)
So, the dominant factor is the space needed to store all subsets, making the total space complexity O(n⋅2n)O(n \cdot 2^n)O(n⋅2n).



*/
 vector<vector<int>> subsets(vector<int>& nums) {
     vector<vector<int>>result;
     if(nums.size()==0){
     result.push_back({});
     return result;
    }
    vector<int>subArr(nums.begin()+1,nums.end());
   result=subsets(subArr);
   int n=result.size();
   for(int i=0;i<n;i++){
    result.push_back(result[i]);
    result.back().push_back(nums[0]); 
   }
return result;

    }


    vector<vector<int>> subsets2(vector<int>& nums) {
        int n = nums.size(), p = 1 << n;
        vector<vector<int>> subs(p);
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < n; j++) {
                if ((i >> j) & 1) {
                    subs[i].push_back(nums[j]);
                }
            }
        }
        return subs;
    }


    void ans(vector<vector<int>>&subsets,vector<int>temp,vector<int>nums,int idx){
    if(idx==nums.size()){
        subsets.push_back(temp);
        return;
    }
    ans(subsets,temp,nums,idx+1);
    temp.push_back(nums[idx]);
    ans(subsets,temp,nums,idx+1);
    }

    vector<vector<int>> subsets3(vector<int>& nums) {
        vector<vector<int>>Subsets;
        vector<int>v;
        ans(Subsets,v,nums,0);
        return Subsets;
    }

    void ans1(vector<vector<int>>&subsets,vector<int>&temp,vector<int>nums,int idx){
    subsets.push_back(temp);
    for(int i=idx;i<nums.size();i++){
    temp.push_back(nums[i]);
    ans1(subsets,temp,nums,i+1);
    temp.pop_back();
    }
    }

    vector<vector<int>> subsets4(vector<int>& nums) {
        vector<vector<int>>Subsets;
        vector<int>v;
        ans1(Subsets,v,nums,0);
        return Subsets;
    }


int main()
{
   
    int n;
    cin>>n;
     vector<int>v(n);
    for(int i=0;i<n;i++){
         cin>>v[i];
                    }
                    vector<vector<int>>ans=subsets3(v);
                    for(int i=0;i<ans.size();i++)
                    {
                        for(int j=0;j<ans[i].size();j++){
                            cout<<ans[i][j]<<" ";
                        }
                        cout<<endl;
                    }
return 0;}
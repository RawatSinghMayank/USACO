#include <bits/stdc++.h>
using namespace std;
 
long long best_index(vector <long long> arr){
    
    long long n=arr.size();
    long long max_sum=LONG_MIN;
    
    for (long long i=1; i<n ;i++){
        arr[i]+=arr[i-1];
    }
 long long sum=0;
    for (long long i=0; i<n ;i++){
        long long step=1;
        for (long long j=i; j<n ;j+=step){
           if (i>0) sum=arr[j]-arr[i-1];
           else sum=arr[j];
            step++;
        }max_sum=max(max_sum,sum);
    } 
return max_sum;    
}
 
int main(){
    
    long long n;
    cin>>n;
    vector <long long> arr(n);
    for (long long i=0; i<n ;i++){
        cin>>arr[i];
    }
 
    cout<<best_index(arr);
 
return 0;
}

/* For a given 
𝑖
i, the inner loop increments 
𝑗
j by 
𝑠
𝑡
𝑒
𝑝
step, where 
𝑠
𝑡
𝑒
𝑝
step starts at 1 and increases by 1 in each iteration:

The value of 
𝑗
j grows as 
𝑖
+
1
,
𝑖
+
3
,
𝑖
+
6
,
𝑖
+
10
,
…
i+1,i+3,i+6,i+10,…, which is the sum of the first 
𝑘
k integers: 
1
,
3
,
6
,
10
,
…
,
𝑘
(
𝑘
+
1
)
2
1,3,6,10,…, 
2
k(k+1)
​
 .
The inner loop terminates when 
𝑗
≥
𝑛
j≥n. Solving for 
𝑘
k in 
𝑘
(
𝑘
+
1
)
2
≥
𝑛
−
𝑖
2
k(k+1)
​
 ≥n−i gives 
𝑘
≈
𝑂
(
𝑛
−
𝑖
)
k≈O( 
n−i
​
 ).
Thus, the inner loop runs 
𝑂
(
𝑛
−
𝑖
)
O( 
n−i
​
 ) times for each 
𝑖
i.

4. Total Time Complexity
The total time complexity is the sum of work done by the inner loop for each value of 
𝑖
i:

Total Complexity
=
∑
𝑖
=
0
𝑛
−
1
𝑂
(
𝑛
−
𝑖
)
Total Complexity= 
i=0
∑
n−1
​
 O( 
n−i
​
 )
This is equivalent to:

𝑂
(
∑
𝑖
=
1
𝑛
𝑖
)
=
𝑂
(
𝑛
1.5
)
O( 
i=1
∑
n
​
  
i
​
 )=O(n 
1.5
 )
Space Complexity
The space complexity is 
𝑂
(
𝑛
)
O(n) due to the storage of the prefix sum array.
Conclusion
Time Complexity: 
𝑂
(
𝑛
1.5
)
O(n 
1.5
 )
Space Complexity: 
𝑂
(
𝑛
)
O(n)*/
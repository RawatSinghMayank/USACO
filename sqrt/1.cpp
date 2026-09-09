// As an example, consider the problem of creating a data structure that supports two operations on an array: modifying an element at a given position and
// calculating the sum of elements in the given range

//  allows us to modify elements in O(1) time and calculate
// sums in O(sqrt(n)) time.



// divide the array into blocks of size sqrt(n)

// task  -> array [a1,a2,a3,...an] 

// queries
// 1.[l,r] sum
// 2.update a[i] = x;

// Steps;
// 1.Divide array A(n elements) into X small arrays
// 2.Each array has Y elements.
// 3.X * Y = N


#include<bits/stdc++.h>
using namespace std;

class SquareRootDecomposition {
private:
    int n;    
    int blockSize;
    vector<long long> blocks;
    vector<int> nums;
  
public:
    SquareRootDecomposition(vector<int> &arr){
        n = arr.size();
        nums = arr;
        blockSize = int(ceil(sqrt(n)));
        blocks.resize(blockSize,0);
        for (int i = 0; i < n; i++) {
            blocks[i/blockSize] += nums[i];
        }
    }

    void update(int index, int value) {
        int diff  = value - nums[index];
        nums[index] = value;
        blocks[index/blockSize] += diff;
    }

    long long query (int l, int r){
       
        long long sum = 0;
        while (l % blockSize != 0 && l <= r) {;
            sum += nums[l];
            l++;
        }

        while (l + blockSize - 1 <= r) {
            sum += blocks[l/blockSize];
            l += blockSize;
        }

        while (l <= r) {
            sum += nums[l];
            l++;
        }
        return sum;
    }
};

int main(){


    int n, queries;
    cin >> n >> queries;
    vector<int> nums(n);

    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }

    SquareRootDecomposition squareRoot(nums);
    while(queries--) {
        int type;
        cin >> type;
        //type1 update 
        //type2 query
        if (type == 1){

            int index, value;
            cin >> index >> value;
            squareRoot.update(index, value);
        }else {
            int l,r;
            cin >> l >> r;
            cout << squareRoot.query(l,r - 1) << endl;
        }
    }
    return 0;
}
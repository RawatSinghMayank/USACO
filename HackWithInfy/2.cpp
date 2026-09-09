#include <iostream>
#include <vector>
#include <string>
#include <limits.h>
#define int long long
using namespace std;

class SegmentTree {
	
private:
	vector<int> segTree;
	
public: 
	SegmentTree(int n ) {
		segTree.resize(4 * n);
	}
	
	void buildSegTree(vector<int> &nums, int index, int low, int high) {
		
		if (low == high) {
			segTree[index] = nums[low];
			return;
		}
		
		int mid = low + ((high - low) >> 1);
		
		buildSegTree(nums, 2 * index + 1, low, mid);
		buildSegTree(nums, 2 * index + 2, mid + 1, high);
		
		segTree[index] = max(segTree[2 * index + 1], segTree[2 * index + 2]);	
	}
	
	void updateSegTree(int index, int pos, int value, int low, int high) { 
		
		if (low == high) {
			segTree[index] = value;
			return;
		}
		
		int mid = low + ((high - low) >> 1);
		
		if (pos <= mid) {
			updateSegTree(2 * index + 1, pos, value, low, mid);
		}else {
			updateSegTree(2 * index + 2, pos, value, mid + 1, high);
		}
		
		segTree[index] = max(segTree[2 * index + 1], segTree[2 * index + 2]);	
	}
	
	int querySegTree(int index, int low, int high, int left, int right) {
		
		if (right < low || high < left) {
			return 0;
		}else if (low >= left && high <= right) {
			return segTree[index];
		}
		
		int mid = low + ((high - low) >> 1);
		
		int leftAns =querySegTree(2 * index + 1, low, mid, left, right);
		int rightAns =querySegTree(2 * index + 2, mid + 1, high, left, right);
		
		return max(leftAns, rightAns);
	}
	
};

signed main(){
	
	int n, q;
	cin >> n >> q;
	
	vector<int> nums(n);
	for (int i = 0; i < n; i++) { 
		cin >> nums[i];
	}
	
	SegmentTree seg(n);
	seg.buildSegTree(nums, 0, 0, n - 1);
	
	while (q--) {
		
		int type, a, b;
		cin >> type >> a >> b;
		
		if (type == 1) { 
			
			seg.updateSegTree(0, a, b, 0, n - 1);
		}else {
			cout << seg.querySegTree(0, 0, n - 1, a, b - 1) << endl;
		}	
		
	}
	
	
	
	return 0;
}	
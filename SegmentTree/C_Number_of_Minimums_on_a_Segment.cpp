#include<bits/stdc++.h>
#define int long long
using namespace std;

class SegmentTree {

private:
    vector<pair<int,int>> segTree;
public:
    SegmentTree(int n) {
        segTree.resize(4 * n + 1);
    }

    void build(vector<int>& nums, int low, int high, int index) {

        if (low >= high) {
            segTree[index] = {nums[low], 1};
            return;
        }

        int mid = low + ((high - low) >> 1);
        build(nums, low, mid, 2 * index + 1);
        build(nums, mid + 1, high, 2 * index + 2);
        if (segTree[2 * index + 1].first == segTree[2 * index + 2].first) {
            segTree[index] = {segTree[2 * index + 1].first, segTree[2 * index + 1].second + segTree[2 * index + 2].second};
        } else if (segTree[2 * index + 1].first < segTree[2 * index + 2].first) {
            segTree[index] = segTree[2 * index + 1];
        } else {
            segTree[index] = segTree[2 * index + 2];
        }
    }

    pair<int,int> query(int left, int right, int index, int low, int high) {

        if (right < low || left > high) return {INT_MAX,1};
        if (low >= left && high <= right) return segTree[index];

        
        int mid = low + ((high - low) >> 1);
        auto l = query(left, right, 2 * index + 1, low, mid);
        auto r = query(left, right, 2 * index + 2, mid + 1, high);
        
        if (l.first == r.first) {
           return {l.first, l.second + r.second};
        } else if (l.first < r.first) {
            return l;
        } else {
            return r;
        }
    }

    void update(vector<int>& nums, int index, int low, int high, int i, int value) {

        if (low >= high) {
            segTree[index] = {value,1};
            return; 
        }

        int mid = low + ((high - low) >> 1);
        if (i <= mid) {
            update(nums, 2 * index + 1, low , mid, i, value);
        } else {
            update(nums, 2 * index + 2, mid + 1, high, i, value);
        }
        if (segTree[2 * index + 1].first == segTree[2 * index + 2].first) {
            segTree[index] = {segTree[2 * index + 1].first, segTree[2 * index + 1].second + segTree[2 * index + 2].second};
        } else if (segTree[2 * index + 1].first < segTree[2 * index + 2].first) {
            segTree[index] = segTree[2 * index + 1];
        } else {
            segTree[index] = segTree[2 * index + 2];
        }
    }
};

signed main() {

    int n, q;
    cin >> n >> q;
    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    SegmentTree seg(n);
    seg.build(nums, 0, n - 1, 0);

    while(q--) {

        int type, l,r;
        cin >> type >> l >> r;

        if (type == 1) {
            seg.update(nums, 0, 0, n - 1, l, r);
        } else {
            auto it =  seg.query(l, r - 1, 0, 0, n - 1);
            cout << it.first << " "<< it.second << "\n";
        }
    }
    return 0;
}
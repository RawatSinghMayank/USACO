#include <bits/stdc++.h>
using namespace std;


brute force time complexity = O(n)
int findFloor(vector<int>& arr, int k) {

      int n = arr.size();
      int floor = -1;
      for (int i = 0; i < n; i++){
          if (arr[i] <= k){
              floor = i;
          }
      }
     
     return floor;
    }


   int findFloor(vector<int>& arr, int k) {
        
        int i;
       for ( i = 0; i< arr.size(); i++){
           if (arr[i] > k)
           break;
       }
return  i-1;    }
};




int findFloor(vector <int> & arr, int k){
	
	int low = 0;
	int high = arr.size() - 1;
	int floor = -1;
	while (low <= high){
		
		int mid = low + (high - low)/2;
		
		if ( arr[mid] == k){
			return mid;
		}
		else if (arr[mid] < k){
			low = mid + 1;
			floor = mid;
		}
		else {
			high = mid -1;
		}
	}

return floor;
}


int findFloor(vector<int>& arr, int k) {
        int n = arr.size();

        // Edge case: if the first element is greater than k, no floor exists
        if (arr[0] > k) {
            return -1;
        }

        int low = 0, high = n - 1, ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == k) {
                return mid; // exact match is the floor
            } else if (arr[mid] < k) {
                ans = mid; // potential floor found
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans; // the index of the largest element <= k
    }


int main(){

	int n ;
	cin >> n;
	vector <int> arr(n);
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}

	int k;
	cin >> k;
	cout << findFloor(arr,k);

return 0;
}
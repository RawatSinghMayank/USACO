class Solution {
public:

    void mergee(vector<int>& arr, int left, int mid, int right) {
        
        int i = left, j = mid + 1;
        vector<int> temp;
        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i]);
                i++;
            }else{
                temp.push_back(arr[j]);
                j++;
            }
        }
        while(i <= mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j <= right) {
            temp.push_back(arr[j]);
            j++;
        }
        
        for (int i = left; i <= right; i++) {
            arr[i] = temp[i - left];
        }
    }
    
    void mergeSort(vector<int> &arr, int l, int r) {
        
        if (l >= r){
            return;
        }
        int mid = l + ((r- l) >> 1);
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        mergee(arr,l,mid,r);
    }
    
};
class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        
        if (low >= high){
            return;
        }
        
       
        int p = partition(arr, low, high);
        
        quickSort(arr,low, p - 1);
        quickSort(arr,p + 1, high);
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        
        int pivot = arr[low];
        int i = low, j = high;
        
        while (i <= j){
            // REMEMBER THAT ARR[I] LESS THEN EQUAL TO DO IN ONLY ONE CASE
            // DO NOT DO ARR[I] <= PIVOT 
            // AND THEN IN NEXT LINE
            // ARR[I] >= PIVOT
            // THIS WILL GIVE ERROR
            // BECAUSE WE WANT TO PUT EQUAL ELEEMNTS EITHER 
            // ON LEFT SIDE OR EITHER ON RIGHT SIDE
            while (i <= high  && arr[i] <= pivot){
                i++;
            }
            
            while (j >= low && arr[j] > pivot){
                j--;
            }
            
            if (i < j){
                swap(arr[i],arr[j]);
            }
        }
        
        swap(arr[low], arr[j]);
        return j;
    }
};
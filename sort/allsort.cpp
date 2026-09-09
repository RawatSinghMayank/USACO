
class Solution1 {
public:
    vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();
        for (int i = 0; i < n; i++){

            for (int j = i + 1; j < n; j++){
                if (nums[i] > nums[j]){
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        return nums;
    }
};


class Solution2 {
public:
    vector<int> sortArray(vector<int>& arr) {

        int n = arr.size();
        bool swapped = false;

        for (int i = 0; i < n - 1; i++) {
            swapped = false;
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }
            if (!swapped)
                break;
        }
        return arr;
    }
};


class Solution3{
public:
    vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();
        for (int i = 0; i < n - 1; i++){
            int minIndex = i;

            for (int j = i + 1; j < n; j++){
                if (nums[j] < nums[minIndex]){
                    minIndex = j;
                }
            }
            if (i != minIndex){
               swap (nums[minIndex],nums[i]);
            }
         
        }
        return nums;
    }
};


class Solution4 {
public:
    vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();
        
        for (int i = 1; i < n; i++){
            int j = i - 1, curr = nums[i];

            while (j >= 0 && nums[j] > curr){
                nums[j+1] = nums[j];
                j--;
            }
            nums[j+1] = curr;
        }
        return nums;
    }
};

class Solution5 {
public:

    void recursiveBubbleSort (vector <int> &nums, int i,int n){

        if (i >= n - 1){
            return;
        }

        bool swapped = false;
        for (int j = 0; j < n - 1 - i; j++){
            if (nums[j] > nums[j + 1]){
                swap (nums[j],nums[j+1]);
                swapped = true;
            }
        }
        if (!swapped){
            return;
        }

        recursiveBubbleSort (nums, i + 1, n);
    }

    vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();
        
        recursiveBubbleSort (nums, 0, n);
        return nums;
    }
};

class InsertionSort {
public:
    vector<int> sortArray(vector<int>& nums) {
     
 
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            int j = i - 1, curr = nums[i];

            while (j >= 0 && nums[j] > curr) {
                nums[j + 1] = nums[j];
                j--;
            }
            nums[j + 1] = curr; 
        }
        return nums;
    }
};
class Solution6 {
public:

    void recursiveSelection (vector <int> &nums, int i,int n){

        if (i >= n - 1){
            return;
        }

        int minIndex = i;
        for (int j = i + 1; j < n; j++){
            if (nums[j] < nums[minIndex]){
               minIndex = j;
            }
        }
        if (minIndex != i){
            swap (nums[minIndex],nums[i]);
        }

        recursiveSelection (nums, i + 1, n);
        
    }

    vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();
        
        recursiveSelection (nums, 0, n);
        return nums;
    }
};


class Solution7 {
public:

    void recursiveInsertionSort (vector <int> &nums, int i,int n){

        if (i >= n){
            return;
        }
        int j = i - 1, curr = nums[i];
        while (j >= 0 && nums[j] > curr){
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j+1] = curr;
        recursiveInsertionSort (nums, i + 1, n);
    }

    vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();
        
        recursiveInsertionSort (nums, 1, n);
        return nums;
    }
};


class Solution8 {
public:

    void merge (vector <int> &nums, int low, int mid, int high){

        int i = low, j = mid + 1;

        vector <int> tempnums;
        while (i <= mid && j <= high){
            if (nums[i] <= nums[j]){
                tempnums.push_back (nums[i]);
                i++;
            }else{
                tempnums.push_back (nums[j]);
                j++;
            }
        }

        while (i <= mid){
            tempnums.push_back (nums[i]);
            i++;
        }

        while (j <= high){
            tempnums.push_back (nums[j]);
            j++;
        }

        int start = 0;
        for (int i = low; i <= high; i++){
            nums[i] = tempnums[start++];
        }
        
    }

    void mergeSort (vector <int> &nums,int low, int high){

        if (low >= high){
            return;
        }

        int mid = low + ((high - low) >> 1);

        mergeSort (nums, low, mid);
        mergeSort (nums, mid + 1, high);
        merge (nums, low, mid, high);
    }

    vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();
        
        mergeSort(nums, 0, n - 1);
        return nums;
    }
};



class Solution9 {
public:

    int partition(vector<int>& nums, int low, int high) {
        int i = low, j = high;
	    int pivot = nums[low];
	
        while (i < j){
        
            while (nums[i] <= pivot && i <= high - 1){
                i++;
            }
            
            while (nums[j] > pivot &&  j >= low - 1){
                j--;
            }
            
            if (i < j){
                swap (nums[i],nums[j]);
            }
        
	}	
	
        swap (nums[low], nums[j]);
        return j;

    }

    void quickSort(vector<int>& nums, int low, int high) {
        
        if (low >= high){
		    return;
	    }
	
        int mid = low + ((high - low) >> 1);
        
        int p = partition (nums, low, high);
        quickSort (nums,low, p - 1);
        quickSort (nums, p + 1, high);
    }

 
    vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();
        
        quickSort (nums, 0, n - 1);
        return nums;
    }
};



class Solution10 {
public:

    int partition(vector<int>& nums, int low, int high) {
        int i = low, j = high;
	    int pivot = nums[low];
	
        while (i < j){
        
            while (nums[i] <= pivot && i <= high - 1){
                i++;
            }
            
            while (nums[j] > pivot &&  j >= low - 1){
                j--;
            }
            
            if (i < j){
                swap (nums[i],nums[j]);
            }
        
	}	
	
        swap (nums[low], nums[j]);
        return j;

    }

    void quickSort(vector<int>& nums, int low, int high) {
        
        if (low >= high){
		    return;
	    }
	
        int mid = low + ((high - low) >> 1);
        
        int p = partition (nums, low, high);
        quickSort (nums,low, p - 1);
        quickSort (nums, p + 1, high);
    }

 
    vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();
        
        quickSort (nums, 0, n - 1);
        return nums;
    }
};



class Solution11 {
public:

    int partition (vector <int> &arr, int low, int high){

        
        // int index = low - 1;
        // int random = low + rand()%(high - low + 1);
        // swap(arr[random],arr[high]);
        // int pivot = arr[high];

        // for (int i = low; i < high; i++){
        //     if (arr[i] <= pivot){
        //         index++;
        //         swap (arr[index],arr[i]);
        //     }
        // }
        // index++;
        // swap(arr[index],arr[high]);
        // return index;


        int i = low, j = high;
        int pivot = arr[low];
        while (i < j){
            while (arr[i] <= pivot && i <= high - 1){
                i++;
            }
            while (arr[j] > pivot && j >= low + 1){
                j--;
            }
            if(i < j){
                swap (arr[i],arr[j]);
            }
        }

        swap(arr[j],arr[low]);
        return j;
    }

    void quickSort(vector<int>& arr, int low, int high) {
        
       if (low>= high){
            return;
        }
       int p = partition (arr,low,high);
        quickSort (arr,low, p -1);
        quickSort(arr,p + 1,high);
        
        
    }

 
    vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();
        
        quickSort (nums, 0, n - 1);
        return nums;
    }
};



class Solution12 {
public:
 
    vector<int> sortArray(vector<int>& nums) {

          
        int n = nums.size();
        int mini = *min_element(nums.begin(),nums.end());
        int maxi = *max_element(nums.begin(),nums.end());

        int range = maxi - mini + 1;
        vector<int> freq(range);
        for (auto &it: nums) {
            freq[it - mini]++;
        }   
        for (int i = 1; i < freq.size(); i++) {
            freq[i] += freq[i - 1];
        }

        vector<int> result(n);
        for (int i = n - 1; i >= 0; i--) {
            result[freq[nums[i] - mini] - 1] = nums[i];
            freq[nums[i] - mini]--;
        }

        return result;

    }
};

    void downHeapify(vector <int>& heap,int parent, int n) {
        
        while (true){

            int largest = parent;
            int left = 2 * parent + 1;
            int right = 2 * parent + 2;
            if (left < n && heap[left] > heap[largest]) {  
                largest = left;
            }

            if (right < n && heap[right] > heap[largest]) { 
                largest = right;
            }

            if (largest != parent) {
                std::swap(heap[parent], heap[largest]);
                
            }else{
                break;
            }
            parent = largest;
        }
       
    }

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {

    int n = nums.size();
      for (int i = n/2 - 1; i>= 0; i--){
        downHeapify(nums,i,n);
      }

     for (int i = n - 1; i >= 0; i--){

        swap(nums[0],nums[i]);
        downHeapify(nums,0,i);
     }
     return nums;
    }
};

class Solution {
public:

    void upHeapify(vector<int>& nums, int childIndex){

        while (childIndex > 0){
            int parentIndex = (childIndex - 1)/2;
            if (nums[parentIndex] < nums[childIndex]){
                swap(nums[parentIndex], nums[childIndex]);
                childIndex = parentIndex;
            }else{
                break;
            }
        }
    }        

    void downHeapify(vector<int>& nums, int index, int n){

        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2;
        int largestValueIndex = index;

        if (leftChild < n && nums[leftChild] > nums[largestValueIndex]){
            largestValueIndex = leftChild;
        }
        if (rightChild < n && nums[rightChild] > nums[largestValueIndex]){
            largestValueIndex = rightChild;
        }

        if (largestValueIndex != index){
            swap(nums[largestValueIndex],nums[index]);
            downHeapify(nums, largestValueIndex, n);
        }
    }
    vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();
        for (int i = n - 1; i  >= 0; i--){
            downHeapify(nums, i,n);
        }

        for (int i = n - 1; i >= 0; i--){
            swap(nums[0],nums[i]);
            downHeapify(nums,0,i);
        }
        return nums;
    }
};
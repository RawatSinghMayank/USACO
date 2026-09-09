1.Given Row and Column find the element at that place-
Traditional approach is to generate the full pascal traingle and then the element at that place.
nCr = n!/r! * (n-r)!
nPr = n!/(n-r)!


Given row = 5, col = 3
so formula for this is (for 1 based index ) = row-1Ccol-1 = 4C2 = 4 * 3/1 * 2 = 6
otherwise use ncr directly


int nCr(int n, int r) {
        
        if (r > n) return 0;
   
        long long result = 1;
        for (int i = 0; i < r; i++) {
            result *= 1LL * (n - i);
            result /= 1LL * (i + 1);
        }
        return result;

        time complextiy = O(r)
}



2.Print and nth row of the pascal traingle
https://www.geeksforgeeks.org/problems/pascal-triangle0652/1



3.Given n print the entire pascal traingle


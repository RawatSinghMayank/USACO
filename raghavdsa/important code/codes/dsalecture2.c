#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool searchMatrix(int m,int n, int arr[m][n],int ele) {
 int row=-1;
     int low = 0, high = m - 1;
     while (low <= high)
     {
         int mid = low + (high - low) / 2;
         if (arr[mid][n - 1] == ele)
             return true;
     else if(ele<arr[mid][n-1]){
         row=mid;
         high=mid-1;
     }
     else low=mid+1;
     }
     if(row==-1)return false;
     low = 0;
     high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[row][mid] == ele)
            return true;
        else if (arr[row][mid] < ele)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}

int maxones(int n, int m, int arr[m][n])
{
    int i = 0, j = n - 1;
    int idx = -1;
    while (i < m && j >= 0)
    {
        if (arr[i][j] == 1)
        {
            idx = i;
            j--;
        }
        else 
        {
            i++;
        }
    }
    return idx;
}
void sparse(int n, int m, int arr[m][n])
{

    int counter = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != 0)
                counter++;
        }
    }
    int a = 0;
    int i1 = a, i2 = 0;
    int arr2[n][counter];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != 0)
            {
                arr2[i1++][i2] = i;
                arr2[i1++][i2] = j;
                arr2[i1++][i2] = arr[i][j];
            }
            a++;
            i1 = a;
            i2++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < counter; j++)
        {
            printf("%d  ", arr2[i][j]);
        }
        printf("\n");
    }
}
void spiralmatrix(int n, int arr[n][n])
{
    int total = n * n;
    int c = 0;
    int sr = 0, sc = 0, er = n - 1, ec = n - 1;
    int s = arr[1][0];
    int temp;
    while (c < total)
    {
        for (int i = sc; i <= ec && c < total; i++)
        {
            temp = arr[sr][i];
            arr[sr][i] = s;
            s = temp;
            c++;
        }
        sr++;
        for (int i = sr; i <= er && c < total; i++)
        {
            temp = arr[i][ec];
            arr[i][ec] = s;
            s = temp;
            c++;
        }
        ec--;
        for (int i = ec; i >= sc && c < total; i--)
        {
            temp = arr[er][i];
            arr[er][i] = s;
            s = temp;
            c++;
        }
        er--;
        for (int i = er; i >= sr && c < total; i--)
        {
            temp = arr[i][sc];
            arr[i][sc] = s;
            s = temp;
            c++;
        }
        sc++;
    }
    arr[1][1] = s;
}
void print(int m, int n, int arr[m][n])
{
     for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int m, n;
   printf("enter m and n\n");
   scanf("%d%d",&m,&n);
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
//     int ele;
//     printf("enter element to be seached\n");
//     scanf("%d",&ele);
// int x=searchMatrix(m,n,arr,ele);
// if(x)printf("element is present");
// else printf("element is not present");

printf("%d",maxones(m,n,arr));
    return 0;
}

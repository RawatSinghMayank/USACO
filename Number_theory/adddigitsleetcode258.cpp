#include <bits/stdc++.h>
using namespace std;
// Input: num = 38
// Output: 2
// Explanation: The process is
// 38 --> 3 + 8 --> 11
// 11 --> 1 + 1 --> 2
// Since 2 has only one digit, return it.
// Example 2:

// Input: num = 0
// Output: 0
/* 1st method same as 2nd but it's recursive*/
// bool check(int num)
// {
//     return (num >= 0 and num <= 9);
// }

// int addDigits(int num)
// {
//     int ans = num;
//     while (!check(ans))
//     {
//         num = ans;
//         ans = 0;
//         while (num > 0)
//         {
//             ans += num % 10;
//             num = num / 10;
//         }
//     }
//     return ans;
// }

// 2nd
int addDigits(int num)
{

    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num = num / 10;
    }
    if (sum <= 9)
        return sum;
    return addDigits(sum);
}

// OPTIMAL 3rd method
//  int addDigits(int num)
//  {
//      if (num == 0)
//          return 0;
//      if (num % 9 == 0)
//          return 9;
//      return num % 9;
//  }
int main()
{
    cout << addDigits(38);
    return 0;
}
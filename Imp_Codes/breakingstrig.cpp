#include <bits/stdc++.h>
using namespace std;
void own(string g)
{
    string x = "mayank singh rawat";
    string ans = " ";
    for (auto i : x)
    {
        if (i == ' ')
        {
            cout << ans << endl;
            ans = " ";
        }
        else
            ans += i;
    }
    cout << ans << endl;
}
void tok(char arr[])
{
    char *portion = strtok(arr, " ");
    while (portion != NULL)
    {
        printf("%s\n", portion);
        portion = strtok(NULL, " ");
    }
}
void pok(string s)
{
    stringstream ans(s);
    string temp;
    while (ans >> temp)
    {
        cout << temp << endl;
    }
    cout << s[0];
}
int main()
{
    // own("mayank singh  rawat");
    // char x[] = "mayank is g";
    // tok(x);
    // string a = "This is a sentence";
    // pok(a);
    int ch[26] = {0};
    for (int i = 0; i < 26; i++)
        cout << ch[i];
    char dg[26] = {'*'};

    cout << dg;
}

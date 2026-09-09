// #include <iostream>
// using namespace std;
// int maze(int sr, int sc, int er, int ec)
// {
//     int rightways = 0, downways = 0;
//     if (sr == er && sc == ec)
//     {
//         return 1;
//     }
//     if (sr == er)
//     {
//         rightways = rightways + maze(sr, sc + 1, er, ec);
//     }
//     if (sc == ec)
//     {
//         downways = downways + maze(sr + 1, sc, er, ec);
//     }
//     if (sr < er && sc < ec)
//     {
//         rightways = rightways + maze(sr, sc + 1, er, ec);
//         downways = downways + maze(sr + 1, sc, er, ec);
//     }
//     int total = rightways + downways;
//     return total;
// }
// int main()
// {
//     cout << "enter no of rows " << endl;
//     int m;
//     cin >> m;
//     cout << "enter no of columns" << endl;
//     int n;
//     cin >> n;
//     cout << "total ways " << maze(1, 1, m, n);
//     return 0;
// }
#include <iostream>
int maze(int er , int ec){
    int upways=0,leftways=0;
    if(er==1 && ec==1){
        return 1;}
        if(er==1){
            leftways=leftways+maze(er,ec-1);
        }
        if(ec==1){
            upways=upways+maze(er-1,ec);
        }
        if(er>1 && ec>1){
            leftways=leftways+maze(er,ec-1);
             upways=upways+maze(er-1,ec);
        }
        int total=leftways+upways;
        return total ;
}
int main(){
using namespace std;

cout << "enter no of rows " << endl;
    int m;
    cin >> m;
    cout << "enter no of columns" << endl;
    int n;
    cin >> n;
    cout << "total ways " << maze(m,n);
    return 0;}
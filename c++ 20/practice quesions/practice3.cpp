#include <iostream>
void update(int *a ,int *b);
void update(int *a,int *b){
  
int s1=*a;
  *a=((*a) + (*b));
  *b=abs(((s1) - (*b)));
  std::cout<<*a<<std::endl<<*b;
} 
int main(){
  int x,y;
  std::cin>>x>>y;
update(&x,&y);
return 0;
}

#include <iostream>
using namespace std;

void fnc(int *a,int *b){
    int d = *a,c=*b;
    *a=d+c;
    *b=abs(d-c);
    cout<<*a<<endl<<*b<<endl;
}


int main() {
    
    int a,b;
    cin >> a >> b;
    fnc(&a,&b);
     cout << a << endl << b;
    return 0;
}
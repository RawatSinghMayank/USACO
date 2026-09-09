 #include <iostream>
 int main(){
    int n;
    std::cin>>n;
    int a=1;
    int b=n-1;
        for(int j=1;j<=(n*2)-1;j++){
            std::cout<<"*";}std::cout<<"\n";
               for(int i=1;i<=n-1;i++){
            for(int k=1;k<=b;k++){
                std::cout<<"*";
            }
            for(int l=1;l<=a;l++){
                std::cout<<" ";
            }a=a+2;
            for(int m=1;m<=b;m++){
                std::cout<<"*";}
                b--;
                std::cout<<std::endl;}
                return 0;}


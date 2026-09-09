 #include <iostream>
 int main(){
    int n;
    std::cin>>n;
    char a=65;
    int m1=65+n;
    char b=n+65-2;
        for(char j=65;j<=(65+(n)*2)-2;j++){
            std::cout<<j;}std::cout<<"\n";
               for(char i=65;i<=(65+n)-2;i++){
            for(char  k=65;k<=b;k++){
                std::cout<<k;
            }b--;
            for(char l=65;l<=a;l++){
                std::cout<<" ";
            }a=a+2;
            for(char m=m1;m<=65+(2*n)-2;m++){
                std::cout<<m;}m1++;
                std::cout<<std::endl;}
                return 0;}


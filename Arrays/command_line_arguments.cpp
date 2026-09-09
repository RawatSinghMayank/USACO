#include <iostream>

using std::cin;
using std::endl;
using std::cout;

int main(int argc, char *argv[]){

int i = 0;

while (i < argc){
cout << i <<" "<< argv[i] << endl;
i++;
}

return 0;
}
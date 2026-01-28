#include <iostream>
#include <vector>

using std::cin;
using std::endl;
using std::cout;
using std::vector;

  bool check_prime(int num){

        int count=0;
        for (int i=1; i<=num ;i++){
            if (num%i == 0){
                count++;
            }
        }
        if(count==2){
            return true;
        }
        else {
            return false;
        }
  }
    vector<int> primeRange(int M, int N) {
    
        vector <int> result;
        for (int i=M; i<=N; i++){
            if (check_prime(i)){
                result.push_back(i);
            }
        }
    return result; }       // T.C= O(N^2) and no extra space it is used for just returning the answer (otherwise we can print while checking inside the loop)

int main(){
    int M,N;
    cin>>M>>N;
    vector <int> result=primeRange(M,N);

    for ( auto &it : result ){
        cout<<it<<" ";
    }

return 0;
}
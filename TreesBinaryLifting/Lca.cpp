#include<bits/stdc++.h>
using namespace std;

class BinaryLifting {

private:
    int n, cols;
    vector<vector<int>> up;
public:
     BinaryLifting
    (int n, vector<int>& parent) {

        this->cols = log2(n);
        this->n = n;
        up.resize(n + 1, vector<int>(cols + 1,-1));
        
        buildTable(parent);
    }   
     void buildTable(vector<int>& parent) {

         for (int i = 0; i <= n; i++) {
            up[i][0] = parent[i];
        }    

        for (int col = 1; col <= cols; col++) {

            for (int node = 0; node <= n; node++) {

                if (up[node][col - 1] != -1) {
                    up[node][col] = up[up[node][col-1]][col-1];
                }
            }
        }
        
    }

    
    int kthAncestor(int node, int k) {
        
        for (int col = 0; col <= cols; col++) {
             
            if (k & (1 << col)) node = up[node][col];
            if (node == -1) return node;   
        }
        return node;
    }
    
    
};

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int n, q;
   cin >> n >> q;
   
   vector<int> parent(n + 1);
   
   parent[1] = -1;
   for (int i = 2; i <= n; i++) {
       cin >> parent[i];
   }
   
   BinaryLifting
 t(n,parent);
   while(q--) {
       
       int node, k;
       cin >> node >> k;
       cout << t.kthAncestor(node, k) << "\n";
   
   }     
    
    
    return 0;
}
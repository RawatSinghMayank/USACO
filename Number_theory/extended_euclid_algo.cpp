int my_gcd (int a, int b, int &x, int &y ){
        if (b == 0 ){
            x=1;
            y=0;
            return a;
        }
        int x1, y1;
        int g_c_d = my_gcd(b, a%b, x1, y1);
        x = y1;
        y = x1 - (a/b)*y1;
        return g_c_d;
    }
    
    vector<int> gcd(int a, int b){
        int x, y;
        vector <int> result;
        result.push_back(my_gcd(a,b,x,y));
        result.push_back(x);
        result.push_back(y);
        return result;
    }




//Without extra function
  vector<int> gcd(int a, int b){
      
      if (b == 0){
          vector <int> temp;
          temp.push_back(a);
          temp.push_back(1);
          temp.push_back(0);
          return temp;
      }
      
      vector <int> base_case = gcd(b,a%b);
      vector <int> result;
      result.push_back(base_case[0]);
      result.push_back(base_case[2]);
      result.push_back(base_case[1]-(a/b)*base_case[2]);
      return result;
      
    }

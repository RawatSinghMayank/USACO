#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<queue>
using namespace std;

int main(){

    auto add = [](int a, int b) {
        return a + b;
    };

    cout << add(2, 3) << endl;
    vector<pair<int,int>> nums = {{2,3},{5,2},{53,3},{5,3},{1,3}};

    sort(nums.begin(),nums.end(), [](pair<int,int>& a, pair<int,int>& b) {
        if (a.first == b.first) {
            return a.second > b.second;
        } else {
            return a.first < b.first;
        }
    });

     sort(nums.begin(),nums.end(), [](auto &a, auto& b) {
        if (a.first == b.first) {
            return a.second > b.second;
        } else {
            return a.first < b.first;
        }
    });

    for (auto &it: nums) {
        cout << it.first << " " << it.second << endl;
    }


    //capture by value, makes a copy
    int x = 10;
    auto f = [=]() {
        cout << x << endl;
    };
    f();


    auto cmp = [](auto& a, auto& b) {

        if (a.first == b.first) {

            return a.second > b.second;
        } else {
            return a.first < b.first;
        }
      
    };
    //sort- greater<int> desecnding to ascending
    //pq - greater<int> minHeap
    //sort compartor :        jis order mai chiya us order mai return krdo
    //if you do -> return a.first > b.first this means jis pair ka first element bda hai wo phale ayega- descending order sorting hoga

    //priority quueue mai ulta ho jayga
    //pq mai iska mtlb hoga ki : ascending order sorting hoga 
    //isse acha esa socho : tumhe chiya ki pair kai first eleemnt kai basis mai ascending sortin ho jaaye : think likethis :
    // tumhe chiya ki a.first < b.first
    //reverse krdo : a.first > b.first; 
    priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(cmp)> pq(cmp);

    pq.push({2,3});
    pq.push({3,2});
    pq.push({3,5});
    while (!pq.empty()) {
        cout << pq.top().first <<  " " << pq.top().second << " ";
        pq.pop();
    }cout << endl;
    return 0;
}

// . Capture Everything
// [&]

// Capture every variable by reference.

// Very common in DSA.

// [=]

// Capture every variable by value.

// Less common.




// // . Capture by Reference
// // int sum = 0;

// for (int x : nums) {

//     auto f = [&](int val) {
//         sum += val;
//     };

//     f(x);
// }

/* decltype(expression)

Meaning:
Returns the type of an expression.

Example:

int x = 10;

decltype(x) y = 20;

Compiler changes it to:

int y = 20;

------------------------------------------------

Lambda

auto cmp = [](auto a, auto b){

    return a.second > b.second;

};

Compiler internally creates an unnamed class.

Since we don't know its name, use

decltype(cmp)

to obtain its type.

------------------------------------------------

Algorithms (sort, stable_sort)

Comparator is passed as a function argument.
Type is deduced automatically.
No decltype needed.

------------------------------------------------

Containers (priority_queue, set, map)

Comparator is a template type parameter.

Need:

decltype(cmp)

and pass the object to the constructor:

priority_queue<
pair<int,int>,
vector<pair<int,int>>,
decltype(cmp)
> pq(cmp);*/
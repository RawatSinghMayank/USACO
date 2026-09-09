#include<bits/stdc++.h>
using namespace std;
// A list in C++ is a sequence container that allows you to store elements one after another.

// Implemented as a doubly linked list and maintains both front and back for fast operations on both the ends.
// Data is stored in non-contiguous memory, allowing fast insertion and deletion anywhere in the list (beginning, middle, or end).


int main() {

    list<int> myList;
    myList.push_front(2);
    myList.push_back(20);
    myList.push_front(999);

    for (auto &it: myList) {
        cout << it << " ";
    }
    cout << endl;


//     Lists do not allow random access, so to get an element at a specific position, you need to go through the list one by one from the start or end.
// The first and last elements can be accessed quickly using front() and back() methods.


    cout << myList.back() << endl;
    cout << myList.front() << endl;


//     3. Updating Elements
// List elements can be updated by accessing them with an iterator and using the assignment operator (=) to set a new value.
// Since lists do not support random access, you must use an iterator to reach the element you want to update.

    auto it = myList.begin();
    it++;
    it++;
    *it = -999;
    for (auto &it: myList) {
        cout << it << endl;
    }

    cout << "before insertion " << endl;
    it--;
    for (auto &it: myList) {
        cout << it << endl;
    }


    //use iterator to insert at position 
    myList.insert(it, -111);
    cout << "after insertion " << endl;
    for (auto &it : myList) {
        cout << it << endl;
    }


    //delete - use erase using iterator
    myList.erase(it);
    return 0;
}
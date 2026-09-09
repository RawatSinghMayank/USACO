#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int rno;
    float marks;
    Student(string name, int rno, float marks)
    {
        this->name = name;
    }
};
void change(Student *x)
{
    x->name = "topG";
    return;
}
int main()

{
    // Student m("mayank", 36, 99);
    // cout << m.name << endl;
    // change(&m);
    // cout << m.name;
    // or
    Student *m = new Student("mayank", 36, 90);
    cout << m->name << endl;
    change(m);
    cout << m->name << endl;
    return 0;
}
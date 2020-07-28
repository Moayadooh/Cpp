#include<iostream>
using namespace std;

struct str{
    char gender;
};
struct Student{
    int id;
    string name;
    str st;
}s1,s2; //Global declaration
void display(Student *s);
int main()
{
    Student s3,*s4; //Local declaration

    s1.id = 15128;
    s1.name = "Moayad";
    s1.st.gender = 'M';

    s3.id = 151281;
    s3.name = "Manasik";

    s4->id = 151282;
    s4->name = "Mohanned";

    s2 = {151283,"Mohammed"};

    cout << s1.name << " " << s1.st.gender << " " << s1.id << endl;
    cout << s3.name << " " << s3.id << endl;
    cout << s4->name << " " << s4->id << endl;
    display(&s2);

    return 0;
}
void display(Student *s)
{
    cout << s->name << " " << s->id << endl;
}

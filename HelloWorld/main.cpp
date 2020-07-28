#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    //endl means end line "new line"
    int age;
    string name;
    cout << "Enter your name and your age" << endl;
    cin >> name >> age; //you can separate the input using space button or using enter button
    cout << "your name is " << name << " and your age is " << age << endl;

    system("pause");  //command
    return 0;
}

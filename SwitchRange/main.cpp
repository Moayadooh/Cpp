#include <iostream>

using namespace std;

int main()
{
    int x = 2;
    switch(x)
    {
    case 1 ... 3:
        cout<<"First case";
        break;
    case 4:
        cout<<"Second case";
        break;
    case 5:
        cout<<"Third case";
        break;
    default:
        cout<<"Wrong selection";
    }
}

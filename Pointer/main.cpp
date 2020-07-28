#include<iostream>
using namespace std;

void Swap(int *x, int *y);
void display(int *start, int *end);

int main()
{
    int a = 17, b = 32;
    cout << &a << endl;
    cout << &b << endl;

    int *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = &b;
    cout << *ptr1 << endl;
    cout << *ptr2 <<endl << endl;

    int x = 5, y = 99;
    cout << x << " " << y << endl;
    Swap(&x,&y);
    cout << x << " " << y << endl << endl;

    int arr[5] = {58,65,5,22,11};
    cout << arr[2] << endl;
    cout << *(arr+2) << endl << endl;

    int numbers[7] = {15,97,54,15,27,43,50};
    display(numbers+1,numbers+7);
    return 0;
}

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void display(int *start, int *end)
{
    int *ptr;
    for(ptr=start;ptr!=end;ptr++)
    {
        cout << *ptr << endl;
    }
}

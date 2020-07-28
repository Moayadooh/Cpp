#include<iostream>
using namespace std;
int maximum(int [], int, int);
int main()
{
    int numbers[] = {15,6,187,25,0,1,7,4,677,66};
    int s1 = sizeof(numbers); //return total number of bytes of all values
    int s2 = sizeof(numbers[0]); //return total number of bytes of single value
    cout << maximum(numbers,s1,s2) << endl;
    return 0;
}

int maximum(int num[], int s1, int s2)
{
    int biggest = num[0];
    for(int i=0;i<s1/s2;i++)
    {
        if(num[i]>biggest)
            biggest = num[i];
    }
    return biggest;
}

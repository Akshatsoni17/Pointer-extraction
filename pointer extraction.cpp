#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {2,4,6,8,10};
    int i=0;
    int *ptr = &arr[0];
    cout<<"Enter the position: "<<endl;
    cin>>i;
    ptr = ptr + i;
    cout<<"The element at position is: "<<*ptr;
    return 0; 
}
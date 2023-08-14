// Write a program to check if array contains duplicate items or not and if present remove the duplicate items.

#include <iostream>

using namespace std;

int main()
{
    int a[20], n;
    cout<<"Enter number of items you want to enter : ";
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cout<<"Enter number "<<i+1<<" : ";
        cin>>a[i];
    }
    cout<<"\nYour original array : ";
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    int c = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(a[j] == a[i])
            {
                c++;
                for(int k = j; k < n; k++)
                {
                    a[k] = a[k+1];
                }
            }
        }
    }
    n = n - c;
    if(c == 0)
    {
        cout<<"\nYour array has no duplicate items...\n";
        cout<<"\nYour array : ";
    }
    else
    {
        cout<<"\nYour array after removing duplicate items : \n";
    }
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}
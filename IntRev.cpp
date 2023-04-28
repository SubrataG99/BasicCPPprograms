// Write a program to reverse an integer and check if it Palindrome and find difference

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int chk = n;
    int s = 0;
    while(n>0)
    {
        s = (10*s) + (n%10);
        n = n/10;
    }
    if(s==chk)
    {
        cout<<"It is a Palindrome number : "<<s;
    }
    else
    {
        cout<<"The reverse number is : "<<s;
        cout<<"\nThe difference between the original and reverse number is : "<<abs(s-chk);
    }
    return 0;
}
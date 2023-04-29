// Write a program to check whether an integer is Armstrong number or not.     { (number = sum(digit**len(number))) }

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int s = 0;
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int c = 0;
    int chk = n;
    int temp = 0;
    while(n>0)
    {
        temp = (10*temp) + n%10;
        n = n/10;
        c++;
    }
    while(temp>0)
    {
        s = s + pow(temp%10, c);
        temp = temp/10;
    }
    cout<<"The sum is "<<s;
    if(s == chk)
        cout<<"\nIt is Armstrong number";
    else
        cout<<"\nIt is not Armstrong number";
    return 0;
}
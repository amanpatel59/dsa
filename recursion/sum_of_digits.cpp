#include <bits/stdc++.h>

using namespace std;

int sum_of_digits(int n)
{
    if(n<=9)
    {
        return n;
    }

    // int digit = n%10;
    // n = n/10;
    // return digit + sum_of_digits(n);

    // or can also be written as
    
    return sum_of_digits(n/10) + n%10;
}

int main()
{
    int n;
    cout<<"enter number = ";
    cin>>n;
    cout<<sum_of_digits(n);
}
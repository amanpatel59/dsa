#include <bits/stdc++.h>

using namespace std;

int sum_till_n(int n)
{
    if(n<=1)
    {
        return n;
    }

    return n+sum_till_n(n-1);
}


int main()
{
    int n;
    cout<<"enter till where you want the sum = ";
    cin>>n;
    cout<<sum_till_n(n);
}
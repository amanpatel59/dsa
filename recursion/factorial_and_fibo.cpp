#include <bits/stdc++.h>

using namespace std;


int factorial(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}


int fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    
    return fibo(n-1)+fibo(n-2) ;
}

int main()
{
    int n;
    cout<<"enter number = ";
    cin>>n;
    cout<<"factorial = "<<factorial(n);

    cout<<endl<<n<<"th fibo number is = "<<fibo(n);
    return 0;
}
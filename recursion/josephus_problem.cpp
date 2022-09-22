#include <bits/stdc++.h>

using namespace std;

// VIDEO HI DEKH LO LALA

int josephus_prob(int n , int k)
{
    if(n==1)
    {
        return 0;
    }

    return (josephus_prob(n-1,k)+k)%n;
}


int main()
{
    int n,k;
    cout<<"enter number of people = ";
    cin>>n;
    cout<<"enter the whitch person should be killed = ";
    cin>>k;
    cout<<"Last standing = "<<josephus_prob(n,k);
}
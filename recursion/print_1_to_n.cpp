#include <bits/stdc++.h>

using namespace std;

// tail recursion is better than normal recursive
// since it takes less time and less auxillary space


// MUST CHECK Print n to 1 problem too

// recursive
int print(int n)
{
    if(n==0)
    {
        return 0;
    }
    print(n-1);
    cout<<n<<" ";
}

// not every non tail recursive function can be converted to tail recursive 
// example merge(recursive) and quick(tail recursive) sort

// tail recursive
int print_tail_recursive(int n , int k)
{
    if(n==0)
    {
        return 0;
    }

    cout<<k<<" ";
    print_tail_recursive(n-1,k+1);
}

int main()
{
    int n;
    cout<<"enter number = ";
    cin>>n;
    print(n);
    return 0;
}
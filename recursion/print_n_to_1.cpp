#include <bits/stdc++.h>

using namespace std;

// MUST CHECK Print 1 to n problem too

int print_till_1(int n)
{
    if(n==0)
    {
        return 0;
    }

    cout<<n<<" ";
    print_till_1(n-1);
}

int main()
{
    int n;
    cout<<"enter number = ";
    cin>>n;
    print_till_1(n);
    return 0;
}
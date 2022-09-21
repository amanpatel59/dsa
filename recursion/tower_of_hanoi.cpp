#include <bits/stdc++.h>

using namespace std;

// BRAIN STORMING NEEDED
// HELP NEEDED

void tower_of_hanoi(int n,char a,char b, char c)
{
    if(n==1)
    {
        cout<<"move 1 from "<<a<<" to "<<c<<endl;
        return;
    }

    tower_of_hanoi(n-1,a,c,b);
    cout<<"move "<<n<<" from "<<a<<" to "<<c<<endl;
    tower_of_hanoi(n-1,b,a,c);
}


int main()
{
    int n;
    cout<<"input number of discs = ";
    cin>>n;
    cout<<"considering A as starting and C as ending and B as auxillary"<<endl;
    char a = 'A';
    char b = 'B';
    char c = 'C';
    tower_of_hanoi(n,a,b,c);
}
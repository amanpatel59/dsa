#include <bits/stdc++.h>

using namespace std;


bool palindrome_check(string &n , int start ,int end)
{

    if(start>=end)
    {
        return true;
    }

    if(n[start] == n[end])
    {
        return palindrome_check(n,start+1,end-1);
    }

}

int main()
{
    string n;
    cout<<"enter the string you want to check for = ";
    cin>>n;
    cout<<palindrome_check(n,0,n.length()-1);
}
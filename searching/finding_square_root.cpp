#include <bits/stdc++.h>

using namespace std;

int find_sqrt(int n)
{
    int start = 1 , end = n , ans = -1;

    while(start<=end)
    {
        int mid = (start+end)/2;

        if(mid*mid == n)
        {
            return mid;
        }
        if(mid*mid > n)
        {
            end = mid-1;
        }
        if(mid*mid < n)
        {
            start = mid+1;
            ans = mid;
        }
    }
    return ans;
}

int main()
{
    cout<<"number you want to find square root of = ";
    int num;
    cin>>num;


    cout<<find_sqrt(num);

    // cout<<floor(log2(num));
    
}
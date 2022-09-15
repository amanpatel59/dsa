#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<endl<<"enter size of array = ";
    cin>>n;
    int arr[n];
    cout<<endl<<"enter array "<<endl;
    for (int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    int maxi = INT_MIN;
    int index;
    for (int i =0 ;i<n;i++)
    {
        if(arr[i]>maxi)
        {
            maxi = arr[i];
            index = i;
        }
    }
    cout<<"index of the largest element is = "<<index<<endl;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"enter size of array = ";
    cin>>n;
    int arr[n];
    for (int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    // must have a look 

    // keep count of non-zero elements , by this we know exact address of the first zero 
    // now if any non-zero number is spotted we can just swap it with the first zero

    int count = 0;
    for (int i = 0 ;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }

    for (int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    
}
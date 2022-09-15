#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n ; 
    cout<<"enter sie of the array = ";
    cin>>n;
    int arr[n];
    cout<<"enter array "<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    // not so typical .... but still have a look

    int count = 1;

    for( int i =0 ;i < n; i++)
    {
        if(arr[i] == arr[i+1])
        {
            count++;
        }
        else
        {
            cout<<arr[i]<<" "<<count<<endl;
            count = 1;
        }
    }

    

}
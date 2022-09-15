#include <bits/stdc++.h>

using namespace std;

// UNSOLVED

int main()
{

    // we can say fibonacci is 2-bonacci i.e. sum of previous 2 elements
    // n-bonacci is sum of previous n elements

    // question -> print first m n-bonacci number

    int i,n,m,sum=0,curr_start=0,curr_end=n,num=1;
    cout<<"enter the n in n-bonacci = ";
    cin>>n;
    cout<<"enter how many numbers you want from n-bonacci = ";
    cin>>m;
    int arr[m];
    for(i = 0; i<n ;i++)
    {
        arr[i] = 0;
    }
    arr[i+1] = 1;
    for(i = n+1 ;i <m ;i++)
    {
        for(int j = curr_start ;j<curr_end+1;j++)
        {
            sum += arr[j];
        }
        arr[i] = sum;
    }

    for(int k=0;k<m;k++)
    {
        cout<<arr[k]<<" ";
    }



}
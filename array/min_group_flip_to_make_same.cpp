#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    cout<<"enter size of the array = ";

    cin>>n;

    cout<<"enter elements of array "<<endl;

    int arr[n];
    for(int i =0; i< n ; i++)
    {
        cin>>arr[i];
    }

    // question -> given binary array
    // make array whole 1 or whole 0 
    // find least flips needed to achieve so
    // can only flip either 0 or 1 not both 
    // can flip consecutive elements

    // example 1 1 0 0 0 1
    // here if we flip 1s then we require 2 flips
    // 1 flip is 0 to 1 and 2nd is 4th 
    // where as if we flip 0 , we can do 2 to 4 i.e. only 1 flip


    // CONCEPT
    // in case of binary array number of groups can atmost differ by 1
    // either the difference will be 1 or both will have same number of groups
    // if the starting and ending both elements are same then the difference in groups is 1
    // if ending and starting are different then group difference is 0
    // to minimmize the flips i can flip whatever my 2nd group contains


    // interesting problem

    for(int i = 1 ; i < n ; i++)
    {
        if(arr[i]!=arr[i-1])
        {
            if(arr[i]!=arr[0])
            {
                cout<<"from "<<i<<" to ";
            }
            else
            {
                cout<<(i-1)<<endl;
            }
        }
    }

    // wehn end of the array is also teh end of the group ehicch was supposed to be flipped
    // in those cases this piece of code is needed
    
    if(arr[n-1] != arr[0])
    {
        cout<<(n-1)<<endl;
    }
    




}
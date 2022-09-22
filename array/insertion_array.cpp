// question -> insertion in array

#include <bits/stdc++.h>

using namespace std;

// int insertion(int arr[],int n,int pos,int num)
// {
//     int index = pos-1;
//     for (int i = n-1; i>=index;i--)
//     {
//         arr[i+1] = arr[i];
//     }
//     arr[index] = num;
//     for (int i = 0 ; i<sizeof(arr)/sizeof(arr[0]) ; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

int main()
{
    int num , pos;
    int arr[20] = {1,3,4,6,1,3,5,67,7,4,32,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"original array "<<endl;
    for (int i = 0 ; i<sizeof(arr)/sizeof(arr[0]) ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"enter the number you want to insert = ";
    cin>>num;

    cout<<"enter the position you want to insert to = ";
    cin>>pos;

    // MAIN LOGIC
    
    int index = pos-1;
    for (int i = n-1; i>=index;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = num;
    for (int i = 0 ; i<sizeof(arr)/sizeof(arr[0]) ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}
#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    cout<<"original array "<<endl;
    for (int i = 0 ; i<sizeof(arr)/sizeof(arr[0]) ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"enter the number you want to delete = ";
    int num;
    cin>>num;

    // MAIN LOGIC
    int index;
    for (int i = 0 ; i<sizeof(arr)/sizeof(arr[0]) ; i++)
    {
        if(arr[i] == num)
        {
            index = i;
            break;
        }
    }
    for (int j = index ; j<sizeof(arr)/sizeof(arr[0]) ; j++)
    {
        arr[j] = arr[j+1];
    }

    cout<<"array after deletion "<<endl;
    for (int i = 0 ; i<sizeof(arr)/sizeof(arr[0]) ; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}


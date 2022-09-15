#include <bits/stdc++.h>

using namespace std;

int reverse(int arr[],int low,int high)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

int main()
{
    int n;
    cout << "enter size of array = ";
    cin >> n;
    int arr[n];
    cout << "enter elements of array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int d;
    cout << "enter by how much you want to rotate = ";
    cin >> d;

    // one thing here can be done is , do left rotate by one D times
    // hence time complexity =  theta(D*n)


    // reverse the d elements 
    reverse(arr,0,d-1);

    //reverse the array with other than d elements
    reverse(arr,d,n-1);

    // now reverse the whole array
    reverse(arr,0,n-1);


    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
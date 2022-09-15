#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << " enter size of the array = ";
    cin >> n;
    int arr[n];
    cout << "enter array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // must check out


    int new_size = 1;
    for(int i = 1;i<n;i++)
    {
        if(arr[i]!=arr[new_size-1])
        {
            arr[new_size] = arr[i];
            new_size++;
        }
    }

    for (int i = new_size; i < n; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"new size of the array = "<<new_size;

}
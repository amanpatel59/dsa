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

    bool flag = 1;


    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        cout << "Sorted in ascending order" << endl;
    }
    else
    {
        cout << "not Sorted in ascending order";
    }
}

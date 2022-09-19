#include <bits/stdc++.h>

using namespace std;

// MUST DO IN TIME -> O(n) , SPACE -> O(1)
// code here follows the constraints

// question -> ek array hai usme 0 se max of array tak saare elements present hai
// ek element hai jo repeat kr raha hai , only one , but it can can repeat any number of times

// question solve krne ke liye 
// hum array ke index pr jo element hoga 
// uss element ko as an index lenegy aur uss index ke element pr jaaeingey 
// waha ja kr bhi same repeat kreingey

// yaha pr hum slow aur fast pointer waali spproach lagaeingey



int find_repeating(int arr[],int n)
{
    int slow = arr[0]+1 , fast = arr[0]+1;

    // PHASE 1
    // slow ko one at a time aur fast ko 2 steps at a time karaao
    // jb ye do meet kr jaaei toh exit krlo

    // claim of phase 1
    // agar slow ek aur fast do point move krei to slow aur fast humeisha hi cyclic loop ke andar meet kreingey

    do
    {
        slow = arr[slow]+1;
        fast = arr[arr[fast]+1]+1;
    } while (slow != fast);

    // PHASE 2
    // ek pointer ko fix rakho meeting point pr aur doosre ko first element pr le aao
    // ab slow aur fast dono ko ek hi speed i.e. one at a time pr move karao
    // ek poinnt aaeiga jb dono meet kreingey 
    // jiss point pr meet kreingey wo humaara 1st element hoga cyclic chain ka , jo ki repeating element bhi hoga


    slow = arr[0]+1;
    while(slow != fast)
    {
        slow = arr[slow]+1;
        fast = arr[fast]+1;
    }

    return slow-1;
}

// iss code mei jagah jagah +1/-1 kiya hai kyuki hum consider kr rahe hai ki smallest elemnt humara 0 hoga 
// agar hum smallest ko 1 assume krein toh +1/-1 ki koi need nahi 
// 

int main()
{
    int n ;
    cout<<"enter the sizze of the array = ";
    cin>>n;

    int arr[n];
    cout<<"enter the elements of array "<<endl;

    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    find_repeating(arr,n);
}


// example
// this is the case when we have 1 as the smallest
// index ->    0 1 2 3 4 5 6 7
// elements -> 1 3 2 4 6 5 7 3

// chain obtained will be 
// 1 -> 3 -> 4 -> 6 -> 7 -> goes back to 3
// hence we have cyclic chain , hence we need to find the first element of this chain
// which is 3 , hence 3 is the repeating 

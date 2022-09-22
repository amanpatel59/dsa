#include <bits/stdc++.h>

using namespace std;

// INTERESTING

// question -> rope ki length given hai
// rope ko esse cut krna hai ki rope ke har piece ki length a,b,c mei se koi length ho
// humei maximize krna hai ropes ke pieces(number of rope pieces)

// time -> O(3^n)
// better solution with DP

int max_pieces(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;
    int res1 = max(max_pieces(n - a, a, b, c),
                  max_pieces(n - b, a, b, c));

    int result = max(res1,
                  max_pieces(n - c, a, b, c));  
    if (result == -1)
    {
        return -1;
    }
    return result + 1;
}

int main()
{
    int n, a, b, c;
    cout << "enter rope length = ";
    cin >> n;
    cout << "enter allowed length of pieces a,b,c respectively" << endl;
    cin >> a >> b >> c;
    cout << max_pieces(n, a, b, c);
    return 0;
}
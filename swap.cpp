#include <bits/stdc++.h>
using namespace std;

void isSwap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    cin >> a >> b;
    isSwap(&a, &b);
    cout << a << " " << b;
    return 0;
}
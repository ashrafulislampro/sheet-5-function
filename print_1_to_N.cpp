#include <bits/stdc++.h>
using namespace std;
void print_num(int n)
{

    if (n < 1)
    {
        return;
    }
    cout << n;
    if (n > 1)
    {
        cout << " ";
    }
    print_num(n - 1);
}
int main()
{
    int n;
    cin >> n;
    print_num(n);
    return 0;
}
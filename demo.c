#include <stdio.h>
void add(int arr[], int n)
{
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("%d %d\n", len, n);
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    add(arr, 10);
    return 0;
}
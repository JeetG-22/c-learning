#include <stdio.h>
#include <iostream>
using namespace std;

/* Runtime
 * O(n) : Average
 * O(n^2) : Worst Case
 */
int main()
{
}

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j > 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
    }
}
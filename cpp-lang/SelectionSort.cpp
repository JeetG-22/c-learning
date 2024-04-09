#include <stdio.h>
#include <iostream>
using namespace std;

/*Runtime
 * O(n)
 * O(n^2)
 */

int main()
{
}

void selectionSort(int arr[], int n)
{
    int i, j, min_indx;
    for (i = 0; i < n - 1; i++)
    {
        min_indx = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[min_indx] > arr[j])
            {
                min_indx = j;
            }
        }
        swap(&arr[min_indx], &arr[i]);
    }
}

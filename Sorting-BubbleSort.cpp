// bubbleSort alogorithm using cpp 
// time complexity O(n*2)
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubbleSort(int arr[], int n)
{

    int i, j;

    for (i = 0; i < n - 1; i++)
    {

        bool swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {23, 45, 35, 56, 66, 76, 65};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    cout << "sorted array is\n";
    printArray(arr, n);
    return 0;
}
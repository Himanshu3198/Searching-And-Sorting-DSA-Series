// Insertion sort implementation using cpp
// time complexity O(n*2)
#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];

            int j = i - 1;
        while ((j >= 0) && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

  void printArray(int arr[],int n){

      for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
      }
      cout<<"\n";
  }
 
int main()
{
    int arr[] = {12, 13, 3, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    InsertionSort(arr, n);
    printArray(arr,n);
    return 0;
}

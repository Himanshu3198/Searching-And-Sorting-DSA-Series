#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int *L , int leftcount, int *R , int rightcount)
{

    int i = 0, j = 0, k = 0;
    while (i < leftcount && j < rightcount)
    {
        if (L[i] < R[j])
        {
            arr[k] = L[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = R[j];
            k++;
            j++;
        }


    }

        while (i < leftcount)
        {
            arr[k] = L[i];
            k++;
            i++;
        }
        while (j < rightcount)
        {
            arr[k++] = R[j++];
            k++;
            j++;
        }
    
}
void mergeSort(int arr[], int n)
{
    int mid ;

    if(n<2) {
        return;
    }
    mid = n / 2;

    // L = (int *)malloc(mid * sizeof(int));

        // R = (int *)malloc((n - mid) * sizeof(int *));

  int *L=new int(mid);
   int *R=new int ((n-mid));

    for (int i = 0; i < mid; i++)
    {
        L[i] = arr[i];
    }

    for (int i = mid; i < n; i++)
    {
        R[i - mid] = arr[i];
    }

    mergeSort(L, mid);
    mergeSort(R, n - mid);
    merge(arr, L, mid, R, n - mid);
    free(L);
    free(R);
}
int main()
{
    int arr[] = {6, 2, 3, 1, 9, 10, 15, 13, 12, 17};
    int sizeofarr = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, sizeofarr);

    for(int i=0;i<sizeofarr;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
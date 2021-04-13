
/*  Merge Sort algorithm
      time Complexity O(n*log(n)  
      */
#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int *L , int leftcount, int *R , int rightcount)
{

    int i = 0, j = 0, k = 0;
    while (i < leftcount && j < rightcount)
    {
        if (L[i] < R[j])
        {    // modifying arr if L[i] less than R[j] and increament i,k for next comparison
            arr[k] = L[i];
            k++;
            i++;
        }
        else
        {
              // modifying arr if R[j] greater than L[i] and increament j,k for next comparison
            arr[k] = R[j];
            k++;
            j++;
        }


    }
      // this case arrived when either i or j reach to max iteration
    //   then remaining element can placed as it is i.e
    //  arr[5,6,7]   L[11 12 13]

        while (i < leftcount)
        {
            arr[k] = L[i];
            k++;
            i++;

            //arr[5,6,7,11,12,13]
        }
        while (j < rightcount)
        {
            arr[k] = R[j];
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

  int L[mid];
  int R[n-mid];

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
}
int main()
{
    // int arr[] = {12, 11, 13, 5, 6, 7};
        int arr[] = {6, 2, 3, 1, 9, 10, 15, 13, 12, 17};

    int sizeofarr = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, sizeofarr);

    for(int i=0;i<sizeofarr;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}


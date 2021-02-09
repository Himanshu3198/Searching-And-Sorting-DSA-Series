//#include<bits/stdc++.h>
//#include<iostream>
//#define E endl
//using namespace std;
//int  BinarySearch(int n,int a[],int x){
//    sort(a,a+n);
//    int l=a[0],r=a[n-1],mid= l+(l+r)/2;
//    while(l<=r)
//    {
//        if(x==a[mid]){
//            return mid;
//        }
//        else if(a[mid]<x){
//            r=mid+1;
//        }
//        else{
//            l=mid-1;
//        }
//    }
//    return -1;
//}
//int main(){
//	int y=8;
//    int a[]={1,3,5,7,8,9,10,11};
//    int n=sizeof(a)/sizeof(a[0]);
//    int result=BinarySearch(n,a,y);
//    if(result==-1)
//    {
//        cout<<"Not found\n";
//    }
//    else{
//        cout<<"element is found at position\t"<<result;
//    }
//
//}

// Binary Search in C++

#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {
  
	// Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int x = 4;
  int n = sizeof(array) / sizeof(array[0]);
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
}

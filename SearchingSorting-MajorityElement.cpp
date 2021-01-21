#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find majority element in the array

//  majority element is >n/2
// a: input array
// size: size of input array



  bool findMajor(int a[],int n,int major){
      
      int count=0;
      for(int i=0;i<n;i++){
          if(a[i]==major){
              count++;
          }
      }
      if(count>n/2){
          return 1;
      }
      else{
          return 0;
      }
  }
int majorityElement(int a[], int n)
{
    
    // your code here
 int major=a[0];
      int count=1,count1=0;

      for(int i=1;i<n;i++){
   
        if(major==a[i]){
     
              count++;
        }

        else{
             count1++;
            count--;
            if(count==0){
                major=a[i];
                count=1;
            }
           
        }

      }
      
     if( findMajor(a,n,major)){
         return major;
     }
     else{
         return -1;
     }
   
    
    
}

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        cout << majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends
   

//    time complexity O(log(n))
//    space compxityO(1)
	int findKRotation(int arr[], int n) {
	    // code here
        
	    
            int low=0,high=n-1;
        while(low<=high){
            
            
            int mid=(low+high)/2;
            
              int prev=(mid+n-1)%n;
              int next=(mid+1)%n;
              
              if(arr[mid]<=arr[prev] and arr[mid]<=arr[next]){
                  return mid;
              }
              if(arr[low]<=arr[mid] and arr[mid]<=arr[high]){
                  return low;
              }
              
              if(arr[low]<=arr[mid]){
                  low=mid+1;
              }else if(arr[mid]<=arr[high]){
                    high=mid-1;
              }
        }
        
        return 0;
	    
	        
	}

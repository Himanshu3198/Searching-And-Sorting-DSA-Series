  bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n);
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                int sum=X-(A[i]+A[j]);
                int start=j+1;
                int end=n-1;
                while(start<=end){
                int mid=(start+end)/2;
                if(A[mid]==sum) return true;
                if(sum>A[mid]) start=mid+1;
                else end=mid-1;
               }
            }
        }
        return false;
    }

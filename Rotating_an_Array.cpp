class Solution{   
public:

    void reverse(int arr[], int n ){
	    
	    
	   for(int i = 0,j=n-1 ; i < j ; i++,j--){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
	       
	}
	
	
    void leftRotate(int arr[], int n, int d) {
        // code here
         if(d>=n){
	       d=d%n;
	   }
	                                        
	   if(d==0) return;
	   
	   reverse(arr,n);
	 
	   reverse(arr,n-d);
	 
	   reverse(arr+(n-d),d);
	   
    }
};

class Solution{
	
	
	public:
	void reverse(int arr[], int n ){
	    
	    
	   for(int i = 0,j=n-1 ; i < j ; i++,j--){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
	         
	}
	

	
	void leftRotate(int arr[], int k, int n) 
	{ 
	   // Your code goes here
	      if(k>n){
	       k=k%n;
	   }
	                                        
	   if(k==0) return;
	   
	   reverse(arr,n);
	 
	   reverse(arr,n-k);
	  
	   reverse(arr+(n-k),k);
	   
	} 	 
};

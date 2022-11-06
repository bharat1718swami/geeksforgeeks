class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    
	    int max1=-1,max2=-1;
	    
	    for(int i=0;i<n;i++){
	        if(max1<arr[i])
	            max1=arr[i];
	    }
	    
	    for(int i=0;i<n;i++){
	        if(max1==arr[i]) continue;
	        else if(max2<arr[i]) max2=arr[i];
	    }
	    
	    return max2;
	}
};

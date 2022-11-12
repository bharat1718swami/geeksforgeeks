class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    
	    for(int i=0,j=1;j<n;){
	        if(arr[i]==0){
	            if(arr[j]!=0){
	                int temp=arr[i];
	                arr[i]=arr[j];
	                arr[j]=temp;
	                i++;
	                j++;
	            }
	            
	            else j++;
	        }
	        
	        else i++,j++;
	    }
	}
};

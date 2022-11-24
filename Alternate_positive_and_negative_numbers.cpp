class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    
	    int negative[n],positive[n];
	    
	    int P=0,N=0;
	    
	    for(int i=0;i<n;i++){
	        if(arr[i]<0){
	            negative[N]=arr[i];
	            N++;
	        }
	        
	        else{
	            positive[P]=arr[i];
	            P++;
	        }
	    }
	    

	   
	   if(P==0||N==0) return;
	    
	    int p=0,k=0;
	    
	    for(int i=0,j=0;i<n;i++){
	        
	        if((i+j)%2==0&&p<P&&P!=0){
	            arr[i]=positive[p];
	            p++;
	            if(k>=N) j++;
	        }
	        
	        
	        if((i+j)%2==1&&k<N){
	            arr[i]=negative[k];
	            k++;
	            if(p>=P) j++;
	        }
	       
	    }
	    
	}
};

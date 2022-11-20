class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    
	    int ans=0,count=0,index=0;
	    
	    for(int i=0,j=0;i<n&&j<m;){
	        if(arr[i][j]==1){
	            count++;
	        }
	        
	        j++;
	        
	        if(j==m){
	            
	             if(ans<count){
	                index=i;
	                ans=count;
	            }
	            //ans=max(ans,count);
	           
	            j=0;
	            i++;
	            count=0;
	            
	        }
	        
	    }
	    
	    if(ans==0) return -1;
	    
	    return index;
	}

};

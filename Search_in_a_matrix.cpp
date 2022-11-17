class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
	    
	    for(int i=0,j=0;i<N&&j<M;){
	        
	        if(mat[i][j]==X){
	            return 1;
	        }
	        
	        j++;
	        if(j==M){
	            j=0;
	            i++;
	        }
	    }
	    
	    return 0;
	}
};

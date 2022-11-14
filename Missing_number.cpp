int missingNumber(int A[], int N)
{
    // Your code goes here
    
    int ans=0;
    for(int i=0;i<N-1;i++){
        
        ans=A[i]^ans;
        ans=ans^(i+1);
    }
    
    return ans^N;
}

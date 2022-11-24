class Solution{
    public:
        long long pairWithMaxSum(long long arr[], long long N)
    {
        // Your code goes here
        
        long long ans=0;
        
        for(int i=0;i<N-1;i++){
            long long temp=arr[i]+arr[i+1];
            ans=max(ans,temp);
        }
        
        return ans;
    }
};

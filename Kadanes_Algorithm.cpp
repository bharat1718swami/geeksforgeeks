class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        int currsum=arr[0];
        int maxsum=arr[0];
        for(int i=1;i<n;i++){
            currsum=max(currsum+arr[i],arr[i]);
            maxsum=max(currsum,maxsum);
        }
        
        return maxsum;
        
        // Your code here
        
    }
};

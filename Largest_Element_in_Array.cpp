class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int ans=-1;
        
        for(int i=0;i<n;i++){
            if(ans<arr[i]) ans=arr[i];
        }
        
        return ans;
    }
};

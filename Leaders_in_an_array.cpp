class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        
        vector<int> ans;
        ans.push_back(a[n-1]);
        int max=a[n-1],count=1;
        
        for(int i=n-2;i>=0;i--){
            int temp=a[i];
            if(a[i]>=max){
                ans.push_back(a[i]);
                max=a[i];
                count++;
            }
            
        }
        
        for(int i=0,j=count-1;j>i;i++,j--){
            int temp=ans[i];
            ans[i]=ans[j];
            ans[j]=temp;
        }
        
        return ans;
        
        
        
    }
};

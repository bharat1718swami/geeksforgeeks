class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        int ans[P]={};
        
        for(int i=0;i<N;i++){
            ans[arr[i]-1]++;
        }
        
        
        arr.clear();
        
        for(int i=0;i<N;i++){
            
            if(i>=P) arr.push_back(0);
            
            
            else arr.push_back(ans[i]);
        }
        
        
    }
};

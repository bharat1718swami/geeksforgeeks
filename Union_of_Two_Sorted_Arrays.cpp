class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        
        vector<int> ans;
        int i = 0;
        int j = 0;
        while(i < n && j < m) {
             while(i+1<n  &&  arr1[i]==arr1[i+1])
                i++;
    
            while(j+1<m  &&  arr2[j]==arr2[j+1])
                j++;
                
            if(arr1[i] == arr2[j]) {
                ans.push_back(arr1[i]);
                i++;
                j++;
            } else if(arr1[i] < arr2[j]) {
                ans.push_back(arr1[i]);
                i++;
            } else {
                ans.push_back(arr2[j]);
                j++;
            }
        }
        while(i < n)
        {
            while(i+1<n  &&  arr1[i]==arr1[i+1]  )
                i++;
            ans.push_back(arr1[i++]);
        }
        while(j < m)
        {
            while(j+1<m  &&  arr2[j]==arr2[j+1]  )
                j++;
            ans.push_back(arr2[j++]);
        }
        return ans;
    }
};

class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       // Your code here
       
       int i=0,j=N-1;
       
       for(;i<=j;){
           int k=(i+j)/2;
           if(arr[k]==K) return 1;
           
           if(arr[k]<K){
               i=k+1;
           }
           
           if(arr[k]>K){
               j=k-1;
           }
       }
       
       return -1;
       
    }
};

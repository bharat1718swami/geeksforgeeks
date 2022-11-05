class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        // Your code here  
        
        for(int i=0;i<n;i++){
            int k=0;
            for(int j=1;j<n-i;j++){
                if(arr[j]<arr[k]){
                    swap(&arr[j],&arr[k]);
                }
                k++;
            }
        }
    }
};

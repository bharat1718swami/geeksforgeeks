class Solution
{
    public:
    void insert(int arr[], int i)
    {
        //code here
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        {
    //Write your code here
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j;
        for( j = i-1; j >= 0;j--){
            if(current < arr[j]){
                arr[j+1]=arr[j];    // shifting by 1 position
            }
            else{
                break;
            }
        }
        arr[j+1]=current;
    }
}
        }
};

class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        int b=1;
        for(int i=0;i<n;i++){
            if(a[i]!=a[i+1]){
                a[b]=a[i+1];
                b++;
            }
        }
        
        return b-1;
    }
};

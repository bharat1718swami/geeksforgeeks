class Solution {
  public:
    long long reversedBits(long long X) {
        // code here
        long long ans=0,i=0;
        while(X>0){
            int bit=X&1;
            ans=bit*pow(2,31-i)+ans;
            X=X>>1;
            i++;
        }
        
        return ans;
    }
};

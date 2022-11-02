class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        long long lcm=1,hcf=1;
        long long x=A,y=B;
        long long n=min(A,B);
       
        while(B>=0){
            if(B==0){ 
                hcf=A;
                break;
            }
            else{
                int temp=A;
                A=B;
                B=temp%B;
            }
          
        }
        lcm=(x/hcf)*y;
        vector<long long> ans={lcm,hcf};
        return ans;
    }
};

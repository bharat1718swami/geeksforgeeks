class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int  ans=0,temp=n;
        while(temp!=0){
            int rem=temp%10;
            ans=ans+pow(rem,3);
            temp=temp/10;
        }
        
        if(ans==n) return "Yes";
        else return "No";
    }
};

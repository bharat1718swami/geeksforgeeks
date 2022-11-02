class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    
		    int ans=0,num=n;
		    while(n!=0){
		        int temp=n%10;
		        ans=10*ans+temp;
		        n/=10;
		    }
		    
		    if(num==ans) return "Yes";
		    else return "No";
		 
		}
};

class Solution
{
public:
    vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        vector<long long> ans;
        ans.push_back(1);
        int i=2;
        while(i*ans[i-2]<=N){
            ans.push_back(i*ans[i-2]);
            i++;
        }
        
        return ans;
    }
};

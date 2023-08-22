//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int> s;
        for(int i=0;i<n;i++){
            s.push(i);
        }
        
        while(s.size()!=0&&s.size()!=1){
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            
            if(M[a][b]==1){
                a=-1;
                s.push(b);
            }
            
            if(M[b][a]==1){
                if(a!=-1){
                    s.push(a);
                }
            }
        }
        
        if(s.size()==0) return -1;
        
        //verify row
        int i=s.top(),j=0;
        for(;j<n;j++){
            if(M[i][j]==1&&i!=j) return -1;
        }
        
        
        //verify col
        i=0,j=s.top();
        for(;i<n;i++){
            if(M[i][j]==0&&i!=j) return -1;
        }
        
        return s.top();
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends

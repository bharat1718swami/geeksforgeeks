//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    
    struct Node* reverse(struct Node* head){
        struct Node* curr=head;
        struct Node* prev=NULL;
        
        while(curr!=NULL){
            struct Node* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
        return prev;
    }
    
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first=reverse(first);
        second=reverse(second);
        
        struct Node* ans=new Node(-1);
        struct Node* dummy=ans;
        
        int carry=0;
        
        while(first!=NULL&&second!=NULL){
            int sum=first->data+second->data+carry;
            
            struct Node* temp=new Node(sum%10);
            dummy->next=temp;
            dummy=temp;
            carry=sum/10;
            
            first=first->next;
            second=second->next;
        }
        
        while(first!=NULL){
            int sum=first->data+carry;
            struct Node* temp=new Node(sum%10);
            dummy->next=temp;
            dummy=temp;
            carry=sum/10;
            
            first=first->next;
        }
        
        while(second!=NULL){
            int sum=second->data+carry;
            struct Node* temp=new Node(sum%10);
            dummy->next=temp;
            dummy=temp;
            carry=sum/10;
            
            second=second->next;
        }
        
        if(carry){
            struct Node* temp=new Node(carry);
            dummy->next=temp;
        }
        
        ans=reverse(ans->next);
        
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends

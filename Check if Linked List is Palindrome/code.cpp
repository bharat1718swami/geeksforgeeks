//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    
    Node* middle(Node* head){
        Node* slow=head;
        Node* fast=head->next;
        
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        return slow;
    }
    
    Node* reverse(Node* m){
        Node* curr=m;
        Node* prev=NULL;
        
        while(curr!=NULL){
            Node* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
        return prev;
    }
    
    
    bool isPalindrome(Node *head)
    {
        //Your code here
        
        if(head==NULL&&head->next==NULL) return true;
        
        Node* m=middle(head);
        
        
        // Node* temp=m->next;
        m->next=reverse(m->next);
        
        Node* head1=head;
        Node* head2=m->next;
        
        while(head2!=NULL){
            if(head1->data!=head2->data) return false;
            
            // cout<<head1->data<<" "<<head2->data<<endl;
            
            head1=head1->next;
            head2=head2->next;
        }
        
        
        // temp=m->next;
        // m->next=reverse(temp);
        // m=middle(head);
        // m->next=reverse(m->next);
        
        return true;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends

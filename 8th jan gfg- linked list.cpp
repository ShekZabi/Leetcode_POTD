//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}


Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}


// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/
class Solution
{
    public:
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        
        if(node1==NULL && node2==NULL)
        return NULL;
        
        vector<int> vec;
        
        Node * temp=node1;
        
        while(temp!=NULL)
        {
            vec.push_back(temp->data);
            temp=temp->next;
        }
        
        temp=node2;
        
        while(temp!=NULL)
        {
            vec.push_back(temp->data);
            temp=temp->next;
        }
        
        sort(vec.begin(),vec.end());
        
        reverse(vec.begin(),vec.end());
        
        Node * ans = new Node;
        
        ans->data = vec[0];
        ans->next=NULL;
        
        Node* prev= ans;
        
        int k=1;
        
        while(k!=vec.size())
        {
            
            Node* next = new Node;
            
            next->data= vec[k];
            
            prev->next=next;
            
            next->next=NULL;
            
            prev=next;
            k++;
            
        }
        
        return ans;
        // your code goes here
    }  
};

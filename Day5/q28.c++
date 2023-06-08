/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    if (head == NULL|| head->next==NULL) {
        return NULL;
    }
    
    int  cnt=0;
    Node* curr=head;
    while (curr != NULL) {
        cnt++;
        curr=curr->next;
    }
    int val=cnt-K;
    if (val == 0 && cnt > 1) {
        return head->next;
    }
    Node* prev=NULL;
    curr=head;
    while(val>0){
        prev=curr;
        curr=curr->next;
        val--;
    }
     prev->next=curr->next;
     return head;

}

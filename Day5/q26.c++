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

Node *findMiddle(Node *head) {
    // Write your code here
    Node* curr=head;
    int cnt=0;
    while (curr != NULL) {
        cnt++;
        curr=curr->next;
    }
    
    Node* slow=head;
    Node* fast=head;
    while (fast->next != NULL && fast->next->next != NULL) {
        slow=slow->next;
        fast=fast->next->next;
    }
    if(cnt%2==0){
        return slow->next;
    }
    return slow;
}


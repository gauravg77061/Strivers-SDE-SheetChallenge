/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
     // Write your code here.
     if (head == NULL || head->next == NULL || k == 0) {
          return head;
     }
     int n=1;
     Node* curr=head;
     while (curr->next != NULL) {
          n++;
          curr=curr->next;
     }
     curr->next=head;
     k=k%n;
     int val=n-k;
   //  Node* curr1=head;
     while (val> 0) {
          curr=curr->next;
          val--;
     }
     head=curr->next;
     curr->next=NULL;
     return head;
}
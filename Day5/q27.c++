#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* f, Node<int>* s)
{
    // Write your code here.
    Node<int>* temp=new Node<int>(-1);
    Node<int>* curr=temp;
    Node<int>* curr1=f;
    Node<int>* curr2=s;
    while (curr1 != NULL && curr2 != NULL) {
      if (curr1->data <= curr2->data) {
          curr->next=curr1;
          curr1=curr1->next;
          curr=curr->next;
      } 
      else {
          curr->next=curr2;
          curr2=curr2->next;
          curr=curr->next;
      }
    }
    if(curr1 != NULL) {
        curr->next=curr1;
    }
    if(curr2 != NULL) {
        curr->next=curr2;
    }
    return temp->next;
}

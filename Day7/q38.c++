#include <bits/stdc++.h>

/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    // Write your code here.
    if (head == NULL) {
    return NULL;
    }
    LinkedListNode<int>* curr=head;
    LinkedListNode<int>* next;
    while (curr != NULL) {
        next=curr->next;
        LinkedListNode<int>* node=new LinkedListNode<int>(curr->data);
      curr->next=node;
      curr->next->next=next;

        curr=curr->next->next;
    }
    curr=head;
    while (curr != NULL) {
      if (curr->random != NULL) {
          curr->next->random=curr->random->next;
      } 
      else {
          curr->next->random=NULL;
      }
      curr=curr->next->next;
    }
    LinkedListNode<int>* orignal=head;
    LinkedListNode<int>* copy=head->next;
    LinkedListNode<int>* temp=copy;

    while (orignal != NULL && copy != NULL) {
        orignal->next=(orignal->next)?(orignal->next->next):orignal->next;;
        copy->next=(copy->next)?(copy->next->next):copy->next;
        orignal=orignal->next;
        copy=copy->next;

    }
    return temp;
}

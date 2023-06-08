/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
    Node* temp=new Node();
    Node* curr=temp;
    Node* curr1=num1;
    Node* curr2=num2;
   
    int carry=0;
    while (curr1 != NULL || curr2 != NULL) {
        int sum=0;
      if (curr1 != NULL) {
          sum+=curr1->data;
          curr1=curr1->next;
      }
      
      if (curr2 != NULL) {
          sum+=curr2->data;
          curr2=curr2->next;
      }
      sum+=carry;
      carry=sum/10;
      sum=sum%10;
      Node *node=new Node(sum);
      curr->next=node;
      curr=curr->next; 
    }
   
    if (carry != 0) {
        Node* node=new Node(carry);
        curr->next=node;
        curr=curr->next;
    }
    return temp->next;
}

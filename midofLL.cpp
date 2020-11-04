
/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
   // Your code here
   struct Node *fast = head;
   struct Node *slow = head;
   
   if(head != NULL)
   {
       while(fast!=NULL && fast->next!=NULL)
       {
           fast = fast->next->next;
           slow = slow->next;
       }
       return slow->data;
   }
}

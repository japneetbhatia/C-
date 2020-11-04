Node *removeDuplicates(Node *root)
{
 // your code goes here
 Node *dup;
 if(root->next == NULL)
 {
     return root;
 }
 if(root->next != NULL)
 {
     if(root->data == root->next->data)
     {
         dup = root->next;
         root->next = root->next->next;
         free(dup);
         removeDuplicates(root);
     }
     else
     {
         removeDuplicates(root->next);
     }
     return root;
 }
}

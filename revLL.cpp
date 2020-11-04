struct Node *res;

// Should reverse list and return new head.
struct Node* reverseList(struct Node *head)
{
    if (head->next == NULL)
    {
       return head;
    }
    res = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return res;
}


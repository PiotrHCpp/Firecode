// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
listNode* insert_at_head(listNode* head, int data)
{
    listNode* ptr = new listNode;
    ptr->value = data;
    ptr->next = NULL;
    if (head == NULL)
    {
        head = ptr;
    }
    else
    {
        ptr->next = head;
        head = ptr;
    }
    return head;
}

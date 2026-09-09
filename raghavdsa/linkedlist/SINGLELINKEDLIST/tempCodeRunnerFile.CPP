Node *removeelement2(Node *head, int ele)
{
    if (head->data == ele)
    {
        head = head->next;
        return head;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->next->data == ele)
        {
            break;
        }
        temp = temp->next;
    }
    if (temp->next->next == NULL)
    {
        temp->next = NULL;
        return head;
    }
    temp->next = temp->next->next;
    return head;
}
Node *removeDuplicates(Node *head)
{
    Node *i = head;

    while (i != NULL)
    {
        Node *j = i->next;
        while (j != NULL)
        {

            if (i->data == j->data)
            {
                head = removeelement2(head, j->data);
            }
            j = j->next;
        }
        i = i->next;
    }

    return head;
}
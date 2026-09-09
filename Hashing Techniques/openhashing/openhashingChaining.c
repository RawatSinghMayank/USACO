#include <stdio.h>
#include <stdlib.h>
#include "chaining.c"
int Hash(int key)
{
    return key % 10;
}

Node *Insert(Node *HT[], int key)
{
    int index = Hash(key);
    insertSorted(&HT[index], key);
}
void displaymy(Node *HT[])
{
    for (int i = 0; i < 10; i++)
        if (HT[i] != NULL)
            printf("%d  %d %d", HT[i]->val, HT[i]->next->val, HT[i]->next->next->val);
    printf("\n");
}
int main()
{
    Node *HT[10];
    for (int i = 0; i < 10; i++)
        HT[i] = NULL;
    Insert(HT, 12);
    Insert(HT, 22);
    Insert(HT, 42);
    displaymy(HT);

    Node *temp = search(HT[Hash(22)], 22);

    printf("Find : %d", temp->val);
}
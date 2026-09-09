#include <stdio.h>
#define size 10
int hash(int key)
{
    return key % 10;
}

int probe(int HT[], int key)
{
    int idx = hash(key);
    int i = 0;
    while (HT[(idx + i) % size] != 0)
        i++;
    return (idx + i) % size;
}

void Insert(int HT[], int key)
{
    int idx = hash(key);
    if (HT[idx] != 0)
    {
        idx = probe(HT, key);
    }
    HT[idx] = key;
}
int Search(int HT[], int key)
{
    int idx = hash(key);
    int i = 0;
    while (HT[(idx + i) % size] != key)
        i++;
    return (idx + i) % size;
}
int main()
{
    int HT[10] = {0};
    Insert(HT, 12);
    Insert(HT, 25);

    Insert(HT, 35);

    Insert(HT, 26);

    for (int i = 0; i < 10; i++)
        printf("%d ", HT[i]);
    printf("\n");
    printf("Key found at %d ", Search(HT, 35));
}
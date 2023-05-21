#include<stdio.h>

int main() {
    
    int size, key, status, index, choice;

    printf("Enter the size of the array\n");
    scanf("%d", &size);

    int val = -1;
    int hashTable[size];
    
    for(int i=0; i<size; i++)
        hashTable[size] = val;

    do {
        printf("\nEnter the key value \n ");
        scanf("%d", &key);

        index = key % size;

        hashTable[index] = key;

        printf("\nDo you want to add more key values\n");
        scanf("%d", &choice);

        }while(choice!=0);

        // to print the data
        for(int i=0; i<size; i++)
                printf("%d\t", hashTable[i]);

        do {
            int element;

            printf("\nEnter the value to be search\n");
            scanf("%d", &element);

            index = element % size;
            printf("\nYes %d is present at %d index", element, index);

            printf("\nDo you want to search more elements\n Press 1 else Press 0\n");
            scanf("%d", &choice);
        }while(choice!=0);

    return 0;
}
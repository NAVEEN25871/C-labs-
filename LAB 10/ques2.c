#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL, *second = NULL, *third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10; head->next = second;
    second->data = 20; second->next = third;
    third->data = 30; third->next = NULL;

    printf("Original Linked List:\n");
    printList(head);

    int position = 2; 
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 99;

    struct Node *temp = head;

    for (int i = 1; i < position; i++) {
        if (temp == NULL) {
            printf("Position out of range!\n");
            return 0;
        }
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    printf("\nLinked List After Insertion:\n");
    printList(head);

    return 0;
}

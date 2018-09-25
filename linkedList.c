#include <stdlib.h>
#include <stdio.h>

/* uni-directional linked list */
struct node {
    int data;
    int nodeNb;
    struct node* next;
};
typedef struct node node_t;

node_t* linkedListInit(int initData);
void printLinkedList(node_t* n);
void newNode(node_t* list, int data);
void deleteNode(node_t* n);

int main (void) {
    node_t* head = linkedListInit(5);    
    printLinkedList(head);
    int n;
    scanf("%d", &n);
    newNode(head, n);
    printLinkedList(head); 
    return 0;
}

node_t* linkedListInit(int initData) {
    node_t* head;
    head = (node_t*) malloc(sizeof(node_t));
    head->data = initData;
    head->nodeNb = 0;       
    head->next = NULL; 
    return head;
}

void printLinkedList(node_t* n) {    
    do {    
        /* Print contents*/
        printf("This is node:\t%d\n", n->nodeNb);
        printf("Data is:\t%d\n", n->data);   
    } while( (n = n->next) != NULL); 
    /* Go until next address is NULL*/
}

void newNode(node_t* list, int data) {
    /* Iterate until you get to the end */
    while (list->next != NULL ) {
        list = list->next;
    }
    
    /* Allocate memory for a new node */ 
    node_t* add = (node_t*) malloc(sizeof(node_t));
    list->next = add;
    add->data = data;    
    add->nodeNb = list->nodeNb + 1;
}






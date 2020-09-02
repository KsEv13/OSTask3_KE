#include <stdio.h>
#include <stdlib.h>

struct node {
    int val;
    struct node *next;
};
void print_list(struct node *head);
void insert_node(struct node *head, struct node *nextnode, struct node *prevnode);
void delete_node(struct node *head, struct node *delnode);

int main(void) {
    struct node node1, node2, node3;
    node1.next = &node2;
    node2.next = &node3;
    node3.next = (struct node *) NULL;
    return EXIT_SUCCESS;
}
void print_list(struct node *head) {
    while(head != NULL) {
        printf("%d\n", head->val);
        head = head->next;
    }
}
void insert_node(struct node *head, struct node *nextnode, struct node *prevnode) {
    struct node *list;
    list = head;
    while(list != prevnode) {
        list = list->next;
    }
    nextnode->next = list->next;
    list->next = nextnode;
}
void delete_node(struct node *head, struct node *delnode) {
    struct node *list;
    list = head;
    while(list->next != delnode) {
        list = list->next;
        list->next = delnode->next;
    }
}


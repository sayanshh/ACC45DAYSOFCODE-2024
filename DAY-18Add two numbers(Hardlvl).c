#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* createNode(int value) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = value;
    newNode->next = NULL;
    return newNode;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* dummyHead = createNode(0);  
    struct ListNode* current = dummyHead;         
    int carry = 0;                                 

    while (l1 != NULL || l2 != NULL) {
        int val1 = (l1 != NULL) ? l1->val : 0;    
        int val2 = (l2 != NULL) ? l2->val : 0;    

        int total = val1 + val2 + carry;          
        carry = total / 10;                        


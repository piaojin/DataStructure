//
//  Link.c
//  DataStructure
//
//  Created by piaojin on 2019/11/19.
//  Copyright © 2019 piaojin. All rights reserved.
//

#include "Link.h"
#include <stdlib.h>

Node *findNode(Node *head, int k) {
    if (k < 0 || head == NULL) return NULL;
    Node *tempNode = head;
    int i = 0;
    while (i <= k && tempNode != NULL) {
        if (i == k) break;
        tempNode = tempNode -> next;
        i++;
    }
    if (tempNode != NULL) return tempNode;
    return NULL;
}

Node *createLinkNode(int count) {
    if (count < 0) return NULL;
    Node *currentNode = NULL, *head = NULL;
    for (int i = 0;i < count;i++) {
        Node *node = (Node*)malloc(sizeof(Node));
        node->data = i;
        node->next = NULL;
        // node is the first node(head) in the link.
        if (currentNode == NULL) {
            head = node;
        } else {
            currentNode->next = node;
        }
        currentNode = node;
    }
    return head;
}

void freeLink(Node **head) {
    Node **currentNode = head, **next = NULL;
    while (*currentNode != NULL) {
        if ((*currentNode)->next != NULL) next = &((*currentNode)->next);
        free(*currentNode);
        *currentNode = NULL;
        currentNode = next;
    }
    *head = NULL;
    *currentNode = NULL;
    *next = NULL;
}

void printLinkNode(Node *head) {
    if (head == NULL) {
        printf("Empty link!!!\n");
        return;
    }
    Node *next = head;
    while (next != NULL) {
        printf("value: %d \t", next->data);
        next = next->next;
    }
    printf("\n");
}

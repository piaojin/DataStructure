//
//  Link.c
//  DataStructure
//
//  Created by piaojin on 2019/11/19.
//  Copyright © 2019 piaojin. All rights reserved.
//

#include "Link.h"

LinkNode *findNode(LinkNode *head, int k) {
    int i = 0;
    if (i == k) return head;
    LinkNode *tempNode = head->next;
    i++;
    while (i <= k && tempNode) {
        if (i == k) break;
        tempNode = tempNode -> next;
        i++;
    }
    if (tempNode) return tempNode;
    return NULL;
}

LinkNode *createLinkNode(int count) {
    if (count < 0) return NULL;
    LinkNode *head = (LinkNode*)malloc(sizeof(LinkNode));
    head->data = 0;
    head->next = NULL;
    LinkNode *currentNode = head;
    for (int i = 1;i < count;i++) {
        LinkNode *node = (LinkNode*)malloc(sizeof(LinkNode));
        node->data = i;
        node->next = NULL;
        currentNode->next = node;
        currentNode = node;
    }
    return head;
}

void freeLink(LinkNode *head) {
    LinkNode *currentNode = head;
    LinkNode *next = currentNode->next;
    while (currentNode != NULL) {
        free(currentNode);
        currentNode = NULL;
        if (next != NULL) {
            currentNode = next;
            next = next->next;
        }
    }
    head = NULL;
}

void printLinkNode(LinkNode *head) {
    if (head == NULL) {
        printf("Empty link!!!\n");
        return;
    }
    LinkNode *next = head;
    while (next != NULL) {
        printf("value: %d \t", next->data);
        next = next->next;
    }
    printf("\n");
}

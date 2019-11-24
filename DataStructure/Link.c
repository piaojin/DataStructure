//
//  Link.c
//  DataStructure
//
//  Created by piaojin on 2019/11/19.
//  Copyright © 2019 piaojin. All rights reserved.
//

#include "Link.h"
#include <stdlib.h>

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

void freeLinkNode(Node **head) {
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

int insertNode(Node **head, int newData, int index) {
    int result = -1;
    if (*head == NULL || index < 0) return result;
    if (index > nodeCount(*head)) {
        return result;
    }
    Node *next = *head;
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = newData;
    newNode->next = NULL;
    if (index == 0) {
        newNode->next = *head;
        *head = newNode;
        result = 0;
    } else {
        for (int i = 0;next != NULL;i++) {
            if (i == index - 1) {
                newNode->next = next->next;
                next->next = newNode;
                break;
            }
            next = next->next;
            result = i;
        }
    }
    return result;
}

int appendNode(Node *head, int newData) {
    int i = -1;
    Node *next = head;
    while (next != NULL) {
        i++;
        if (next->next == NULL) {
            // this next is the last node
            Node *newNode = (Node*)malloc(sizeof(Node));
            newNode->data = newData;
            newNode->next = NULL;
            next->next = newNode;
            i++;
            break;
        }
        next = next->next;
    }
    return i;
}

int removeNode(Node **head, int k) {
    if (k < 0 || *head == NULL || k > nodeCount(*head) - 1) return -1;
    Node *next = *head;
    if (k == 0) {
        // remove head node
        next = next->next;
        free(*head);
        *head = next;
        return 1;
    }
    for (int i = 0; next != NULL; i++) {
        if (i == k - 1) {
            Node *willRemoveNode = next->next;
            next->next = willRemoveNode->next;
            free(willRemoveNode);
            willRemoveNode = NULL;
            break;
        }
        next = next->next;
    }
    return 1;
}

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

int nodeCount(Node *head) {
    int count = 0;
    Node *next = head;
    while (next != NULL) {
        next = next->next;
        count++;
    }
    return count;
}

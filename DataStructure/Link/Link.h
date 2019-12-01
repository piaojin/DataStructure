//
//  Link.h
//  DataStructure
//
//  Created by piaojin on 2019/11/19.
//  Copyright © 2019 piaojin. All rights reserved.
//

#ifndef Link_h
#define Link_h

#include <stdio.h>

typedef struct Node {
    int data;
    struct Node *next;
}Node;

int isLastNode(Node *node, Node *head);

Node *findNode(int data, Node *head);

// use **head so that can remove the head node
void removeNode(int data, Node **head);

Node *findPreviousNode(int data, Node *head);

Node *createLinkNode(int count);

// use ** so that can free the head node
void freeLinkNode(Node **head);

void printLinkNode(Node *head);

// use **head so that can insert before the head node
int insertNode(Node **head, int newData, int index);

int appendNode(Node *head, int newData);

int nodeCount(Node *head);

#endif /* Link_h */

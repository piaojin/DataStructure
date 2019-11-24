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

Node *createLinkNode(int count);

void freeLinkNode(Node **head);

void printLinkNode(Node *head);

int insertNode(Node **head, int newData, int index);

int appendNode(Node *head, int newData);

int removeNode(Node **head, int k);

Node *findNode(Node *head, int k);

int nodeCount(Node *head);

#endif /* Link_h */

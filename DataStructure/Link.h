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

Node *findNode(Node *linkHead, int k);

Node *createLinkNode(int count);

void printLinkNode(Node *head);

void freeLink(Node **head);

#endif /* Link_h */

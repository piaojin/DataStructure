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
#include <stdlib.h>

typedef struct LinkNode {
    int data;
    struct LinkNode *next;
}LinkNode;

LinkNode *findNode(LinkNode *linkHead, int k);

LinkNode *createLinkNode(int count);

void printLinkNode(LinkNode *head);

void freeLink(LinkNode *head);

#endif /* Link_h */

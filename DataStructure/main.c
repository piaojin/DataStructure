//
//  main.c
//  DataStructure
//
//  Created by piaojin on 2019/11/19.
//  Copyright © 2019 piaojin. All rights reserved.
//

#include <stdio.h>
#include "Link.h"

int main(int argc, const char * argv[]) {
    Node *head = createLinkNode(10);
    printLinkNode(head);
    printf("Found %d \n", findNode(head, 6)->data);
    printf("%d \n", appendNode(head, 10));
    printf("Node count %d \n", nodeCount(head));
    insertNode(&head, -1, 10);
    removeNode(&head, 10);
    printLinkNode(head);
    freeLinkNode(&head);
    return 0;
}

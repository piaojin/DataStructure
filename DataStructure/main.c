//
//  main.c
//  DataStructure
//
//  Created by piaojin on 2019/11/19.
//  Copyright © 2019 piaojin. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "Link.h"

int main(int argc, const char * argv[]) {
    LinkNode *head = createLinkNode(3);
    printLinkNode(head);
    freeLink(head);
    printLinkNode(head);
    return 0;
}

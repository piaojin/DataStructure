//
//  DataStructure.c
//  DataStructureFrameWork
//
//  Created by Zoey Weng on 12/2/19.
//  Copyright © 2019 piaojin. All rights reserved.
//

#include "DataStructure.h"
#include <errno.h>
#include <stdlib.h>

void error(char *c) {
    perror(c);
    exit(EXIT_FAILURE);
}

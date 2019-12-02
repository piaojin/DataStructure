//
//  Queue.c
//  DataStructureFrameWork
//
//  Created by Zoey Weng on 12/2/19.
//  Copyright © 2019 piaojin. All rights reserved.
//

#include "Queue.h"
#include <stdlib.h>
#include "DataStructure.h"

/**
 Queue
 | | | | | |    8    |    6    |
              front      rear
 */

struct QueueRecord {
    int capacity;
    int front; /**The initial value is 1*/
    int rear; /**The initial value is 0*/
    int size;
    QueueElementType *array;
};

int isQueueEmpty(Queue q) {
    return q->size == 0;
}

int isQueueFull(Queue q) {
    return q->size == q->capacity;
}

Queue createQueue(int maxElements) {
    Queue q;
    q = malloc(sizeof(Queue));
    if (q == NULL) {
        error("Out of space.");
    }
    q->array = malloc(sizeof(QueueElementType) * maxElements);
    if (q->array == NULL) {
        error("Out of space.");
    }
    makeQueueEmpty(q);
    return q;
}

void disposeQueue(Queue q) {
    
}

void makeQueueEmpty(Queue q) {
    
}

void enQueue(QueueElementType x, Queue q) {
    
}

QueueElementType frontQueue(Queue q);

void deQueue(Queue q) {
    
}

QueueElementType frontAndDeQueue(Queue q);

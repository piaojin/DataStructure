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

/**Circular Queue*/
struct QueueRecord {
    int capacity;
    int front; /**The initial value is 0*/
    int rear; /**The initial value is 0*/
    int size;
    QueueElementType *array;
};

/*front == rear or size == 0*/
int isQueueEmpty(Queue q) {
    return q->size == 0;
}

/*(rear+1) % MAXSIZE == front or size == capacity*/
int isQueueFull(Queue q) {
    return q->size == q->capacity;
}

Queue createQueue(int maxElements) {
    Queue q;
    q = (Queue)malloc(sizeof(Queue));
    if (q == NULL) {
        error("Out of space.");
    }
    q->array = (QueueElementType *)malloc(sizeof(QueueElementType) * maxElements);
    if (q->array == NULL) {
        error("Out of space.");
    }
    q->capacity = maxElements;
    makeQueueEmpty(q);
    return q;
}

void disposeQueue(Queue q) {
    if (q->array != NULL) {
        free(q->array);
        q->array = NULL;
        if (q != NULL) {
            free(q);
            q = NULL;
        }
    }
}

void makeQueueEmpty(Queue q) {
    q->front = 0;
    q->rear = 0;
    q->size = 0;
    q->capacity = 0;
}

void enQueue(QueueElementType x, Queue q) {
    if (isQueueFull(q)) {
        error("Queue is full.");
    } else {
        q->size++;
        q->array[q->rear] = x;
        q->rear = (q->rear + 1) % q->capacity; /*The purpose of adding 1 to rear and taking a remainder from Max is to realize the loop of array subscript.*/
    }
}

QueueElementType frontQueue(Queue q) {
    if (isQueueEmpty(q)) {
        error("Empty queue.");
    }
    return q->array[q->front];
}

void deQueue(Queue q) {
    if (isQueueEmpty(q)) {
        error("Empty queue cannot deQueue.");
    } else {
        q->size--;
        q->front = (q->front + 1) % q->capacity;
    }
}

QueueElementType frontAndDeQueue(Queue q) {
    QueueElementType x = frontQueue(q);
    deQueue(q);
    return x;
}

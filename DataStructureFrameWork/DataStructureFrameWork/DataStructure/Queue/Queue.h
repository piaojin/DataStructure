//
//  Queue.h
//  DataStructureFrameWork
//
//  Created by Zoey Weng on 12/2/19.
//  Copyright © 2019 piaojin. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include <stdio.h>

/**Using array to realize circular queue.*/

typedef int QueueElementType;

struct QueueRecord;
typedef struct QueueRecord *Queue;

int isQueueEmpty(Queue q);

int isQueueFull(Queue q);

Queue createQueue(int maxElements);

void disposeQueue(Queue q);

void makeQueueEmpty(Queue q);

void enQueue(QueueElementType x, Queue q);

QueueElementType frontQueue(Queue q);

void deQueue(Queue q);

QueueElementType frontAndDeQueue(Queue q);

#endif /* Queue_h */

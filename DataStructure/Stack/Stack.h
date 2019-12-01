//
//  Stack.h
//  DataStructure
//
//  Created by piaojin on 2019/11/30.
//  Copyright © 2019 piaojin. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

#include <stdio.h>

typedef int ElementType;

#define EmptyTOS -1
#define MinStackSize 5
/* Use array to implement stack.*/
typedef struct StackRecord {
    int size;
    int topOfStack;
    ElementType *array;
} StackRecord;

int isEmpty(StackRecord s);

int isFull(StackRecord s);

StackRecord createStack(int maxElements);

void disposeStack(StackRecord s);

void makeEmpty(StackRecord s);

void push(ElementType element, StackRecord s);

ElementType top(StackRecord s);

void pop(StackRecord s);

ElementType topAndPop(StackRecord s);

#endif /* Stack_h */

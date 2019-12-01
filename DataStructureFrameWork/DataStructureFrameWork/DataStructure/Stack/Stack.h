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

struct StackRecord;
typedef struct StackRecord *Stack;

int isEmpty(Stack s);

int isFull(Stack s);

Stack createStack(int maxElements);

void disposeStack(Stack s);

/**Won't remove the element and only change topOfStack to EmptyTOS.*/
void makeEmpty(Stack s);

void push(ElementType element, Stack s);

ElementType top(Stack s);

/**Won't remove the element and only change topOfStack.*/
void pop(Stack s);

ElementType topAndPop(Stack s);

#endif /* Stack_h */

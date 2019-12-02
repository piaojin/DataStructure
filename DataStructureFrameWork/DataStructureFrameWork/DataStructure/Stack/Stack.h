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

typedef int StackElementType;

struct StackRecord;
typedef struct StackRecord *Stack;

int isStackEmpty(Stack s);

int isStackFull(Stack s);

Stack createStack(int maxElements);

void disposeStack(Stack s);

/**Won't remove the element and only change topOfStack to EmptyTOS.*/
void makeStackEmpty(Stack s);

void pushStack(StackElementType element, Stack s);

StackElementType topStack(Stack s);

/**Won't remove the element and only change topOfStack.*/
void popStack(Stack s);

StackElementType topAndPopStack(Stack s);

#endif /* Stack_h */

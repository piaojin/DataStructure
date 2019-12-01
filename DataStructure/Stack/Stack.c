//
//  Stack.c
//  DataStructure
//
//  Created by piaojin on 2019/11/30.
//  Copyright © 2019 piaojin. All rights reserved.
//

#include "Stack.h"

int isEmpty(StackRecord s);

int isFull(StackRecord s);

StackRecord createStack(int maxElements);

void disposeStack(StackRecord s);

void makeEmpty(StackRecord s);

void push(ElementType element, StackRecord s);

ElementType top(StackRecord s);

void pop(StackRecord s);

ElementType topAndPop(StackRecord s);

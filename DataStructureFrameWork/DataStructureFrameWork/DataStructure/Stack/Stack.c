//
//  Stack.c
//  DataStructure
//
//  Created by piaojin on 2019/11/30.
//  Copyright © 2019 piaojin. All rights reserved.
//

#include "Stack.h"
#include <stdlib.h>
#include "DataStructure.h"

#define EmptyTOS -1
#define MinStackSize 5

struct StackRecord {
    int size;
    int topOfStack;
    StackElementType *array;
};

int isStackEmpty(Stack s) {
    return s->topOfStack == EmptyTOS;
}

int isStackFull(Stack s) {
    return s->topOfStack == s->size - 1;
}

Stack createStack(int maxElements) {
    if (maxElements < MinStackSize) {
        error("maxElements is less than 5.");
    }
    
    Stack s;
    s = malloc(sizeof(struct StackRecord));
    if (s == NULL) {
        error("Out of space.");
    }
    s->array = malloc(sizeof(StackElementType) * maxElements);
    if (s->array == NULL) {
        error("Out of space.");
    }
    s->size = maxElements;
    makeStackEmpty(s);
    return s;
}

void disposeStack(Stack s) {
    if (s != NULL) {
        if (s->array != NULL) {
            free(s->array);
            s->array = NULL;
        }
        free(s);
        s = NULL;
    }
}

void makeStackEmpty(Stack s) {
    s->topOfStack = EmptyTOS;
}

void pushStack(StackElementType element, Stack s) {
    if (isStackFull(s)) {
        error("Full stack.");
    } else {
        s->array[++s->topOfStack] = element;
    }
}

StackElementType topStack(Stack s) {
    if (!isStackEmpty(s)) {
        return s->array[s->topOfStack];
    }
    error("Empty stack.");
    return 0; /**Return value used to aovid warning*/
}

void popStack(Stack s) {
    if (isStackEmpty(s)) {
        error("Empty stack.");
    }
    s->topOfStack--; /**Won't remove the element and only change topOfStack.*/
}

StackElementType topAndPopStack(Stack s) {
    if (!isStackEmpty(s)) {
        return s->array[s->topOfStack--];
    }
    error("Empty stack.");
    return 0; /**Return value used to aovid warning*/
}

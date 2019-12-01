//
//  Stack.c
//  DataStructure
//
//  Created by piaojin on 2019/11/30.
//  Copyright © 2019 piaojin. All rights reserved.
//

#include "Stack.h"
#include <errno.h>
#include <stdlib.h>

#define EmptyTOS -1
#define MinStackSize 5

typedef struct StackRecord {
    int size;
    int topOfStack;
    ElementType *array;
} StackRecord;

void error(char *c) {
    perror(c);
    exit(EXIT_FAILURE);
}

int isEmpty(Stack s) {
    return s->topOfStack == EmptyTOS;
}

int isFull(Stack s) {
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
    s->array = malloc(sizeof(ElementType) * maxElements);
    if (s->array == NULL) {
        error("Out of space.");
    }
    s->size = maxElements;
    makeEmpty(s);
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

void makeEmpty(Stack s) {
    s->topOfStack = EmptyTOS;
}

void push(ElementType element, Stack s) {
    if (isFull(s)) {
        error("Full stack.");
    } else {
        s->array[++s->topOfStack] = element;
    }
}

ElementType top(Stack s) {
    if (!isEmpty(s)) {
        return s->array[s->topOfStack];
    }
    error("Empty stack.");
    return 0; /**Return value used to aovid warning*/
}

void pop(Stack s) {
    if (isEmpty(s)) {
        error("Empty stack.");
    }
    s->topOfStack--; /**Won't remove the element and only change topOfStack.*/
}

ElementType topAndPop(Stack s) {
    if (!isEmpty(s)) {
        return s->array[s->topOfStack--];
    }
    error("Empty stack.");
    return 0; /**Return value used to aovid warning*/
}

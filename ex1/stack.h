//
// Created by alvaro on 23/11/2019.
//

#ifndef TRABALHOSDEAEDS_STACK_H
#define TRABALHOSDEAEDS_STACK_H
#include <stdlib.h>
#include <stdio.h>

typedef struct node {
    char caractere;
    struct node* next;
} Node;

typedef struct stack{
    Node *bottom;
    Node *top;
    int size;
} Stack;

void init(Stack *stack);

int isAnEmpytStack(Stack stack);

void push(char caractere, Stack *stack);

void pop(Stack *stack);

int stackSize(Stack stack);

#endif //TRABALHOSDEAEDS_STACK_H

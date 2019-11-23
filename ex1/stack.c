//
// Created by alvaro on 23/11/2019.
//

#include "stack.h"



void init(Stack *stack){
    stack->top = (Node*) malloc(sizeof(Node));
    stack->bottom = stack->top;
    stack->top->next = NULL;
    stack->size = 0;
}

int isAnEmpytStack(Stack stack){
    return (stack.top == stack.bottom);
}

void push(char caractere, Stack *stack){
    Node* Aux;
    Aux = (Node*) malloc(sizeof(Node));
    stack->top->caractere = caractere;
    Aux->next = stack->top;
    stack->top = Aux;
    stack->size++;
}

void pop(Stack *stack){
    Node* q;
    if (isAnEmpytStack(*stack)) {
        printf("Erro: lista vazia\n");
        return;
    }
    q = stack->top;
    stack->top = q->next;
    free(q);
    stack->size--;
}


int stackSize(Stack stack){
    return (stack.size);
}

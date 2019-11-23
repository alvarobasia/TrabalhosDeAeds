//
// Created by alvaro on 23/11/2019.
//

#ifndef TRABALHOSDEAEDS_QUEUE_H
#define TRABALHOSDEAEDS_QUEUE_H

typedef struct nodeQ{
    char caracter;
    struct nodeQ* next;
} NodeQ;

typedef struct queue{
    NodeQ* rear;
    NodeQ* front;
    int size;
} Queue;

void initQ( Queue * queue);

int isAnEnpytQueue(Queue queue);

void add(char caracter, Queue *queue);

void removeQ(Queue *queue);

#endif //TRABALHOSDEAEDS_QUEUE_H

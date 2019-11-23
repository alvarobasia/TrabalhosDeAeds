//
// Created by alvaro on 23/11/2019.
//

#include "queue.h"


#include "queue.h"
#include <stdlib.h>
#include <stdio.h>

void initQ( Queue * queue){
    queue->front = (NodeQ*) malloc(sizeof(NodeQ));
    queue->rear = queue->front;
    queue->front->next = NULL;
    queue->size = 0;
}

int isAnEnpytQueue(Queue queue){
    return (queue.front == queue.rear);
}

void add(char caracter, Queue *queue){
    queue->rear->next = (NodeQ*) malloc(sizeof(NodeQ));
    queue->rear = queue->rear->next;
    queue->rear->caracter = caracter;
    queue->rear->next = NULL;
    queue->size++;
}

void removeQ(Queue *queue){
    NodeQ * aux;
    if (!isAnEnpytQueue(*queue)){
        aux = queue->front->next;
        queue->front->next = aux->next;
        free(aux);
        if (queue->front->next == NULL)
            queue->rear = queue->front;
        queue->size--;
    }
}
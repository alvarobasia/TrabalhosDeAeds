//
// Created by alvaro on 23/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include "ex1.h"
int main(){
    char string[50] = "((A*(B+(C*(D+(E*(F+G))))))) ";
    Queue  queue;
    Stack  stack;
    init(&stack);
    initQ(&queue);
    convert(string,&queue,&stack);

    while (queue.size> 0){
        printf("%c", queue.front->next->caracter);
        removeQ(&queue);
    }
    while(stack.size> 0){
        pop(&stack);
    }
    free(queue.front);
    free(stack.top);
    return 0;
}


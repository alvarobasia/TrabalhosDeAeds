//
// Created by alvaro on 23/11/2019.
//

#include "ex1.h"



char* correctyString(char string[]){
    for (int i =0; string[i] != '\0'; i++){
        if(string[i] == '\n')
            string[i] = '\0';
    }
    return string;
}

char searchOnStack(Stack stack){
    return stack.top->next->caractere;
}

int isANeedy(char caractere){
    return caractere == OPENNEEDY || caractere == CLOSENEEDY;
}


int isAnOperator(char caractere){
    return caractere == ADITION || caractere == SUBSTRACTION ||
    caractere == MULTIPLY || caractere == DIVISION ;
}

int isLowPriority(char caractere){
    return caractere == ADITION || caractere == SUBSTRACTION;
}

int isHighPriority(char caractere){
    return caractere == MULTIPLY || caractere == DIVISION;
}
void convert(char string[], Queue* queue, Stack* stack){
    for (int i = 0; string[i] != '\0'; i++){
        printf("----- %c\n", string[i]);

        if(!isANeedy(string[i]) && !isAnOperator(string[i])){
            add(string[i], queue);
            continue;
        }


        if(isANeedy(string[i])) {
            if (string[i] == OPENNEEDY) {
                push(string[i], stack);
            } else {
                while (1) {
                    if (isAnOperator(searchOnStack(*stack))) {
                        add(stack->top->next->caractere, queue);
                        pop(stack);
                    }
                    if (isANeedy(searchOnStack(*stack))) {
                        pop(stack);
                        break;
                    }
                }
            }
            continue;
        }

        if(isAnOperator(string[i])){
            printf("Entrou %c\n", string[i]);
            if(isLowPriority(string[i])){
                while (1){
                    if(searchOnStack(*stack) == OPENNEEDY){
                        break;
                    }
                    if(searchOnStack(*stack) == MULTIPLY || searchOnStack(*stack) == DIVISION ||
                    searchOnStack(*stack) == ADITION || searchOnStack(*stack) == SUBSTRACTION){
                        add(stack->top->next->caractere, queue);
                        pop(stack);
                    }
                }
                push(string[i], stack);
            }

            if(isHighPriority(string[i])){
                while (1){
                    if(searchOnStack(*stack) == OPENNEEDY || searchOnStack(*stack) == ADITION
                    || searchOnStack(*stack) == SUBSTRACTION){
                        break;
                    }

                        if (searchOnStack(*stack) == MULTIPLY || searchOnStack(*stack) == DIVISION) {
                            add(stack->top->next->caractere, queue);
                            pop(stack);
                        }
                    }
                push(string[i], stack);
                }
            continue;
            }
        }
    }

//
// Created by alvaro on 23/11/2019.
//

#ifndef TRABALHOSDEAEDS_EX1_H
#define TRABALHOSDEAEDS_EX1_H
#include "stack.h"
#include "queue.h"
#define OPENNEEDY '('
#define CLOSENEEDY ')'
#define ADITION '+'
#define SUBSTRACTION '-'
#define MULTIPLY '*'
#define DIVISION '/'


char* correctyString(char string[]);

char searchOnStack(Stack stack);

int isANeedy(char caractere);

int isAnOperator(char caractere);

int isLowPriority(char caractere);

int isHighPriority(char caractere);

void convert(char string[], Queue* queue, Stack* stack);


#endif //TRABALHOSDEAEDS_EX1_H

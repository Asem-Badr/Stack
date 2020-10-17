#ifndef STACK_H
#define STACK_H

#define stack_size 100
typedef int stack_elements  ;

typedef struct stack1
{
    int top;
    stack_elements entry[stack_size];

} Stack ;

void createStack(Stack*ps);
void push (Stack*ps,stack_elements element);
void pop(Stack*ps,stack_elements* element);
void clearStack(Stack*ps);
int stackEmpty(Stack*ps);
int	stackFull(Stack*ps);
void stackTop(stack_elements *element, Stack *ps);
int	 stackSize(Stack *ps);
void display(Stack*mystack);

#endif

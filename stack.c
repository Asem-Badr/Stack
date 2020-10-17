#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void createStack(Stack*ps)
{
    ps->top = 0;
}
void push (Stack*ps,stack_elements element)
{
    ps->entry[ps->top++] = element;
}
void pop(Stack*ps,stack_elements *element)
{
    *element = ps->entry[ps->top-1];
    ps->top--;
}
void clearStack(Stack*ps)
{
    ps->top = 0;
}
int stackEmpty(Stack *ps)
{
    if(ps->top==0)
        return 1;
    else
        return 0;
}
int	stackFull(Stack *ps)
{
    if(ps->top == stack_size)
        return 1;
    else
        return 0;
}
void stackTop(stack_elements *element, Stack *ps)
{
    *element = ps->entry[ps->top-1];
}
int	 stackSize(Stack *ps)
{
    /** returns the number of elements on a stack **/
    return ps->top ;
}
void display(Stack*mystack)
{
    int i;
    for (i=0 ; i< mystack->top ; i++)
    {
        printf("%d\n",mystack->entry[i]);
    }
}

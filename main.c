#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
int main()
{
    Stack s1;
    createStack(&s1);
    push(&s1,10);
    push(&s1,20);
    display(&s1);

    return 0;
}

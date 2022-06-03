#include<stdlib.h>

typedef char byte;
typedef unsigned int uint;

// Stack
typedef struct stack_ {
    byte *memory;
    uint top;
} stack;

byte stack_pop(stack *s) {
    if (s->top == 0) return NULL;
    return s->top--;
}

int stack_push(stack *s, byte b) {
    s = (stack*) realloc(s, (++s->top + 1) * sizeof(stack));
    
    if(s == NULL) return -1;
    
    s-> memory[s->top] = b;
    return 0;
}

byte stack_peek(stack *s) {
    return s->memory[s->top];
}

// Virtual Machine
typedef struct {
    byte *memory;
    uint mc;
    byte *prog;
    uint pc;

    stack stack;


} p314vm;





enum instruction {
    OP_
}
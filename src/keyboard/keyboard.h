#ifndef PEACHOS_KEYBOARD_H
#define PEACHOS_KEYBOARD_H

typedef int (*KEYBOARD_INIT_FUNCTION)();

struct process;
struct keyboard
{
    KEYBOARD_INIT_FUNCTION init;
    char name[20];
    struct keyboard* next;
};

void keyboard_init();
int keyboard_insert(struct keyboard* keyboard);
void keyboard_backspace(struct process* process);
void keyboard_push(char c);
char keyboard_pop();

#endif //PEACHOS_KEYBOARD_H
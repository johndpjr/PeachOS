#ifndef PEACHOS_KERNEL_H
#define PEACHOS_KERNEL_H
#include <stddef.h>
#include <stdint.h>

#define PEACHOS_MAX_PATH 108

#define VGA_WIDTH 80
#define VGA_HEIGHT 20

void kernel_main();
void panic(const char* msg);
void terminal_writechar(char c, char color);
void print(const char* str);

void kernel_page();
void kernel_registers();

#define ERROR(value) (void*)(value)
#define ERROR_I(value) (int)(value)
#define ISERR(value) ((int)value < 0)

#endif //PEACHOS_KERNEL_H

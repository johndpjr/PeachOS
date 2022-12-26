#ifndef PEACHOS_ELFLOADER_H
#define PEACHOS_ELFLOADER_H
#include <stddef.h>
#include <stdint.h>

#include "elf.h"
#include "config.h"

struct elf_file
{
    char filename[PEACHOS_MAX_PATH];

    int in_memory_size;

    // Physical memory address that the elf file is loaded out
    void* elf_memory;

    void* virtual_base_address;
    void* virtual_end_address;

    void* physical_base_address;
    void* physical_end_address;
};

void* elf_virtual_base(struct elf_file* file);
void* elf_virtual_end(struct elf_file* file);
void* elf_phys_base(struct elf_file* file);
void* elf_phys_end(struct elf_file* file);

int elf_load(const char* filename, struct elf_file** file_out);
void elf_close(struct elf_file* file);

#endif //PEACHOS_ELFLOADER_H

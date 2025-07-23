#include <stdio.h>
#include <stdint.h>  // For uintptr_t and intptr_t

int main(int argc, char *argv[]) {
    for (size_t i = 0; i < argc; i++) {
        // Convert both addresses to uintptr_t
        uintptr_t ptr_addr = (uintptr_t)&(argv[i]);  // Address of the pointer
        uintptr_t str_addr = (uintptr_t)argv[i];     // Address of the string

        // Compute the numerical difference in bytes
        intptr_t diff = str_addr - ptr_addr;

        // Print the result
        printf("argv[%zu] = [%s]-> pointer address: %p, string address: %p, difference: %td\n",
               i, argv[i], (void*)ptr_addr, (void*)str_addr, diff);
    }

    return 0;
}
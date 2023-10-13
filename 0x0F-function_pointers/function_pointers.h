#ifndef function_pointers
#define function_pointers
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
int _putchar(char c);
#endif

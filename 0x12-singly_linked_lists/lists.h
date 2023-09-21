#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct list_s - Singly linked list node
 * @str: String (malloc'ed string)
 * @len: Length of the string
 * @next: Points to the next node
 *
 * Description: Defines a singly linked list node structure.
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* Function prototypes */
int _putchar(char c);
size_t print_list(const list_t *h);

#endif /* LISTS_H */

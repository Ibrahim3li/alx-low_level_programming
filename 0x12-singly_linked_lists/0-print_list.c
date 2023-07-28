#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
    int i = 0;

    // Check if the string is NULL
    if (!s)
        return (0);

    // Loop through the string until the null terminator '\0' is found
    while (*s++)
        i++;

    // Return the length of the string
    return (i);
}

/**
 * print_list - prints a linked list
 * @h: pointer to the first node
 *
 * Return: size of the list
 */
size_t print_list(const list_t *h)
{
    size_t i = 0;

    // Traverse the linked list while the current node is not NULL
    while (h)
    {
        // Print the length of the string and the string content, or "(nil)" if NULL
        printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");

        // Move to the next node in the list
        h = h->next;

        // Increment the node counter
        i++;
    }

    // Return the size of the list (number of nodes)
    return (i);
}

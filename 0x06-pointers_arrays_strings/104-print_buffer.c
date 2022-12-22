#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints string buffer
 * @b: the buffer
 * @size: size of buffer to print
 * Return: void
 */
void print_buffer(char *b, int size)
{
int o = 0, i, j;
if (size <= 0)
{
printf("\n");
return;
}


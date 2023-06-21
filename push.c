#include "monty.h"
/**
 * ft_push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void ft_push(stack_t **head, unsigned int counter)
{
	int nb, i = 0, flag = 0;

	if (b.arg)
	{
		if (b.arg[0] == '-')
			i++;
		for (; b.arg[i] != '\0'; i++)
		{
			if (b.arg[i] > 57 || b.arg[i] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(b.file);
			free(b.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(b.file);
		free(b.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	nb = atoi(b.arg);
	if (b.lifi == 0)
		addnode(head, nb);
	else
		addqueue(head, nb);
}

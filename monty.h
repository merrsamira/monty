#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack
 * @a: integer
 * @p: points to the previous element of the stack
 * @next: points to the next element of the stack
 */
typedef struct stack_s
{
	int a;
	struct stack_s *p;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack
 */
typedef struct strct_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  strct_t;
extern strct_t b;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void ft_push(stack_t **head, unsigned int number);
void ft_pall(stack_t **head, unsigned int number);
void ft_pint(stack_t **head, unsigned int number);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
void ft_pop(stack_t **head, unsigned int counter);
void ft_swap(stack_t **head, unsigned int counter);
void ft_add(stack_t **head, unsigned int counter);
void ft_nop(stack_t **head, unsigned int counter);
void ft_sub(stack_t **head, unsigned int counter);
void ft_div(stack_t **head, unsigned int counter);
void ft_mul(stack_t **head, unsigned int counter);
void ft_mod(stack_t **head, unsigned int counter);
void ft_pchar(stack_t **head, unsigned int counter);
void ft_pstr(stack_t **head, unsigned int counter);
void ft_rotl(stack_t **head, unsigned int counter);
void ft_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void ft_queue(stack_t **head, unsigned int counter);
void ft_stack(stack_t **head, unsigned int counter);
#endif

#ifndef MONTY
#define MONTY

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

#define DELIMS " \n\t\a\b"
#define QUEUE 1
#define STACK 0

/* OPCODE TOKENS */
extern char **op_toks;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* CORE FUNCTIONS */
int runMonty(FILE *script_fd);
int initStack(stack_t **stack);

/* CUSTOM FUNCTIONS */
char **strtow(char *str, char *delims);
int is_delim(char ch, char *delims);
int get_word_count(char *str, char *delims);
int get_word_length(char *str, char *delims);
char *get_next_word(char *str, char *delims);
int is_empty_line(char *line, char *delims);
void free_stack(stack_t **stack);
void free_tokens(void);

/* ERROR FUNCTIONS */
int usageError(void);
int fileOpenError(char *filename);
int mallocError(void);
int unknown_op_error(char *opcode, unsigned int line_number);

#endif

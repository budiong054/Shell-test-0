#ifndef SHELL_H
#define SHELL_H

#include <sys/types.h>
#include <sys/wait.h>

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <string.h>
#include <signal.h>
#include <stdarg.h>

/* shell macros */
#define BUFF_SIZE 1024

/* shell_helper functions */
int print(int fd, const char *format, ...);
void ctrl_c(int signum);
int is_delim(char *delim, char c);

/* shell_string functions */
int _strlen(char *str);

/* shell_utils function */
char *_readline(void);
char **tokenize(char *str);
void execute(char *pathname, char *args[], char *envp[], char *argv);

#endif /* SHELL_H */

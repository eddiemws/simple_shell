#ifndef MAIN_H
#define MAIN_H
#define DELIM " \t\n"

extern char **environ;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>

/******* PROMPT ******/

void displayprompt(void);

/******* CUSTOM FUNCTIONS ******/

char *mygetline(void);
char **mystrtok(char *input);

/******* MEMORY HANDLE ******/

void arrayfree(char **arr);

/******* ENV & PATH ******/

char *_getenv(char *name);
char *_getpath(char *command);


/******* ERROR ******/

void displayerror(char *name, char *cmd, int idx);

/****** BUILTIN AND EXECUTE ******/



/******** STRING FUNCTIONS **********/

int is_positive(char *str);
int _atoi(char *str);
char *_itoa(unsigned int n);
void array_rev(char *arr, int len);

#endif

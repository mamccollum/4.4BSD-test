/*
 *	streams.h
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

long int nextrecord(FILE *stream, long int x);
long int recsize(FILE *stream, long int start);
long int nextline(FILE *stream, long int x);
void printline(FILE *stream);
void getline(FILE *stream, char *p);
void getword(FILE *stream, char *p, char *ignore, int *bolp);
void strreplace(char *subj, char *old, char *new);
int foldline(char *p);

# define  maxstr            256
# define  pos(x)            fseek(stream,x,0)

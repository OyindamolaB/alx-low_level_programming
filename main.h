#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdio.h>

void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
unsigned int _strspn(char *s, char *accept);
int _puychar(char c);
char *_memsef(char *s, char b, unsignt int n);
char *_ memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
#endif /* MAIN_H */

#ifndef MAIN_H
#define MAIN_H

char *_memset(char *s, char b, unsigned int n);
void set_string(char **s, char *to);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
#endif

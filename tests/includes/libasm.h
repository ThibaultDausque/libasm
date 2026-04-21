#ifndef	LIBASM_H
# define LIBASM_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

size_t	    ft_strlen(const char *s);
int		    ft_strlen_test(const char *s);

char*	    ft_strcpy(char *dest, const char *src);
int		    ft_strcpy_test(char *dest, const char *src);

int         ft_strcmp(const char *s1, const char *s2);
int         ft_strcmp_test(const char *s1, const char *s2);

__ssize_t   ft_write(int fd, const void *buf, size_t count);
int         ft_write_test(int fd, const void *buf, size_t count);

__ssize_t   ft_read(int fd, void *buf, size_t count);
int         ft_read_test(int fd, void *buf, size_t count);

char*        ft_strdup(const char *s);
int         ft_strdup_test(const char *s);

#endif

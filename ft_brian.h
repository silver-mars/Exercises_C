#ifndef FT_BRIAN
# define FT_BRIAN
# include <stdio.h>
# include <unistd.h>
# include <errno.h>
# define BUFFER_SIZE 1024
# define MAXLINE 1000

int     ft_getline(char str[], int lim);
int     ft_getchar(void);

#endif

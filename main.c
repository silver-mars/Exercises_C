#include "ft_brian.h"

void    copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        i++;
}

int     main()
{
    int     len;
    //int     max;
    char    line[MAXLINE];
    char    longest[MAXLINE];

    //max = 0;
    while ((len = ft_getline(line, MAXLINE)) > 1)
    {
        printf("You are entered %d symbols.\n", len);
        if (len > 80)
        {
            //max = len;
            copy(longest, line);
            printf("%s\n", longest);
        }
    }
    //if (max > 0)
    //    printf("%s\n", longest);
    return 0;
}

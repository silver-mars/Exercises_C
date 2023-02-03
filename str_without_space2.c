#include <unistd.h>

#define YES 1
#define NO 0

int main()
{
    char    buffer;
    int     r;
    int     space;

    space = NO;
    while ((r = read(1, &buffer, 1)))
    {
        if (buffer == ' ')
        {
            if (space == NO)
            {
                write(1, &buffer, 1);
                space = YES;
            }
        }
        else
        {
            write(1, &buffer, 1);
            space = NO;
        }
    }
    return 0;
}

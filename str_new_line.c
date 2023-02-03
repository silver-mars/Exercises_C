#include <unistd.h>

int main()
{
    char    buffer;
    int     r;

    while ((r = read(1, &buffer, 1)))
    {
        if (buffer == ' ' || buffer == '\t')
            write(1, "\n", 1);
        else
            write(1, &buffer, 1);
    }
    return 0;
}

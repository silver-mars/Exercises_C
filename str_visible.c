#include <unistd.h>

int main()
{
    char    buffer;
    int     r;

    while ((r = read(0, &buffer, 1)))
    {
        if (buffer == '\t')
            write(1, "\\t", 2);
        else if (buffer == '\b')
            write(1, "\\b", 2);
        else
            write(1, &buffer, 1);
    }
    return 0;
}

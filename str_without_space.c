#include <unistd.h>

int main()
{
    char    buffer;
    int     r;
    int     flag;

    flag = 0;
    while ((r = read(0, &buffer, 1)))
    {
        if (flag != 0 && buffer == ' ')
            continue;
        else if (flag != 0 && buffer != ' ')
            flag = 0;
        if (buffer == ' ')
            flag++;
        write(1, &buffer, 1);
    }
    return 0;
}

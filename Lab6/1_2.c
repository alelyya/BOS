#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
    char **p;
    int i = 0;
    for (p = environ; *p != NULL; p++)
        i++;
    printf("%d\n", i);
    printf("%d\n", argc);
}

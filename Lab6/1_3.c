#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
    char **p;
    int i = 0;
    for (p = environ; *p != NULL; p++) {
        if (i>9)
            return 0;
        printf("%s\n", *p); 
        i++;
    }
}

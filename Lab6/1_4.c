#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
    if (argc == 1) {
        printf("Argument requied - max number of variables\n");
    return 1;
    }
    char **p;
    int i = 0;
    for (p = environ; *p != NULL; p++) {
        if (i > atoi(argv[1]) - 1)
            return 0;
        printf("%s\n", *p); 
        i++;
    }
}

// env | head -n$1

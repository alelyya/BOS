#include <stdio.h>
#include <unistd.h>

int main(void) {
    
    int i;
    pid_t pid;
    char answer[2];
    
    printf("Warning! This program may harm your computer. Do you want to proceed? y/n\n");
    scanf("%s", answer);
    if (strcmp(answer, "y") != 0) {
        printf("Execution aborted.\n");
        return 0;
    }
    while(1) {
        pid = fork();
        if (pid < 0) {
            printf("Maximum number of processes = %d\n", i);
            return;
        } else if (pid > 0) { i++; }
    }
}

#include <stdio.h>
#include <unistd.h>

int main(void) {
    int pid = fork();
    
    if (pid == 0) {
        printf("Child PID = %d\nParent PID = %d\n", getpid(), getppid());
    } else { wait(NULL); }
     return 0;
}


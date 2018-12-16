#include <stdio.h>
#include <unistd.h>

int main(void) {
    int pid = fork();
    
    if (pid == 0) {
        sleep(1);
        printf("Child PID = %d\nParent PID = %d\n", getpid(), getppid());
    } else { 
           sleep(2); 
           wait(NULL);
    }
    return 0;
}


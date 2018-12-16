#include <stdio.h>
#include <unistd.h>

int main(void) {
    
    int i;
    pid_t pid;
    for (i = 0; i < 10; i++) {
        pid = fork();
        if (pid == 0) {
            sleep(1);
            printf("Child PID = %d\n", getpid());
            return;
        }
    }
    if (pid != 0)
        sleep(2);
}


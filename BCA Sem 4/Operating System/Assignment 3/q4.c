#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/wait.h>
int main() {
    pid_t pid = fork();
    if (pid < 0) {
        perror("Fork failed");
        exit(1);
    }
    if (pid == 0) { // Child process
        printf("Child Process:\n");
        printf("PID: %d\n", getpid());
        printf("Parent PID: %d\n", getppid());
        printf("This is the child process.\n\n");
        exit(0);  // Exit to prevent child from executing parent code
    } else { // Parent process
        wait(NULL);  // Parent waits for child to finish
        printf("Parent Process:\n");
        printf("PID: %d\n", getpid());
        printf("Child PID: %d\n", pid);
        printf("This is the parent process.\n\n");
    }
    return 0;
}

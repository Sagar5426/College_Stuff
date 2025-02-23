#include <stdio.h>
#include <unistd.h> // For fork(), getpid(), getppid()
#include <sys/types.h> // For pid_t
#include <stdlib.h> // For exit()

int main() {
    // Create a new process using fork()
    pid_t pid = fork();

    // Check if fork() failed
    if (pid < 0) {
        perror("Fork failed");
        exit(1);
    }

    // Code executed by the child process
    if (pid == 0) {
        printf("Child Process:\n");
        printf("PID: %d\n", getpid());
        printf("Parent PID: %d\n", getppid());
        printf("This is the child process.\n\n");
    }
    // Code executed by the parent process
    else {
        printf("Parent Process:\n");
        printf("PID: %d\n", getpid());
        printf("Child PID: %d\n", pid);
        printf("This is the parent process.\n\n");
    }

    return 0;
}

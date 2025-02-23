#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>

int main() {
    pid_t pid1, pid2;
    pid1 = fork(); // First fork

    if (pid1 < 0) {
        perror("Fork failed");
        exit(1);
    }
    pid2 = fork(); // Second fork

    if (pid2 < 0) {
        perror("Fork failed");
        exit(1);
    }

    printf("PID: %d, PPID: %d\n", getpid(), getppid());

    return 0;
}

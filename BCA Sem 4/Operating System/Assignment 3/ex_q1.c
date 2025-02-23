#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
int main() {
    pid_t pid = fork();

    if (pid < 0) {
        perror("Fork failed");
        exit(1);
    }
    if (pid == 0) { // Child process
        for (int i = 1; i <= 5; i++) {
            printf("Child: %d\n", i);
            sleep(1); // Simulate work
        }
        exit(0);
    } else { // Parent process
        for (int i = 6; i <= 10; i++) {
            printf("Parent: %d\n", i);
            sleep(1); // Simulate work
        }
    }
    return 0;
}

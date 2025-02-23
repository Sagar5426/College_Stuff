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
        printf("Child Process executing ls:\n");
        execlp("ls", "ls", "-l", NULL); // Replace process with ls
        perror("execlp failed"); // This only runs if execlp fails
        exit(1);
    } else { // Parent process
        wait(NULL); // Wait for child to finish
        printf("Parent Process Completed.\n");
    }

    return 0;
}

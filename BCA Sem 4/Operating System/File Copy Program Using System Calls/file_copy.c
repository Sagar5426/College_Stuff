#include <stdio.h>
#include <fcntl.h>   // For open(), O_RDONLY, O_WRONLY, O_CREAT
#include <unistd.h>  // For read(), write(), close()
#include <stdlib.h>  // For exit()

#define BUFFER_SIZE 1024

int main(int argc, char *argv[]) {
    // Check for correct number of arguments
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <source_file> <destination_file>\n", argv[0]);
        exit(1);
    }

    // Open the source file in read-only mode
    int source_fd = open(argv[1], O_RDONLY);
    if (source_fd < 0) {
        perror("Error opening source file");
        exit(1);
    }

    // Open (or create) the destination file in write mode
    int dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (dest_fd < 0) {
        perror("Error opening/creating destination file");
        close(source_fd);
        exit(1);
    }

    // Buffer to store data during read/write
    char buffer[BUFFER_SIZE];
    ssize_t bytes_read, bytes_written;

    // Read from source and write to destination
    while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0) {
        bytes_written = write(dest_fd, buffer, bytes_read);
        if (bytes_written != bytes_read) {
            perror("Error writing to destination file");
            close(source_fd);
            close(dest_fd);
            exit(1);
        }
    }

    if (bytes_read < 0) {
        perror("Error reading from source file");
    }

    // Close the files
    close(source_fd);
    close(dest_fd);

    printf("File copied successfully.\n");
    return 0;
}

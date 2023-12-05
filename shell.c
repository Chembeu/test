#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(void) {
    char path[100];
    char *args[2];
    printf("cisfun$ ");
    if (fgets(path, sizeof(path), stdin) == NULL) {
        perror("Error reading input");
        return EXIT_FAILURE;
    }


    path[strcspn(path, "\n")] = '\0';
    args[0] = path;
    args[1] = NULL;


    execve(path, args, NULL);


    perror("./shell");
    return EXIT_FAILURE;
}

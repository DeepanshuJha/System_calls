#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    // char *args[] = {"join", "a.txt", "b.txt", NULL};
    // char *args[] = {"ps", NULL};
    char *args[] = {"ls", "-l", NULL}
    execvp(args[0], args);
    printf("Back to example.c");
    return 0;
}
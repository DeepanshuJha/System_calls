#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(){
    pid_t cid = fork();
    
    if(cid < 0){
        perror("fork failed");
        _exit(2);
    }else if(cid == 0){
        printf("I am the child and my id : %d\n", cid);
    }else{
        printf("I am the parent and my id : %d\n", cid);
        wait(0);
        printf("Parent Terminating..\n");
    }
    printf("Closing...\n");
    return 0;
}
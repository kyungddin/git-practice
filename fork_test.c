#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
    int rc = fork();

    if(rc < 0){
        fprintf(stderr, "fork failed\n");
        exit(1);
    }
    else if(rc == 0){
        printf("Hello I am child (pid: %d)", (int)getpid());
    }
    else {
        printf("Hello I am parent of %d (pid:%d)", rc, (int)getpid());
    }

    return 0;
}
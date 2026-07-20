#include <stdlib.h>
#include <stdio.h>
int echo_main(int argc, char *argv[]) {

    for (int i = 1 ;argv[i];i=i+1)
    {
        printf ("%s",argv[i]);
        if(i < argc -1)
            printf(" ");
    }
    printf ("\n");
    return 0;
}

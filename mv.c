#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int mv_main (int argc, char *argv[])
{
    int num;
    char buff[100];

    if (argc != 3)
    {
        printf ("Error\n");
        exit (-1);
    }
    int fd1 = open (argv[1], O_RDONLY);
    if (fd1 < 0)
    {
        printf ("Error in opening first file\n");
        exit (-2);
    }
    int fd2 = open (argv[2], O_WRONLY|O_TRUNC|O_CREAT,0644);

    while ((num = read (fd1, buff, 100)) > 0)
    {
        write (fd2, buff, num);
    }
    unlink(argv[1]);
    return 0;
}

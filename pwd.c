#define _GNU_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int pwd_main() {
    char *path = get_current_dir_name();
    printf("%s\n", path);
    return 0;
}

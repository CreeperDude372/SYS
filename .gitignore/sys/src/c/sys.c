#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
    printf("[SYS] Loading files...\n");
    system("sleep 2");
    printf("[SYS] Finding C files to check...\n");
    system("sleep 1");
    printf("[SYS] Found 3 files in directory 'sys'\n[SYS] Found main.c\n[SYS] Found login.c\n[SYS] Found sys.c\n");
    system("sleep 0.5");
    printf("[SYS] All files are OK!\n");
    system("sleep 0.5");
    printf("[SYS] Ready.\n");
    return(0);
}

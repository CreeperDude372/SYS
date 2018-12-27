#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
    printf("Welcome! Lets get started.\n");
    system("sleep 1");
    printf("Starting sys...\n");
    system("sleep 2");
    system("./sys");
    system("sleep 1");
    printf("SYS is known as a debugger for programs and was included to debug this program.\n");
    system("sleep 0.5");
    printf("Finding login process and stopping it...\n");
    system("sleep 2");
    printf("[SYS] Found process 'login' running.\n[SYS] Stopping process...");
    system("sleep 0.5");
    printf("done.\n");
    printf("[LOGGER] Proccess 'login' has stopped unexpectedly. Telling sys...\n");
    printf("[SYS] Proccess 'login' was stopped by this debbugger and is nothing to worry about!\n");
    printf("[SYS] process 'main' has experinced a fatal error, but has been fixed.\n");
    system("sleep 2");
    system("whiptail --msgbox \"Proccess 'main' has crashed. SYS could not handle the problem.\" 10 50");
    system("clear");
    printf("[SYS] Stopping...\n");
    system("sleep 0.5");
    printf("[term] 'main', and 'sys' returned exit code 0.\n");
    return(0);
}

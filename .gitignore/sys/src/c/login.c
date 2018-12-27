#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
    char username[256] = {0};
    char password[256] = {0};

    printf("Please login:\n");
    printf("USER ");
    scanf("%s", username);
    if (strcasecmp(username, "admin") == 0)
    {
        printf("PWD ");
        scanf("%s", password);
        if (strcasecmp(password, "admin") == 0)
        {
            system("./main");
            return(0);
        }
        else
        {
            printf("Bad login details.");
            return(1);
        }
    }
    else
    {
        printf("Bad login details.");
        return(2);
    }

    return(0);
}

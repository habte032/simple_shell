#include "shell.h"


int main(void)
{
    char *userInput;

    while (1)
    {
        Display();
        userInput = read_userInput();
        execute_cmd(userInput);
        free(userInput);
    }

    return (0);
}
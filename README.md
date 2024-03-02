# Simple Shell

## Description
Simple Shell is a basic UNIX command line interpreter written in C. It provides a minimalistic shell environment for executing commands entered by the user.

## Features
- Displays a prompt and waits for the user to input a command.
- Executes commands entered by the user.
- Supports built-in commands like exit and env.
- Handles errors gracefully.
- Provides a simple, user-friendly interface.

## Usage
To compile the Simple Shell, use the following command:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o simple_shellTo run the Simple Shell, execute the compiled binary:./simple_shell### Examples$ ./simple_shell $ ls file1 file2 $ pwd /home/user $ exit## Built-in Commands
- exit: Exits the shell.
- env: Prints the current environment.

## Authors
- [Author Name](https://github.com/habte032)

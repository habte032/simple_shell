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

1. **Clone the repository:**

    ```bash
    git clone https://github.com/habte032/simple_shell.git
    cd simple-shell
    ```

2. **Compile the Simple Shell:**

    ```bash
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o simple_shell
    ```

3. **Run the Simple Shell:**

    ```bash
    ./simple_shell
    ```

### Examples
```bash
$ ./simple_shell
$ ls file1 file2
$ pwd
/home/user
$ exit


```
## Authors
- [Habtemariam](https://github.com/habte032)

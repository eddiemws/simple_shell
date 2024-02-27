### Project's Title: Simple Shell
### Project Description

This shell project is a program that provides a command-line interface for executing commands and managing processes. It allows users to interact with the system by entering commands and receiving corresponding outputs.

- The project is about UNIX command line interpreter. Like shell types like sh, bash etc.
- The project is Organized by ALX. 
-  Written in C programming language.
-  The project Utilizes different system calls and function in accordance to ALX.

## Usage

To run the shell program, compile the source code and execute the resulting executable file. The program accepts command-line arguments as follows:

Copy

```
$ ./hsh [arg1] [arg2] ...
```

## Features

1. Command Execution: The shell can execute both built-in commands and external commands available in the system.
2. Input Handling: The shell reads user input from the command line and processes it accordingly.
3. Prompt Display: The shell displays a prompt indicating that it is ready to accept user commands.
4. Built-in Commands: The shell supports various built-in commands, such as `cd`, `exit`, and others, providing additional functionality.
5. Signal Handling: The shell handles signals such as Ctrl+C (SIGINT) and Ctrl+Z (SIGTSTP) to provide a smooth user experience.
6. Background Processes: The shell supports executing commands in the background, allowing users to continue interacting with the shell while a process runs.

## Compilation

To compile the shell program, use the following command:

Copy

```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o shell_program
```

Make sure to have all the required source code files in the same directory.

## Execution

To run the compiled shell program, use the following command:

Copy

```
$ ./hsh
```

Once executed, the shell will display a prompt indicating that it is ready to accept commands. Enter commands and press Enter to execute them.

## Built-in Commands

The shell supports the following built-in commands:

1. `cd [directory]`: Change the current working directory to the specified directory. If no directory is provided, it changes to the user's home directory.
2. `exit`: Exit the shell program.
3. `env`: print or display environment
4. more on progress


## External Commands

The shell can execute external commands available in the system. Simply enter the command name followed by any required arguments, and the shell will execute it accordingly.

## Acknowledgements

This shell program was developed as part of [Simple shell/ Alx Low level programming ]. Special thanks to ALX.

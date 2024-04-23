#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>
#include "builtin.h"
#include <string.h>
#include <dirent.h>

//Prototypes
static void exitProgram(char** args, int argcp);
static void cd(char** args, int argpcp);
static void pwd(char** args, int argcp);


/* builtIn
 ** built in checks each built in command the given command, if the given command
 * matches one of the built in commands, that command is called and builtin returns 1.
 *If none of the built in commands match the wanted command, builtin returns 0;
  */

/*
* builtIn
*
* Checks if a command is a built-in shell command and executes it if so.
*
* Args:
*   args: array of strings containing command and arguments
*   argcp: number of elements in args array
*
* Returns:
*   1 if the command was a built-in and was executed, 0 otherwise.
*
* Built-in commands are executed directly by the shell process rather than
* being forked to a new process. This function compares the given command
* to each of the built-ins (exit, pwd, cd, and ls/cp/env or stat/tail/touch
* depending on group). If a match is found, the corresponding function is called.
*/
int builtIn(char** args, int argcp)
{
    //write your code
}

/*
* exitProgram
*
* Terminates the shell with a given exit status.
* If no exit status is provided, exits with status 0.
* This function should use the exit(3) library call.
*
* Args:
*   args: array of strings containing "exit" and optionally an exit status
*   argcp: number of elements in args array
*/
static void exitProgram(char** args, int argcp)
{
 //write your code
}

/*
* pwd
*
* Prints the current working directory.
*
* Args:
*   args: array of strings containing "pwd"
*   argcp: number of elements in args array, should be 1
*
* Example Usage:
*   Command: $ pwd
*   Output: /some/path/to/directory
*/
static void pwd(char** args, int argpc)
{
  //write your code

}

/*
* cd
*
* Changes the current working directory.
* When no parameters are provided, changes to the home directory.
* Supports . (current directory) and .. (parent directory).
*
* Args:
*   args: array of strings containing "cd" and optionally a directory path
*   argcp: number of elements in args array
*
* Example Usage:
*   Command: $ pwd
*   Output: /some/path/to/directory
*   Command: $ cd ..
*   Command: $ pwd
*   Output: /some/path/to
*
* Hint: Read the man page for chdir(2)
*/
static void cd(char** args, int argcp)
{
 //write your code
}

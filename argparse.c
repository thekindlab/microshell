#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "argparse.h"
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>

#define FALSE (0)
#define TRUE  (1)

/*
* argCount
*
* Counts the number of arguments in a given input line.
* You may assume only whitespace is used to separate arguments.
* argCount should be able to handle multiple whitespaces between arguments.
*
* Args:
*   line: intput string containing command and arguments separated by whitespace
*
* Returns:
*   The number of arguments in line.
*   (The command itself counts as the first argument)
*
* Example:
*   argCount("ls -l /home") returns 3
*   argCount("   ls    -l   /home  ") returns 3
*/
static int argCount(char*line)
{
 //write your code
}



/*
* argparse
*
* Parses an input line into an array of argument strings.
* In other words, this function separates a command string into the command and its
* arguments.
*
* You may assume only whitespace is used to separate arguments.
* argparse should be able to handle multiple whitespaces between arguments.
* The function should dynamically allocate space for the array of argument strings,
* following the project requirements. The caller is responsible for freeing this memory.
*
* Args:
*   line: input string containing command and arguments separated by whitespace
*   argcp: stores the number of arguments in the line (argCount)
*
* Returns:
*   An array of strings (one per argument). The first string is the command.
*
* Example:
*   argparse("ls -l /home", &argc) --> returns ["ls", "-l", "/home"] and set argc to 3
*   argparse("   ls    -l   /home  ", &argc) --> returns ["ls", "-l", "/home"] and set argc to 3
*/
char** argparse(char* line, int* argcp)
{
  //write your code
}

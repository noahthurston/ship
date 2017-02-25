/*
 * Noah Thurston 
 * 2/24/2017
 *
 * A simple application called "ship" meant to be run from the commandline
 * All it does is take one argument as the commit message and runs:
 * #git add *
 * #git commit -m "my message from argument"
 * #git push origin master
 */

#define MAX_MESSAGE_LENGTH 100

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
	char commitCommand[150] = {"git commit -m "};

	strcat(commitCommand, "'");
	strcat(commitCommand, argv[1]);
	strcat(commitCommand, "'");

	printf("git add *\n");
	system("git add *");

	printf("%s\n", commitCommand);
	system(commitCommand);

	printf("git push origin master\n");
	system("git push origin master");


}

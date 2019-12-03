#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char* argv[], char* envp[]) {
	// take back control. You only live once
	setreuid(geteuid(), geteuid());
	setregid(getegid(), getegid());
	printf("¯\\_(ツ)_/¯ yolo\n");
	// have fun
	execvp(argv[1], &argv[1]);
	perror( "execve failed" );
}

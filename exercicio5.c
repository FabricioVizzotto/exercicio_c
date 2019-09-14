#include <pthread.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <signal.h>


int main(){
	printf("UHUUU\n");
	printf("*********************************************************\n");
	system("bash-c 'while true; do echo hello; sleep 2; done'");
	printf("*********************************************************\n");
	printf("Executar o exec vai travar o código, mas o exec vai rodar\n");
	printf("*********************************************************\n");
	execl("/bin/ls","ls","-l", 0);
	printf("O processo atual segue normalmente\n");
	printf("*********************************************************\n");
	printf("THE END\n");
	return 0;
}

#include <pthread.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <signal.h>

#define CHILD_PID 0  
int main(){
	printf("BATATINHA QUANDO NASCE QUER PARAR DE FAZER ESSE TIPO DE EXERCÍCIO\n");
	
	pid_t pid;
	int child_status;
	int variavel_global = 7;
	pid = fork();
	if (pid<0) {
		printf("Erro no fork()\n");
		exit(-1);
	} else if (pid==CHILD_PID) {
		variavel_global = variavel_global + 1;
		printf("Digite por favor o número de vezes que tu quer que eu imprima números pares \n");
		int pares = 0;
		int x = 0;
		int count = 0;
		scanf("%d",&pares);
		while(count < pares) {
			count = count + 1;
			printf("esse é o %dº par: %d\n",count,x);
			x = x + 2;
			wait(1);
		}
		exit(0);
	} else {
		wait(&child_status);
		printf("%d, só apareci porque o processo filho acabou de imprimir\n", child_status);
		exit(0);
	}
	return 0;
}

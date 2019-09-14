
#include <pthread.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <signal.h>

#define SIGHUP  1   /* Hangup the process */
#define SIGINT  2   /* Interrupt the process */
#define SIGQUIT 3   /* Quit the process */
#define SIGILL  4   /* Illegal instruction. */
#define SIGTRAP 5   /* Trace trap. */
#define SIGABRT 6   /* Abort. */
int exercise1(pid_t pid){
    printf("EXERCICIO 1\n");
    if(pid==0){
        printf("eu sou o filho %d\n",pid);
    }else{
        printf("eu sou o pai %d\n",pid);
    } 
    return 0; 
}

int exercise2(pid_t pid){
    printf("EXERCICIO 2\n");
    int a = 20;
    if(pid==0){
        printf("%d\n",a);
    }else{
        printf("%d\n",a);
    } 
    return 0; 
}


int exercise3(pid_t pid){
    printf("EXERCICIO 3\n");
    int b = 20;
    printf("%d: primeiro valor %d\n",pid,b);
    if(pid==0){
        b=b+10;
    }
    printf("%d: segundo valor %d\n",pid,b);
    if(pid!=0){
        b=b+1;
    }
    printf("%d: terceiro valor %d\n",pid,b);
    return 0; 
}
int main() 
{
   pid_t pid;
   pid = fork(); 
   if(pid==-1){
     return 0;
   }
   exercise1(pid); 
   exercise2(pid); 
   exercise3(pid); 
}

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

#DEFINE SETNICEINC 378
#DEFINE SETNICE 379

int main(){
	syscall(SETNICEINC,current->pid,5);
	syscall(SETNICE,current->pid,5);
	int f=fork();
	if(f==0){
		print("Nice:%d\n",current->nice);
		print("Nice_inc:%d\n",current->nice_inc);
	}
}

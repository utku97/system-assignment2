#include <linux/syscalls.h>
#include <linux/kernel.h>
#include <linux/sched.h>

asmlinkage int sys_mycall(int i,int j){
	return i+j;
}

asmlinkage long set_nice_inc(pid_t p,int value){
	struct task_struct* task=pid_task(find_get_pid(p),PIDTYPE_PID);
	task->nice_inc=value;
	return value;
}

asmlinkage long set_nice(pid_t p,int value){
	struct task_struct* task=pid_task(find_get_pid(p),PIDTYPE_PID);
	task->nice=value;
	return value;
}

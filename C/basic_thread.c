#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *threadFunc(void *varg) {
	sleep(1);
	printf("Printing from thread\n");
}

int main() {
	pthread_t thread1;
	pthread_create(&thread1, NULL, threadFunc, NULL);
	pthread_join(thread1, NULL);
	return 0;
}
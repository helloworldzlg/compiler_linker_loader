#include <stdio.h>

void foo()
{
	printf("after main run!\n");

	return;
}

int main(int argc, int argv[])
{
	atexit(&foo);

	printf("main program running!\n");

	return 0;
} 

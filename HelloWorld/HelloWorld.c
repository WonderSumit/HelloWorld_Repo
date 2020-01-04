/* Test Program To say Hello World */

#include <stdio.h>

typedef  unsigned int 	EFI_STATUS;

#define SUCCESS		0
#define FAILED		1

int main()
{
	EFI_STATUS	status = SUCCESS;
	printf("Hello World\n");
	return status;
	
}

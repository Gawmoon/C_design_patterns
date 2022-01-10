#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "customer.h"

int main() {
	// Employee definition

	char *name = "Smith";
	Address* addr = malloc(sizeof *addr);

	CustomerPtr cptr = createCustomer(name, addr);
	//printf ( "Hello world, %s\n", cptr->name);
	printf ( "Hello world, %s\n", getName(cptr));
}

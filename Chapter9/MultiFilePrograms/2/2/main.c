/*
 *	main.c
 */
#include "header.h"
#include <stdio.h>

char	*AnotherString = "Hello Everyone";

main()
{
	printf("Running...\n");

	/*
	 *	Call WriteMyString() - defined in another file
	 */
	WriteMyString(AnotherString);

	printf("Finished.\n");
}

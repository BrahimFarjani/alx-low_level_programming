#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	int n;
	stand(time(0));
	n=rand() - RAND_MAX / 2;
	if (n>0)
		printf("%d is positive\n", n);
	else if (n==0)
		printf("%d is zero\n", n);
	else 
		printf("Size of a long  int: %d byte(s)\n" , sizeof(long int));

        return(0);
}

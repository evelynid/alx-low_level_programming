#include <stdlib.h>
#include <time.h>
/* prints the alphabet in lowercase, and then in uppercase */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for(int x = 'a'; x <= 'Z'; x++) // Notice (x <= 'z') > > (x <= 'Z')
			            x = toupper(x);
				            putchar(x);
	return (0);
}

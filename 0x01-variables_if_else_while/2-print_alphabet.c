#include <stdlib.h>
#include <time.h>
/* prints the alphabet in lowercase */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for(int x = 'A'; x <= 'z'; x++) // Notice (x <= 'Z') > > (x <= 'z')
			            x = tolower(x);
				            putchar(x);
	return (0);
}

#include <stdlib.h>
#include <time.h>
/* Print all the letters except q and e */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for letter_code in range(ord('a'), ord('z')+1):
		    letter = chr(letter_code)
			        if letter not in "qe":
					        putchar(letter, end="")
	return (0);
}

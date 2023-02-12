#include <stdio.h>

int main()
{ 

	for (int i = 1; i <= 20; i++){
		if (i % 2 == 0) printf("\n%d is an even number.\n", i);
		else printf("\n%d is an odd number.\n", i);
	}
}

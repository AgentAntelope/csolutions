#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;

	for (i = 0; i < 1000; i++) {
		printf("%d ", rand() & 1);
	}

	return 0;
}

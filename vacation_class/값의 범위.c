#include <stdio.h>

 main(void) {

	unsigned int max_number = 2200000000;
	printf("%u\n", max_number);

	int num1 = 1; 
	printf("%d\n", sizeof(num1));
	printf("%zu\n", sizeof(100));//정수는 4비트//
	printf("%zu\n", sizeof(3.14));//더블은 8비트//
	return 0;
}
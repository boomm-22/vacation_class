#include <stdio.h>

 main(void) {

	unsigned int max_number = 2200000000;
	printf("%u\n", max_number);

	int num1 = 1; 
	printf("%d\n", sizeof(num1));
	printf("%zu\n", sizeof(100));//������ 4��Ʈ//
	printf("%zu\n", sizeof(3.14));//������ 8��Ʈ//
	return 0;
}
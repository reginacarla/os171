#include <stdio.h>
void main(void){
	char varchar0='a';
	char varchar1='b';
	char varchar2='c';
	char varchar3='d';
	printf("==================================================\n");
	printf("varchar0: value = %2c, address = %p\n", varchar0, &varchar0);
	printf("varchar1: value = %2c, address = %p\n", varchar1, &varchar1);
	printf("varchar2: value = %2c, address = %p\n", varchar2, &varchar2);
	printf("varchar3: value = %2c, address = %p\n", varchar3, &varchar3);
	printf("==================================================\n");
}

#include <stdio.h>

char varchar0='a';
char varchar1='b';
char varchar2='c';
char varchar3='d';
char* ptrchr0=&varchar0;
char* ptrchr1=&varchar1;
char* ptrchr2=&varchar2;
char* ptrchr3=&varchar3;
char** ptrptr0=&ptrchr0;
char** ptrptr1=&ptrchr1;
char** ptrptr2=&ptrchr2;
char** ptrptr3=&ptrchr3;
char*** ultimate_pointer0=&ptrptr0;
char*** ultimate_pointer1=&ptrptr1;
char*** ultimate_pointer2=&ptrptr2;
char*** ultimate_pointer3=&ptrptr3;

void main(void){
	printf("varchar0: val= %c, adr= %p\n", varchar0, &varchar0);
	printf("varchar1: val= %c, adr= %p\n", varchar1, &varchar1);
	printf("varchar2: val= %c, adr= %p\n", varchar2, &varchar2);
	printf("varchar3: val= %c, adr= %p\n", varchar3, &varchar3);

	printf("ptrchr0: pts=%c, val=%p, adr=%p\n", *ptrchr0, ptrchr0, &ptrchr0);
	printf("ptrchr1: pts=%c, val=%p, adr=%p\n", *ptrchr1, ptrchr1, &ptrchr1);
	printf("ptrchr2: pts=%c, val=%p, adr=%p\n", *ptrchr2, ptrchr2, &ptrchr2);
	printf("ptrchr3: pts=%c, val=%p, adr=%p\n", *ptrchr3, ptrchr3, &ptrchr3);

printf("ptrchr0: ppt=%c, pts=%p, val=%p, adr=%p\n", **ptrptr0, *ptrptr0, ptrptr0, &ptrptr0);
printf("ptrchr1: ppt=%c, pts=%p, val=%p, adr=%p\n", **ptrptr1, *ptrptr1, ptrptr1, &ptrptr1);
printf("ptrchr2: ppt=%c, pts=%p, val=%p, adr=%p\n", **ptrptr2, *ptrptr2, ptrptr2, &ptrptr2);
printf("ptrchr3: ppt=%c, pts=%p, val=%p, adr=%p\n", **ptrptr3, *ptrptr3, ptrptr3, &ptrptr3);

printf("ptrptr0: ppp= %d, ppt=%c, pts=%p, val=%p, adr=%p\n", ***ultimate_pointer0, **ultimate_pointer0, *ultimate_pointer0, ultimate_pointer0, &ultimate_pointer0);
printf("ptrptr1: ppp= %d, ppt=%c, pts=%p, val=%p, adr=%p\n", ***ultimate_pointer1, **ultimate_pointer1, *ultimate_pointer1, ultimate_pointer1, &ultimate_pointer1);
printf("ptrptr2: ppp= %d, ppt=%c, pts=%p, val=%p, adr=%p\n", ***ultimate_pointer2, **ultimate_pointer2, *ultimate_pointer2, ultimate_pointer2, &ultimate_pointer2);
printf("ptrptr3: ppp= %d, ppt=%c, pts=%p, val=%p, adr=%p\n", ***ultimate_pointer3, **ultimate_pointer3, *ultimate_pointer3, ultimate_pointer3, &ultimate_pointer3);
}

#include <stdio.h>

int main(){

	int a=0x01 ;
	char *prt= (char*)&a;
	
	if(*prt==0x01)
		printf("Little Endian\n");
	else
		printf("Big Endian\n");

// size 
	int intsize = sizeof (int*);
	if (intsize =8)
		printf("architecture of my system is 64-bit\n");
	else 
		printf("architecture of my system is 32-bit\n");
	
	return 0;
}

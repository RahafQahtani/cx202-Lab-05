#include <stdio.h>

int main() {
	int inary[4];
	char charary[4];
	short shoary[4];
	double doubary[4];

//
	printf("Integer Array:");
	for(int i=0; i<4;i++){
		printf("\n %p",&inary[i]);
	}	
//
	printf("\n Character Array:");
	for(int i=0; i<4;i++){
		printf("\n %p",&charary[i]);
	}

//
	printf("\n Short Array:");
	for(int i=0; i<4;i++){
		printf("\n %p",&shoary[i]);
	}
//
	printf("\n Double Array:");
		for(int i=0; i<4;i++){
	printf("\n %p",&doubary[i]);
	}


	return 0;
}


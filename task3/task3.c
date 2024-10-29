#include <stdio.h>

//sum intger function
int isum(int a, int b) {
    return a + b;
}

//sum float function
float fsum(float c, float d) {
    return c + d;
}

//area of circle function
float cirarea(float r) {
        float pi=3.14;
        return pi*r*r;
}

//area of rectangler function
float rectarea(float w ,float h) {
        return w*h;
}

//factorial function
int factorial(int n) {
        if (n<=1)
                return 1;
        else
                return n*factorial(n-1);
}


int main()
{
// Calling int sum function 
	int intsum = isum(10, 30);
	printf("Sum of integers is: %d", intsum);

	
// Calling float sum function 
        float flosum = fsum(10.7, 30.5);
        printf("\n Sum of float is: %f", flosum);

// Calling area of circle function 
        float circlearea = cirarea(20);
        printf("\n area of circle is: %f", circlearea);

// Calling area of rectanglar function 
        float rectangulararea = rectarea(30,70);
        printf("\n area of rectanglar is: %f", rectangulararea);
// Calling factorial function 
        int factoriala= factorial(3);
        printf("\n factorial result is: %d", factoriala);

return 0;

}


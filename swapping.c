//Write a C Program to  Swap Numbers Using Temporary Variable
#include<stdio.h>
int main()
{
	int a=10,b=20,temp;
	printf("\nvalue of a before swapping : %d",a);
	printf("\nvalue of b before swapping : %d",b);
	temp = a;
	a=b;
	b=temp;
	printf("\nvalue of a After swapping : %d",a);
	printf("\nvalue of b After swapping : %d",b);
	
}

#include<stdio.h>
void main()
{
	int hindi,english,maths;
	float per;
	printf("enter hindi marks : ");
	scanf("%d",&hindi);
	printf("enter english marks : ");
	scanf("%d",&english);
	printf("enter maths marks : ");
	scanf("%d",&maths);
	per=((hindi+english+maths)/300.0)*100; 
	printf("student result ....\n");
	printf("____________________________\n"); 
	printf("hindi    : %d\n",hindi);
	printf("english  : %d\n",english);
	printf("math     : %d\n",maths); 
	printf("____________________________\n");   
	printf("percentage = %.2f",per);
}

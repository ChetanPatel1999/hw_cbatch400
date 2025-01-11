//wap to check given char is vovel or consonent.
#include<stdio.h>
void main()
{
 char alpha;
 printf("enter a alphabet : ");
 scanf("%c",&alpha);//p
 alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o'|| alpha=='u'
 ?printf("%c is vovel",alpha)
 :printf("%c is consonent",alpha);

}
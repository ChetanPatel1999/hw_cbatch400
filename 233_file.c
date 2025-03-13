//getc():- read one char
//putc():- write one char
#include<stdio.h>
void main()
{
   FILE *ptr;
   char ch;
   ptr=fopen("facto.txt","r");
   ch=getc(ptr);
   printf("%c",ch);
   fclose(ptr);
}

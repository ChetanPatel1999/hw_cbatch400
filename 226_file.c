//create file using c programm
#include<stdio.h>
void main()
{
   FILE *ptr;
   ptr=fopen("C:\\Users\\WIN\\Documents\\chetan patel\\demo\\ram.txt","w");
   fclose(ptr);
}
//fgets():- read one line from file
//fputs():- write one line in file
#include<stdio.h>
void main()
{
  FILE *ptr;
  char name[30]="this is variable";
  ptr=fopen("abc.txt","w");
  fputs("hi i am chetan patel\n",ptr);
  fputs(name,ptr);
  fclose(ptr);
}
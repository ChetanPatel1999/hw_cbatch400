//ftell():- its return pointer current position 
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("abc.txt", "r");
    printf("ptr postion = %d\n",ftell(ptr));
    while(1)
    {
        ch=fgetc(ptr);
        if(ch==-1)
        {
            break;
        }
    }
    printf("ptr postion = %d\n",ftell(ptr));
}

//wap to search 3 in given number.
#include <stdio.h>
void main()
{
    int num,rem,f=0;
    printf("enter a num : ");
    scanf("%d", &num);//123523
    while (num)
    {
        rem = num % 10;//5
        if(rem==3)
        {
            f=1;
            break;
        }
        num = num / 10;//1255
    }
    if(f==1)
    {
        printf("3 is found");
    }
    else{
        printf("3 is not found");
        
    }
   
}
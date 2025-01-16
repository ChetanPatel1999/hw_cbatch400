// wap to find greatest number between three numbers.
//nested ternary :- inside ternary operator again ternary operator
#include <stdio.h>
void main()
{
    int num1, num2, num3, ans;
    printf("enter first num : ");
    scanf("%d", &num1); // 122
    printf("enter second num : ");
    scanf("%d", &num2); // 900
    printf("enter third num : ");
    scanf("%d", &num3); // 8967
    ans = num1 > num2 ? (num1>num3?num1:num3): (num2>num3?num2:num3);
    printf("greatest num = %d\n", ans); // 900
    if(ans%2==0)
    {
        printf("%d is even ",ans);
    }
    else{
         printf("%d is odd ",ans);
    }
}
// logical opeartor
#include <stdio.h>
void main()
{
    int ans, ans1, ans2, c;
    ans = 12 > 77 && 4 == 6 && 12 != 9;
    ans1 = 12 > 7 || 4 == 6 || 12 != 12;
    ans2 = 12 > 7 || 4 == 6 && 12 != 12;
    c = !(12 > 7);          // 0
    c = !(12 > 9 && 8 > 6); // 0
    c = (!(12 > 9) && 8 > 6); // 0
    c= !12+8;
    printf("ans = %d", c);
}
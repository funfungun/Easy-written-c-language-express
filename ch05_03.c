#include <stdio.h>
int main(void)
{
	int x, y, z, max;
	printf("3개의 정수를 입력하시오: \n");
	scanf("%d %d %d", &x, &y, &z);
	max = (x > y ) ? x : y;
	max = (max > z ) ? max : z;
	printf("최대값:%d \n", max);

    return 0;
}
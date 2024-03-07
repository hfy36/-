#include<stdio.h>

int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{

   int num1 = 20;
   int num2= 30;
   scanf_s("%d%d", &num1, &num2);

   int max = get_max(num1, num2);
   printf("max=%d\n", max);





   return 0;
}
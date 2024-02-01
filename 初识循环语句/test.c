//初识 - 循环语句 - 可用选择语句来控制循环，也可以一直循环下去
#include <stdio.h>
int main()
{
	int line = 0;
	//循环
	while (line < 30000)
	{
		printf("继续:%d\n",line);
		line++;
	}
	if (line == 30000)
	{
		printf("结束\n");
	}
	return 0;
}
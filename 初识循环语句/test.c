//��ʶ - ѭ����� - ����ѡ�����������ѭ����Ҳ����һֱѭ����ȥ
#include <stdio.h>
int main()
{
	int line = 0;
	//ѭ��
	while (line < 30000)
	{
		printf("����:%d\n",line);
		line++;
	}
	if (line == 30000)
	{
		printf("����\n");
	}
	return 0;
}
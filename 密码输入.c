#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int a = 0;
	char password[10] = {0};
	for (a = 0; a < 3; a++)
	{
		printf("ÇëÊäÈëÃÜÂë\n");
		scanf("%s", password);
		if (strcmp(password,"123456")==0)
		{
			printf("ÃÜÂëÕýÈ·");
			break;
		}

	}
	if (a == 3)	
		printf("ÃÜÂë´íÎóÈý´Î£¬ÍË³ö³ÌÐò");
	
	return 0;
}

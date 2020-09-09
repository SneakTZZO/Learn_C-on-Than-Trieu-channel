//Hãy chuẩn hoá một xâu ký tự cho trước : loại bỏ các dấu cách thừa
#include<string.h>
#include<ctype.h>

void remove_space(char* str)
{
	short length = strlen(str) - 1;
	// remove the space below
	if (isblank(str[length - 1]))
	{
		for (short i = length - 1; i > 0; i--)
		{
			if (isgraph(str[i]))
			{
				str[i + 1] = "\0";
				length = i + 1;
				break;
			}
		}
	}
	// delete the space above
	if (isblank(str[0]))
	{
		for (short i = 0; i < length; i++)
		{
			if (isgraph(str[i]))
			{
				for (int j = 0; j < length - i; j++)
				{
					str[j] = str[j + i];
				}
				str[length - i] = '\0';
				length -= i;
				break;
			}
		}
	}
	// remove the space in the middle
	short mark;
	for (short i = length - 1; i > 0 ; i--)
	{
		if (isblank(str[i]) && isblank(str[i - 1]))
		{
			for (short j = i; isblank(str[j - 1]); j--)
			{
				mark = j;
			}
			length -= i - mark + 1;
			for (int j = mark; j < length; j++)
			{
				str[j] = str[j + i - mark + 1];
			}
			str[length + 1] = '\0';
		}
	}
	puts(str);
}

int main()
{
	char str[100];
	fgets(str, 99, stdin);
	remove_space(str);
	return 0;
}
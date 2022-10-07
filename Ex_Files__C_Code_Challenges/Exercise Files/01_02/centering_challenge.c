#include <stdio.h>

int str_count(char str[])
{
	int count;
	for (count = 0; str[count] != '\0'; ++count)
		;
	return count;
}

void center_text(int width, char *text)
{
	int lenstr = str_count(text);
	
	if (lenstr % 2 == 1)
	{
		int n = (width - (lenstr - 1)) / 2;
		printf("%*s", n, "");
		printf("%s\n", text);
	}
	else {
		int n = (width - lenstr) / 2;
		printf("%*s", n, "");
		printf("%s\n", text);
	}
}

int main()
{
	char *title[] = {
		"March Sales",
		"My First Project",
		"Centering output is so much fun!",
		"This title is very long, just to see whether the code can handle such a long title"};
	int x;

	for (x = 0; x < 4; x++)
	{
		center_text(80, title[x]);
	}

	return (0);
}

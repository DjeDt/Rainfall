#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int index = 0;
	while (true)
	{
		if (index * 4 == 60)
		{
			printf("%d\n", index);
			break ;
		}
		index -= 1;
	}
}

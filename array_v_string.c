#include <stdio.h>

/**
  * main - checking differences between a string and an array
  *
  * Return: Always 0
  */
int main(void)
{
	char name[] = "name";
	char arr[] = {'n', 'a', 'm', 'e'};
	int i;

	printf("name is: %s\n", name);
	printf("size of name is:%lu\n", sizeof(name));
	name[2] = '2';
	printf(" name[2] is: %c\n", name[2]);

/* printf("arr is: %s\n", arr); --> bad idea outputs namename */
	printf("arr is: ");
	for (i = 0; i < (int)sizeof(arr); i++)
		printf("%c", arr[i]);
	printf("\n");
	printf("size of arr is: %lu\n", sizeof(arr));
	arr[2] = '2';
	printf("arr[2] is %c\n", arr[2]);

	return (0);
}

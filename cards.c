#include <stdio.h>
#include <stdlib.h>

/**
  * main - Program for card counting
  *
  * Released under the Vegas Public License.
  * (c)2014 The College Blackjack Team.
  * Return: 0 --> success
  */
int main(void)
{
	char card_name[3];
	int count = 0;
	int val = 0;

	while (card_name[0] != 'X')
	{
		puts("Enter the card_name: ");
		scanf("%2s", card_name);

		switch (card_name[0])
		{
		case 'K':
		case 'Q':
		case 'J':
			val = 10;
			break;
		case 'A':
			val = 11;
			break;
		case 'X':
			continue;
		default:
			val = atoi(card_name);
			if ((val < 1) || (val > 10))
				{
					puts("I don't understand that value!");
					continue;
				}
		}

		printf("The card value is: %i\n", val);

		if ((val >= 3) && (val <= 6))
			count++;
		else if (val == 10)
			count--;

		printf("Current count: %i\n", count);
	}
	return (0);
}

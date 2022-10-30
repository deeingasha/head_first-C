#include <stdio.h>

/**
  * go_south_east - will move a player SE in the Bermuda rectangle i.e decrease
  *		latitude and increase longitude.
  *
  * @lat: latitude
  * @lon: longitude
  */
void go_south_east(int *lat, int *lon)
{
	*lat = *lat - 1;
	*lon = *lon + 1;
}

/**
  * main - main game
  *
  * Return: Always 0
  */
int main(void)
{
	int latitude = 32;
	int longitude = -64;

	go_south_east(&latitude, &longitude);
	printf("Avast! Now at: [%i, %i]\n", latitude, longitude);
	return (0);
}

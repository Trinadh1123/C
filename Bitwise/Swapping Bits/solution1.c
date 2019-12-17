#include <stdio.h>

/* Solution 1 for the problem statement */

int main(void)
{

	int number;
	int source;
	int destination;
	
	printf ( "Enter a Number : " );
	scanf ( "%d", &number );
	printf ( "Enter the Source position : " );
	scanf ( "%d", &source );
	printf( "Enter the Destination position : " );
	scanf( "%d", &destination );

	if ( ( ( number >> ( source - 1 ) ) & 1 ) != ( ( number >> ( destination - 1 ) ) & 1 ) ) {
		number = number ^ ( ( 1 << ( source - 1 ) ) | ( 1 << ( destination - 1 ) ) );
	}
	
	printf ( "%d\n", number );

	return 0;

}

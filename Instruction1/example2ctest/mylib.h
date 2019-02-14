#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int      count;
	int      value;
	char     *name;
} Coin;

int init

	( Coin* coins );

void reset
	
	( Coin* coins ,
	  int	 n     );


int read ( void );

int check (int amount);

void split

	( int     amount ,
	  Coin*   coins  ,
	  int	  outputcheck);

void report

	( int     amount ,
	  Coin*   coins  ,
	  int     n      ,
	  int	  outputcheck);

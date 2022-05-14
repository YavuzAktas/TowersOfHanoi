#include <stdio.h>
#include <stdlib.h>


void hanoiTower( int n, int from, int to, int aux );


int main( int from, int to, int aux ){


	int  number;	//The number of disks to be moved

	printf("Enter the number of disks : ");
	scanf("%d", &number );

	hanoiTower( number, 1, 2, 3 );
}


void hanoiTower( int n, int from, int  aux, int to ){

	if( n == 1 ){

		printf("%d --> %d\n", from, to );
	}

	else{

		hanoiTower( n - 1, from, to, aux );	//The peg on which these disks are initially threaded. The peg to which this stack of disks is to be moved. The peg to be used as a temporary holding area
		printf("%d --> %d\n", from, to );
		hanoiTower( n - 1, aux, from, to );
	}
}
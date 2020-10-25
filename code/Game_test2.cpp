#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <time.h>

char map[11][11], map1[11][11] ;
int check_K=0, check_E=0;
int Px=-1,Py=-1,Ex=-1,Ey=-1,Kx=-1,Ky=-1;


void tao_map()
{
	int x,y;
	for ( int i = 1; i <= 10; i++ )
		for ( int j = 1; j <= 10; j++ ) map[i][j] = '_';
	srand((int)time(0));
//	 Dat khoa K
	do{
		x = rand() % 10 +1 ;
		y = rand() % 10 +1 ;
	} while ( map[x][y] != '_' );
	Kx=x; Ky=y; map[Kx][Ky]= 'K';

//	 Dat loi ra E
	do{
		x= rand() % 10 +1 ;
		y= rand() % 10 +1 ;
	} while ( map[x][y] != '_' );
	Ex=x; Ey=y; map[Ex][Ey]='E';

//	 Dat nguoi choi P
	do{
		x= rand() % 10 +1 ;
		y= rand() % 10 +1 ;
	} while ( map[x][y] != '_' );
	Px=x; Py=y; map[Px][Py]='P';
	
//	 Dat 20 qua bom
	for ( int i=1 ; i<=20 ; i++)
	{
		do{
			x= rand() % 10 +1 ;
			y= rand() % 10 +1 ;
		} while ( map[x][y] != '_' );
		map[x][y] = '*';
	}
}

void in_map()
{
	for (int i=1; i<=10; i++){
		for (int j=1; j<=10; j++) printf("%c ",map[i][j]);
		printf("\n");}
	for (int i=1; i<=10; i++)
		for (int j=1; j<=10; j++) map1[i][j]=map[i][j];
	return ;
}


void check_map()
{
	if ( map[Kx][Ky] == 'P' )           /* Neu player nhat duoc Key */
	{
		in_map();
		printf("You've just picked up a key!!!") ;
		check_K = 1 ;
		return ;
	}
	if ( map[Ex][Ey] == 'P' )       /* Neu player di chuyen den vi tri Exit: */
	{
		if  ( check_K == 0 )        /* Neu ko co Key thi cap nhat lai map */
		{
			for (int i=1; i<=10; i++)
				for (int j=1; j<=10; j++)
				{
					if ( map1[i][j] == 'P' ) { Px=i; Py=j; map[i][j] = 'P' ; }
					if ( map1[i][j] == 'E' ) { Ex=i; Ey=j; map[i][j] = 'E' ; }
				}
			in_map();
			printf( "You can't exit, please acquire the key(s) first." );
		}
		else {                      /* Neu co Key thì ...*/
			in_map() ;
			printf("Congrats, you've just escaped the dungeon") ;
			check_E=1 ;
			}
		return ;
	}
	in_map() ;
	return ;
}

int update_map(int k)     // Cap nhat map sau môi lan Player di chuyen.
{
 	switch (k) {
		case 1:   // go=D
			if ( Py < 10 )
			{
				if ( map[Px][Py+1] == '*' ) { printf("Sorry, you lost because you stepped on a bomb !!!"); exit(0) ; }
				map[Px][Py] = '_' ; map[Px][Py+1] = 'P' ; Py=Py+1 ; check_map() ;
			}
			else in_map() ;
			break;
		case 2:     // go=A
			if ( Py > 1 )
			{
				if ( map[Px][Py-1] == '*' ) { printf("Sorry, you lost because you stepped on a bomb !!!"); exit(0) ; }
				map[Px][Py] = '_' ; map[Px][Py-1] = 'P' ; Py=Py-1 ; check_map() ;
			}
			else in_map() ;
			break;
		case 3:     // go=W
			if ( Px > 1 )
			{
				if ( map[Px-1][Py] == '*' ) { printf("Sorry, you lost because you stepped on a bomb !!!");  exit(0) ; }
				map[Px][Py] = '_' ; map[Px-1][Py] = 'P' ; Px=Px-1 ; check_map() ;
			}
			else in_map() ;
			break;
		case 4:     // go=S
			if ( Px < 10 )
			{
				if ( map[Px+1][Py] == '*' ) { printf("Sorry, you lost because you stepped on a bomb !!!"); exit(0) ; }
				map[Px][Py] = '_' ; map[Px+1][Py] = 'P' ; Px=Px+1 ; check_map() ;
			}
			else in_map() ;
			break;
			}
	return 0 ;
}

int main()
{
	char go;
	int k;
	check_K=0;
	check_E=0;
	tao_map();
	in_map();
	while (check_E!=1)
	{
		printf("YOUR MOVE? ");
		scanf("%c",&go);
		fflush(stdin);
		if (go=='D') k=1;
		else if (go=='A') k=2;
			 else if (go=='W') k=3;
				  else if ( go=='S') k=4;
						else { in_map() ; printf("Key error.") ; continue ; }
		update_map(k);
 		printf("\n");
	}
	return 0;
}




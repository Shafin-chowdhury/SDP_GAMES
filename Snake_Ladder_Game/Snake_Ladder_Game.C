#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<time.h>
int n_players,_1st=0,_2nd=0,_3rd=0,_4th=0,position=0,seat=0,f,d1,d2;
char n;

int Rolling();
int Dice();
int main()


{                               printf("\t\t\t\t\tWellcome to Snake Ladder Game\n\n");

      printf("|100  99  98  97  96  95  94  93  92  91|                         Snake 12 to 2         Ladder 3 to 16\n");
      printf("|90   89  88  87  86  85  84  83  82  81|                         snake 14 to 11        Ladder 5 to 7\n");
      printf("|80   79  78  77  76  75  74  73  72  71|                         Snake 17 to 4         Ladder 15 to 25\n");
      printf("|70   69  68  67  66  65  64  63  62  61|                         Snake 31 to 19        Ladder 18 to 20\n");
      printf("|60   59  58  57  56  55  54  53  52  51|                         Snake 35 to 22        Ladder 21 to 32\n");
      printf("|50   49  48  47  46  45  44  43  42  41|                         Snake 54 to 34        Ladder 28 to 84\n");
      printf("|40   39  38  37  36  35  34  33  32  31|                         Snake 64 to 60        Ladder 51 to 67\n");
      printf("|30   29  28  27  26  25  24  23  22  21|                         Snake 87 to 36        Ladder 72 to 91\n");
      printf("|20   19  18  17  16  15  14  13  12  11|                         Snake 95 to 75        Ladder 80 to 99\n");
      printf("|10   9   8   7   6   5   4   3   2   1 |                         Snake 97 to 79                          ") ;
      printf("                                                                         The player who reach 100 first will be wiiner\n");


printf("\t\t\t\tPress  Enter to roll the dice\n");
printf("Maximum plyaer should not exceed 4\t\t\tEnter the The number of players you want:");
scanf("%d",&n_players);
//Selection of players
	while ("game")
	{

	f=(seat%n_players)+1;
	printf("Player %d turn\n",f);


    Rolling();
    Dice();

	if (f==1)
	position=_1st;
	if (f==2)
	position=_2nd;
	if (f==3)
    position=_3rd;
    if (f==4)
    position=_4th;
	if (position+d1 > 100)
	printf("The Value exceeds 36 so the player will not move\n");
	else if (position+d1 <= 100)
	{
	position=position+d1; //increment of player position

	//for Ladders
	if( position == 3)
	{
		printf("Horray! Up the ladder!\n");
		position=position+13;
	}
	if( position == 5)
	{
		printf("Horray! Up the ladder!\n");
		position=position+2;
	}
	if( position == 15)
	{
		printf("Horray! Up the ladder!\n");
		position=position+10;
	}
	if( position == 18)
	{
		printf("Horray! Up the ladder!\n");
		position=position+2;
	}
	if( position == 21)
	{
		printf("Horray! Up the ladder!\n");
		position=position+11;
	}
	if( position == 28)
	{
		printf("Horray! Up the ladder!\n");
		position=position+56;
	}
	if( position == 51)
	{
		printf("Horray! Up the ladder!\n");
		position=position+16;
	}
	if( position == 72)
	{
		printf("Horray! Up the ladder!\n");
		position=position+19;
	}
	if( position == 80)
	{
		printf("Horray! Up the ladder!\n");
		position=position+19;
	}
     // for snakes
	if( position == 12)
	{
		printf("Ouch! Bitten by a snake!\n");
		position=position-10;
	}
	if( position == 17)
	{
		printf("Ouch! Bitten by a snake!\n");
		position=position-13;
	}
	if( position == 14)
	{
		printf("Ouch! Bitten by a snake!\n");
		position=position-3;
	}
	if( position == 31)
	{
		printf("Ouch! Bitten by a snake!\n");
		position=position-12;
	}
	if( position == 35)
	{
		printf("Ouch! Bitten by a snake!\n");
		position=position-13;
	}
	if( position == 54)
	{
		printf("Ouch! Bitten by a snake!\n");
		position=position-20;
	}
	if( position == 64)
	{
		printf("Ouch! Bitten by a snake!\n");
		position=position-4;
	}
	if( position == 87)
	{
		printf("Ouch! Bitten by a snake!\n");
		position=position-51;
	}
	if( position == 95)
	{
		printf("Ouch! Bitten by a snake!\n");
		position=position-20;
	}
	if( position == 97)
	{
		printf("Ouch! Bitten by a snake!\n");
		position=position-18;
	}


   //position of players
	}
		if (f==1)
	{
	_1st=position;
	printf("Player 1 landed on  %d\n",_1st);
	}
	if (f==2)
	{
	_2nd=position;
	printf("Player 2 landed on %d\n",_2nd);
	}
			if (f==3)
	{
	_3rd=position;
	printf("Player 3 landed on  %d\n",_3rd);
	}
	if (f==4)
	{
	_4th=position;
	printf("Player 4 landed on %d\n",_4th);
	}

// Win the player who reach 100 first

	if (_1st==100)
	{
	printf("Player 1 wins the game\n");
	break;
	}
	if (_2nd==100)
	{
	printf("Player 2 wins the game\n");
	break;
	}
		if (_3rd==100)
	{
	printf("Player 3 wins the game\n");
	break;
	}
		if (_4th==100)
	{
	printf("Player 4 wins the game\n");
	break;
}
	seat++;
	}


	printf("Game Over... Congrulations\n");


return 0;

}
// custum function for rolling the dice
int Rolling()
{
	scanf("%c",&n);
	if (n==10)
	{
    srand(time(0));
	d1=(rand()%6)+1;
	}
	printf("The dice tuned to be : %d\n",d1);
}

// custum funtion for 6 on dice
int Dice()
{

		while("game")
	{
	if (d1!=6 && d2!=6)
	break;
	while(1)
	{
	scanf("%c",&n);
	if (n==10)
	{
	d2=(rand()%6)+1;
	break;
	}
	}
	printf("The dice tuned to be:%d\n",d2);
	d1=d1+d2;
	}
}

/* run this program in turbo c++ or 
anyother ide that supports conio.h and dos.h*/

#include <stdio.h>
#include <conio.h>
#include <dos.h>
void main()
{
	int i,j, k,l,m,n,p,q,z,s;
	for(s=0;s>=0;s++)
	{
	j=25;k=1;l=1;m=25;q=25;n=1;
	gotoxy(25,15);
	printf("press < t > to start the game");
	gotoxy(50,16);
	printf("control keys are : ");
	gotoxy(52,18) ;
	printf("a : left");
	gotoxy(52,19) ;
	printf("d : right");
	gotoxy(52,20);
	printf("s : down");
	switch(getch())
	{
	case 't': clrscr();

	gotoxy(25,1);
	printf("x");

	for(i=0;i>=0;i++)
	{
		switch(getch())
		{
			case 'a': clrscr();
			j=j-1;
			gotoxy(j,k);
			printf("x");

			if(n<75)
			{
				z=n%5;
				l=l+1;
				gotoxy(l,m);
				switch(z)
				{
				 case 0 :p=l+3;
				 printf("___^_");
		break;
		case 1 :p=l;
		printf("^____");
		break;
				case 2 :p=l+1 ;
				printf("_^___");
				break;
					case 3 :p=l+4;
					printf("____^");
		break;
	case 4 : p=l+ 2;
	printf("__^__");
		break;
				}



				n++;

			}
			else
			{

z=n%5;
	l=l-1;
				gotoxy(l,m);
					switch(z)
				{
				 case 0 : p=l+4;
				 printf("____^");
		break;
		case 1 : p=l+1;
		printf("_^___");
		break;
				case 2 :p=l+3;
				printf("___^_");
				break;
					case 3 :p=l;
					printf("^____");
		break;
	case 4 : p=l+2;
	 printf("__^__");
		break;
				}




				n++;

			if(n==149)
				{
					n=n-148;
				}
			}
			if(p==j&&q==k)
			{goto srujan;
			}
			else if((k==25)||(j==0)||(j==80)){
			goto shiva;}
					delay(100);

			break;
			case 's': clrscr();
			k=k+1;

			gotoxy(j,k);

			printf("x");

			if(n<75)
			{
				z=n%5;
				l=l+1;
				gotoxy(l,m);
					switch(z)
				{
				 case 0 :p=l+3;
				 printf("___^_");
		break;
		case 1 :p=l+1;
		printf("_^___");
		break;
				case 2 :p=l+3;
				printf("___^_");
				break;
					case 3 :p=l+2;
					printf("__^__");
		break;
	case 4 : p=l+4 ;
	printf("____^");
		break;
				}




				n++;

			}
			else
			{
z=n%5;
l=l-1;
				gotoxy(l,m);
					switch(z)
				{
				 case 0 :p=l+3;
				 printf("___^_");
		break;
		case 1 : p=l+2;
		printf("__^__");
		break;
				case 2 : p=l;
				printf("^____");
				break;
					case 3 : printf("____^");
		break;
	case 4 : p=l+1;
	printf("_^___");
		break;
				}




	n++;
if(n==149)
				{
					n=n-148;
				}


			}
			if(p==j&&q==k)
			{goto srujan;
			}
			else if((k==25)||(j==0)||(j==80)){
			goto shiva;}
			delay(100);

			break;
case 'd': clrscr();
			j=j+1;
			gotoxy(j,k);
			printf("x");

			if(n<75)
			{
				z=n%5;
				l=l+1;
				gotoxy(l,m);
			 switch(z)
				{
				 case 0 :p=l;
				 printf("^____");
		break;
		case 1 : p=l+3;
		printf("___^_");
		break;
				case 2 : p=l+1;
				printf("_^___");
				break;
					case 3 :p=l+4;
					printf("____^");
		break;
	case 4 : p=l+2;
	printf("__^__");
		break;
				}



	n++;

			}
			else
			{
z=n%5;
l=l-1;
				gotoxy(l,m);
				switch(z)
				{
				 case 0 :p=l;
				 printf("^____");
		break;
		case 1 : p=l+1;
		printf("_^___");
		break;
				case 2 :p=l+4;
				printf("____^");
				break;
					case 3 : p=l+2;
					printf("__^__");
		break;
	case 4 : p=l+3;
	printf("___^_");
		break;
				}





				n++;
				if(n==149)
				{
					n=n-148;
				}

			}
			if(p==j&&q==k)
			{goto srujan;
			}
			else if((k==25)||(j==0)||(j==80)){
			goto shiva;}
delay(100);

		}
	   }



	srujan:printf("you win");
	break;
	shiva:printf("you lose");
	

  }
  delay(2000);
  clrscr();

}
}



#include<stdio.h>
int main()
{
	long A,DA,B,DB,Y;
	int PA=0,PB=0;
	scanf("%d%d%d%d",&A,&DA,&B,&DB);
	while(A||B)
	{
		if(A%10==DA||B%10==DB) {
		if(A) PA=DA+10*PA;
		if(B) PB=DB+10*PB;
		}
		B/=10;
		A/=10;
		
	}
	Y=PA+PB;
	printf("PA=%d,PB=%d,Y=%d",PA,PB,Y);
	return 0;
} 

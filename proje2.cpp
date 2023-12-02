#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{   int age;
    char name[50];
    int bet;
    int lnumber[100];
    int balance=1000;
	printf("hello!\n");
	printf("sir, an you please tell me your name\n");
	scanf("%s",name);
	printf("thank you mr %s to enter the casino you must be 18 or above!\n",name);
	printf("please enter your age ");
	scanf("%d",&age);
	menu:
	if(age>=18)
	{   
	    int choice;
		printf("		welcome to the casino royale\n");
		printf("		[1]-info\n");
		printf("		[2]-lottery\n");
		printf("		[3]-blackjack\n");
		printf("		[4]-roulette\n");
		printf("		[5]-my status\n");
		
		
		printf("		please select a number");
		scanf("%d",&choice);
		system("cls");
		
		
		
		
		if(choice==1)
		{
			printf("\nto play games please select a number\n");
			printf("to use atm please press 9\n");
			printf("to use lottery press 2\n");
			printf("to use blackjack(21) press 3\n");
			printf("to play roulette press 4\n");
			printf("to learn your current status please press 5\n");
			goto menu;
		}
		if(choice==2)
		{
			printf("welcome to the lottery how many $ do you want to bet ");
			scanf("%d",&bet);
			printf("%d $ bet is taken",bet);
			printf("your current balance is %d\n",balance-bet);
			printf("please give program to 6 numbers between 0-59");
			srand(time(NULL));
			int randomnum1=1+rand()%60;
			int randomnum2=1+rand()%60;
			int randomnum3=1+rand()%60;
			int randomnum4=1+rand()%60;
			int randomnum5=1+rand()%60;
			int randomnum6=1+rand()%60;
			int count=0;
			int equalnum1=0;
			int equalnum2=0;
			int equalnum3=0;
			int equalnum4=0;
			int equalnum5=0;
			int equalnum6=0;
								
									
			
			for(int i=0;i<6;i++)
			{   
			  	printf("please give the number");
				scanf("%d",&lnumber[i]);
				printf("%d\n",lnumber[i]);
				
				
				 if(randomnum1==lnumber[i])
				 {
					count++;
				
			 	 }
				
					if(randomnum2==lnumber[i])
					{
						count++;
						
					}
				
					if(randomnum3==lnumber[i])
					{
				    	count++;
				    	
					}
				
					if(randomnum4==lnumber[i])
				    {
				   		count++;
				   		
				    }
				
	    		   if(randomnum5==lnumber[i])
 				   {
					 	count++;
					 	
				   }
				
					if(randomnum6==lnumber[i])
			       {
						count++;
						
				   }
				   
				   
				   }
				   printf("the lucky numbers are %d %d %d %d %d %d",randomnum1,randomnum2,randomnum3,randomnum4,randomnum5,randomnum6);
				   
				   
				   
				   
				   switch(count)
				   {
				   	case(1):printf("you guessed 1 number right ");break;
				   	case(2):printf("you guessed 2 number right ");break;
					case(3):printf("you guessed 3 number right ");break;
				   	case(4):printf("you guessed 4 number right ");break;
				   	case(5):printf("you guessed 5 number right ");break;
				   	case(6):printf("you guessed 6 number right ");break;
			
				   	
				   }
				   if(count==0)
				   {
				   	printf("sorry sir 0 number match \n");
				   }
				   if(count==1)
				   {
				   	printf("lucky sir 1 number match");
				   	balance=balance+(bet*2);
				   	printf("your new balance is %d",balance);
				   	equalnum1++;
				   }
				   if(count==2)
				   {
				   	printf("lucky sir 2 numbers match");
				   	balance=balance+(bet*4);
				   	equalnum2++;
				   }
				   if(count==3)
				   {
				   	printf("lucky sir 3 numbers match");
				   	balance=balance+(bet*8);
				   	equalnum3++;
				   }
				   if(count==4)
				   {
				   	printf("lucky sir 4 numbers match");
   					balance=balance+(bet*16);
   					equalnum4++;
				   }
				   if(count==5)
				   {
				   	printf("lucky sir 5 numbers match");
					balance=balance+(bet*32);
					equalnum5++;
				   }
				   if(count==6)
				   {
				   	printf("EXTREAMLY RARE BIG LOTTERY YOU WON %d",bet*1000);
				   	balance=balance+(bet*1000);
					printf("current balance is %d",balance);
					equalnum6++;
			}
			goto menu;
		}
		if(choice==3) // blackjack don't work properly 
		{
			printf("welcome to blackjack! \n");
			printf("blackjack is a card game based on sum of card numbers\nthe colored cards are 10 points and the ace can be either 1 point or 11 point\n");
			printf("to win the game you must past the opponent in this version the opponent is computer \n");
			printf("when you supprass 21 you will lose\n");
			printf("the dealer must pick card to 17 ");
			printf("please put your bet ");
			int bet;
			scanf("%d",&bet);
			int balance;
			balance=balance-bet;
			printf("%d $ bet placed",bet);
			printf("your current balance is %d $",balance);
			
			srand(time(NULL));
			int user1=1+rand()%11;
			int user2=1+rand()%11;
			int randomnumuser=user1+user2; //sum of the two cards of yours
			int rnumpc=1+rand()%11;
			int rnumpc2=1+rand()%11;
			int randomnumpc=rnumpc+rnumpc2;
			int randomnumpc2=1+rand()%10;
			int randomnumuser2=1+rand()%10;
			int randomnumuser3=1+rand()%10;
			int randomnumuser4=1+rand()%10;
			int balancebj2;
			
			
			
			
			 
			printf("sum of your cards is %d\n",randomnumuser);
			if(randomnumuser==21)
			{
				printf("blackjack!!!\n");
				int balance=bet*5+balance;
				printf("your current balance is %d\n",balance);
				goto menu;
			}
			if(randomnumuser>21)
			{
				printf("you lose \n");
				printf("current balance is %d",balance);
				goto menu;
			}
			if(randomnumuser<21)
			{		
					loop: 
					if(randomnumpc<17) //calculating computer's cards
				{
					randomnumpc=randomnumpc+randomnumpc2; //dealer takes a card
					goto loop;
				}
			
			printf("---------\n");
			printf("|	|\n");
			printf("|	|\n");
			printf("|  %d    |\n",user1);
			printf("|	|\n");
			printf("|	|\n");
			printf("---------\n");
			
			printf("\n");
			
			printf("---------\n");
			printf("|	|\n");
			printf("|	|\n");
			printf("|  %d    |\n",user2);
			printf("|	|\n");
			printf("|	|\n");
			printf("---------\n");
			
				printf("your number is %d\n",randomnumuser);
				
				printf("would you want a card or stay y-give card n-stay\n");
				char choice;
				char y;
				char n;
				scanf(" %c",choice);
				while(choice==y)
				{
							printf("---------\n");
							printf("|	|\n");
							printf("|	|\n");
							printf("|  %d    |\n",user1);
							printf("|	|\n");
							printf("|	|\n");
							printf("---------\n");
			
									printf("\n");
			
							printf("---------\n");
							printf("|	|\n");
							printf("|	|\n");
							printf("|  %d    |\n",user2);
							printf("|	|\n");
							printf("|	|\n");
							printf("---------\n");
							
									printf("\n");
					
							
							printf("---------\n");
							printf("|	|\n");
							printf("|	|\n");
							printf("|  %d    |\n",randomnumuser3);
							printf("|	|\n");
							printf("|	|\n");
							printf("---------\n");
							
							int	sum=randomnumuser+randomnumuser3;
							
								printf("sum of your cards is %d",sum);
								if(sum==21)
								{
									printf("blackjack!!!\n");
									int balance=balance+bet*5;
									printf("your current balance is %d\n",balance);
									goto menu;
								}
								printf("do you want another card? y-yes n-no\n");
								char choice;
								char y;
								char n;
								scanf(" %c",choice);
								if(choice==y)
								{
					
							printf("---------\n");
							printf("|	|\n");
							printf("|	|\n");
							printf("|  %d    |\n",user1);
							printf("|	|\n");
							printf("|	|\n");
							printf("---------\n");
			
									printf("\n");
			
							printf("---------\n");
							printf("|	|\n");
							printf("|	|\n");
							printf("|  %d    |\n",user2);
							printf("|	|\n");
							printf("|	|\n");
							printf("---------\n");
							
									printf("\n");
					
							
							printf("---------\n");
							printf("|	|\n");
							printf("|	|\n");
							printf("|  %d    |\n",randomnumuser3);
							printf("|	|\n");
							printf("|	|\n");
							printf("---------\n");	
							
								printf("your new card is\n"); //new card
								
							printf("---------\n");
							printf("|	|\n");
							printf("|	|\n");
							printf("|  %d    |\n",randomnumuser4);
							printf("|	|\n");
							printf("|	|\n");
							printf("---------\n");
							
							int sum=sum+randomnumuser4;
							
								}
								
								if(choice==n)
								{
									printf("your sum is %d",sum);
									
									if(sum>21)
									{
										printf("you lose\n");
										printf("current balance is %d",balance);
										goto menu;
									}
									if(sum==21)
									{
										printf("blackjack!!!\n");
										int balance=bet*5+balance;
										printf("your current balance is %d\n",balance);
										goto menu;	
									}
									if(sum<21)
									{
										printf("the dealers cards");
										
											printf("---------\n");
											printf("|	|\n");
											printf("|	|\n");
											printf("|  %d    |\n",rnumpc);
											printf("|	|\n");
											printf("|	|\n");
											printf("---------\n");
											
												printf("---------\n");
												printf("|	|\n");
												printf("|	|\n");
												printf("|  %d    |\n",rnumpc2);
												printf("|	|\n");
												printf("|	|\n");
												printf("---------\n");
												
												
												while(randomnumpc<17)
												{
														printf("---------\n");
														printf("|	|\n");
														printf("|	|\n");
														printf("|  %d    |\n",randomnumpc2);
														printf("|	|\n");
														printf("|	|\n");
														printf("---------\n");
																break;
												}
										
										
										printf("the sum of dealer is %d\n",randomnumpc);
										if(randomnumpc>21 && sum<21)
										{
											printf("you won\n");
											int balance=bet*2+balance;
											printf("your current balance is %d\n",balance);
											goto menu;
										}
										if(sum>21 && randomnumpc<=21)
										{
											printf("you lose");
											printf("current balance is %d",balance);
											goto menu;
										}
										if(sum>21 && randomnumpc>21)
										{
											printf("neither user or computer wins\n");
											printf("you got your money back\n");
											printf("your current balance is %d",balance);
											goto menu;
										}
										if(randomnumpc==21 && sum==21)
										{
											printf("neither user or computer wins\n");
											printf("you got your money back\n");
											printf("your current balance is %d",balance);
											goto menu;	
										}
										if(sum<21 && randomnumpc<21)
										{
											printf("you are both under 21\n");
											printf("the dealer's sum is %d",randomnumpc);
											printf("your sum is %d",sum);
											
											if(sum>randomnumpc)
											{
												printf("you won\n");
												balance=balance+bet*2;
												printf("your current balance is %d\n",balance);
												goto menu;
											}
											if(sum<randomnumpc)
											{
												printf("you lose\n");
												printf("your current balance is %d",balance);
												goto menu;
											}
											if(sum==randomnumpc)
											{
												printf("neither user or computer wins\n");
												printf("you got your money back\n");
												balance;
												balance=bet+balance;
												printf("your current balance is %d\n",balance);
												goto menu;
											}
											
											goto menu;
										}
										
										
									}
								}
					
						
						goto menu;
					}
								
					
				}
				int choice;
				char n;
				if(choice==n)
				{	
					int sum;
					printf("the dealers sum is %d",randomnumpc);
					if(randomnumpc>21 && sum<=21)
					{
						printf("you won\n");
						balance=bet*2+balance;
						printf("your current balance is %d\n",balance);
					}
					if(randomnumpc>21 && sum>21)
					{
						printf("neither user or computer wins\n");
						printf("you got your money back\n");
						int balancebj;
						balancebj=bet+balance;
						printf("your current balance is %d $\n",balancebj);
						
					}
					if(randomnumpc<21 && sum>21)
					{
						printf("you lose \n");
					}
				}
				goto menu;
			
			
			
			
		}
		if (choice==5)
		{	
			int equalnum1;
			int equalnum2;
			int equalnum3;
			int equalnum4;
			int equalnum5;
			int equalnum6;
			printf("	my status\n");
			printf("your name=%s\nyour age is=%d",name,age);
			printf("in lottery:\n");
			printf("you guessed 1 number %d times\n",equalnum1);
			printf("you guessed 2 number %d times\n",equalnum2);
			printf("you guessed 3 number %d times\n",equalnum3);
			printf("you guessed 4 number %d times\n",equalnum4);
			printf("you guessed 5 number %d times\n",equalnum5);
			printf("you guessed 6 number %d times\n",equalnum6);
			
		}
		goto menu;
			
		
		
	}
	else if(age<18)
	printf("sorry mr %s, your can't go inside casino royale",name);
	
	system("pause");
}

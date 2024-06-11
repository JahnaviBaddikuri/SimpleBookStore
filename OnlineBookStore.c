#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[20];
	int choice, totalcost=0,a=0;
	char quit;
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Please enter your name:\n");
	scanf("%s",&str);
	printf("=========================================================");
	printf("\nHELLO! %s, WELCOME TO BOOK-BASKET\n",str);
	printf("=========================================================");
	printf("\n Shop By Genre.\n");
	do
	{
		printf("\n 1 - Literature & Fiction\n");
		printf("\n 2 -Crime,Thriller & Mystery\n");
		printf("\n 3 - Self Help & Personality\n");
		printf("\n 4 - Bussiness & Economics\n");
		printf("\nEnter any other number to quit\n");
		printf("\n Enter The Genre You Would Like To Buy......\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			printf("\n 1-\"Harry Potter And The Chamber Of Secrets\"-Rs.300");
			printf("\n 2-\"War Of Lanka\"-Rs.258");
			printf("\n 3-\"The Book Theif\"- Rs.358");
			printf("\n 4-\"The Adventures Of Sherlock Holmes\"-Rs.380");
			printf("\n\n 0-TO GO BACK TO MAIN MENU....!\n");
			scanf("%d",&choice);
			 if(choice==1)
			 {
			 printf("\nYou have chosen \"Harry Potter And The Chamber Of Secrets\" book of Rs.300");
			 while(choice==1)
				{
				 
				 printf("\nEnter the quantity you want to purchase:");
				 scanf("%d",&a);
				 totalcost=(300*a)+totalcost;
				 printf("The total cost of these books is %d",totalcost);
				 	break;
				}
			 }
			else if(choice==2)
			{
			printf("\nYou have chosen \"War Of Lanka\"  book of Rs.258");
			  while(choice==2)
				{
				  
				 printf("\nEnter the quantity you want to purchase:");
				 scanf("%d",&a);
				 totalcost=(258*a)+totalcost;
				 printf("The total cost of these books is %d",totalcost);
				 	break;
				}
			}
			else if(choice==3)
			{
			printf("\nYou have chosen \"The Book Theif\"  book of Rs.358");
			  while(choice==3)
				{
				 
				 printf("\nEnter the quantity you want to purchase:");
				 scanf("%d",&a);
				 totalcost=(358*a)+totalcost;
				 printf("The total cost of these books is %d",totalcost);
				 	break;
				}
			}
			else if(choice==4)
			{
			printf("\nYou have chosen \"The Adventures Of Sherlock Holmes\" book of Rs.380");
			  while(choice==4)
				{
				 
				 printf("\nEnter the quantity you want to purchase:");
				 scanf("%d",&a);
				 totalcost=(380*a)+totalcost;
				 printf("The total cost of these books is %d",totalcost);
				 	break;
				}
			}
			else if(choice==0)
			{
			break;
			}
			else
			{
			printf("\n Please chose a valid number....!");
			}
			break ;
			case 2:
			printf("\n 1-\"And Then There Were None\"-Rs.355");
			printf("\n 2-\"Dark Matter\"-Rs.225");
			printf("\n 3-\"Murder On The Orient Express\"-Rs.380");
			printf("\n 4-\"The Da Vinci Code\"-Rs.265");
			printf("\n\n 0-To go back to main menu....!\n");
			scanf("%d",&choice);
			 if(choice==1)
			 {
			 printf("\nYou have chosen \"And Then There Were None\" book of Rs.355");
			   while(choice==1)
				{
				 
				 printf("\nEnter the quantity you want to purchase:");
				 scanf("%d",&a);
				 totalcost=(355*a)+totalcost;
				 printf("The total cost of these books is %d",totalcost);
				 	break;
				}
			}
			else if(choice==2)
			{
			printf("\nYou have chosen \"Dark Matter\" book of Rs.225");
			  while(choice==2)
				{
				
				 printf("\nEnter the quantity you want to purchase:");
				 scanf("%d",&a);
				 totalcost=(255*a)+totalcost;
				 printf("The total cost of these books is %d",totalcost);
				 	break;
				}
			}
			else if(choice==3)
			{
			printf("\nYou have chosen \"Murder On The Orient Express\" book of Rs.380");
			  while(choice==3)
				{
				
				 printf("\nEnter the quantity you want to purchase:");
				 scanf("%d",&a);
				 totalcost=(380*a)+totalcost;
				 printf("The total cost of these books is %d",totalcost);
				 	break;
				}
			}
			else if(choice==4)
			{
			printf("\nYou have chosen \"The Da Vinci Code\" book of Rs.265");
			  while(choice==4)
				{
				 
				 printf("\nEnter the quantity you want to purchase:");
				 scanf("%d",&a);
				 totalcost=(265*a)+totalcost;
				 printf("The total cost of these books is %d",totalcost);
				 	break;
				}
			}
			else if(choice==0)
			{
			break;
			}
			else
			{
			printf("\n Please chose a valid number....!");
			}
			break ;
			case 3:
			printf("\n 1-\"Power Of Subconscious Mind\"-Rs.150");
			printf("\n 2-\"Think Like A Monk\"-Rs.200");
			printf("\n 3-\"Start With Why\"-Rs.110");
			printf("\n 4-\"The Magic\"-Rs.128");
			printf("\n\n 0-To go back to main menu....!\n");
			scanf("%d",&choice);
			 if(choice==1)
			 {
			 printf("\nYou have chosen \"Power Of Subconscious Mind\" book of Rs.150");
			   while(choice==1)
				{
				
				 printf("\nEnter the quantity you want to purchase:");
				 scanf("%d",&a);
				 totalcost=(150*a)+totalcost;
				 printf("The total cost of these books is %d",totalcost);
				 	break;
				}
			}
			else if(choice==2)
			{
			printf("\nYou have chosen \"Think Like A Monk\" book of Rs.200");
			  while(choice==2)
				{
				 
				 printf("\nEnter the quantity you want to purchase:");
				 scanf("%d",&a);
				 totalcost=(200*a)+totalcost;
				 printf("The total cost of these books is %d",totalcost);
				 	break;
				}
			}
			else if(choice==3)
			{
			printf("\nYou have chosen \"Start With Why\" book of Rs.110");
			  while(choice==3)
				{
				
				 printf("\nEnter the quantity you want to purchase:");
				 scanf("%d",&a);
				 totalcost=(110*a)+totalcost;
				 printf("The total cost of these books is %d",totalcost);
				 	break;
				}
			}
			else if(choice==4)
			{
			printf("\nYou have chosen \"The Magic\" book of Rs.128");
			  while(choice==4)
				{
			
				 printf("\nEnter the quantity you want to purchase:");
				 scanf("%d",&a);
				 totalcost=(128*a)+totalcost;
				 printf("The total cost of these books is %d",totalcost);
				 	break;
				}
			}
			else if(choice==0)
			{
			break;
			}
			else
			{
			printf("\n Please chose a valid number....!");
			}
			break ;
			case 4:
			printf("\n 1-\"The Intelligent Invester\"-Rs.200");
			printf("\n 2-\"Think And Grow Rich\"-Rs.165");
			printf("\n 3-\"Just Keep Buying\"-Rs.180");
			printf("\n 4-\"Never Split The Difference\"-Rs.155");
			printf("\n\n 0-To go back to main menu....!\n");
			scanf("%d",&choice);
			 if(choice==1)
			 {
			 printf("\nYou have chosen \"The Intelligent Invester\" book of Rs.200");
			   while(choice==1)
				{
				 
				 printf("\nEnter the quantity you want to purchase:");
				 scanf("%d",&a);
				 totalcost=(200*a)+totalcost;
				 printf("The total cost of these books is %d",totalcost);
				 	break;
				}
			}
			else if(choice==2)
			{
			printf("\nYou have chosen \"Think And Grow Rich\" book of Rs.165");
			 	while(choice==2)
				{
				
				 printf("\nEnter the quantity you want to purchase:");
				 scanf("%d",&a);
				 totalcost=(165*a)+totalcost;
				 printf("The total cost of these books is %d",totalcost);
				 	break;
				}
			}
			else if(choice==3)
			{
			printf("\nYou have chosen \"Just Keep Buying\" book of Rs.180");
			  while(choice==3)
				{
				
				 printf("\nEnter the quantity you want to purchase:");
				 scanf("%d",&a);
				 totalcost=(180*a)+totalcost;
				 printf("The total cost of these books is %d",totalcost);
				 	break;
				}
			}
			else if(choice==4)
			{
			printf("\nYou have chosen \"Never Split The Difference\" book of Rs.155");
			  while(choice==4)
				{
				
				 printf("\nEnter the quantity you want to purchase:");
				 scanf("%d",&a);
				 totalcost=(155*a)+totalcost;
				 printf("The total cost of these books is %d",totalcost);
				 	break;
				}
			}
		 	else if(choice==0)
			{
			break;
			}
			else
			{
			printf("\n Please chose a valid number....!");
			}
			break ;
			default:
			printf("\n Thank You For Visting Book-Basket.\n\t Bye Bye......!");
			 exit(0);
		}
		printf("\n\n****Do you want to continue? Y- YES / N- NO\n");
		scanf(" %c",&quit);
	}while(quit=='y'||quit=='Y');
	printf("\nThe Total cost of your purchase is = Rs.%d\n",totalcost);
	printf("\n.....THANK YOU FOR VISITING BOOK-BASKET.....\n");
	return 0;
}

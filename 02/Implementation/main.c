 #include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include<time.h>

void chat();
void mainmenu();
void exit();

COORD coord = {0,0};

void gotoxy(int x,int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int num;
float price;
float total;
char choice;
int again;

void main()
{
	mainmenu();
}

void mainmenu()
{
	char choice = ' ' ;
  printf("\n\t\t\t        +      +      WELCOME TO MINI FOOD POINT 	+      +");
  printf("\n\n\n\n\n");
  printf("\n\t\t\t\t\t\t\t FOOD MENU\n\t\t\t\t\t ______________________________________________");
  printf("\n\t\t\t\t\t| [1] CHAT MENU                                |");
  printf("\n\t\t\t\t\t| _____________________________________________|");
  printf("\n\t\t\t\t\t| [0] EXIT                                     |\n\t\t\t\t\t|______________________________________________| \n\t\t\t\t\t\t\t\t");
  printf("\n\t\t\t\t\t       *************************************\n");
  printf("\n\t\t\t\t\t");
  time_t t;   // not a primitive datatype
  time(&t);
  printf("\t %s", ctime(&t));
  printf("\n\t\t\t\t\t       *************************************\n");
  printf("\n\n\n\t\t\t\t\tPlease select your chat choice: ");
  scanf("%c", &choice);
  system("cls");

    {
		if (toupper(choice) == '1')
              chat();
        else if (toupper(choice) == '0')
              exit(0);
        else if (toupper(choice) != '1', '0')
            {
               mainmenu();
            }
	}
}
void chat() /// chat Menu Screen
{
  int choice;
  int quantity;
  int again;
  printf("\t                        CHAT MENU   \n");
  printf("\t   [1] Pani Puri	  - Rs50 \n");
  printf("\t   [2] Bhel Puri          - Rs60 \n");
  printf("\t   [3] Veg Toast          - Rs50 \n");
  printf("\t   [4] Pav Bhaji          - Rs75 \n");
  printf("\t   [5] Sandwich  	  - Rs75 \n");
  printf("\t   [6] Suggestions                     \n");
  printf("\t   [7] Back To Main-Menu               \n");
  printf("\n \t   Enter your choice here : ");
  scanf("%d", &choice);
  {
      if (choice == 1)
	   {
	      printf("Enter Quantity : ");
	      scanf("%d", &quantity);
	      total = 50 * quantity ;
	      printf("===================================          ");
          printf("\nYour total bill amount is Rs%.2f,\nPayment: CASH\n", total);
          printf("====================================          \n");
	        {
		       printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
               scanf("%d", &again);
		       system("cls");
		       if (again == 1 )
			      chat();
               else if (again == 2 )
				  mainmenu();
		       else if (again != 1 , 2)
               {
			      printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
			      exit(0);
			   }
       }
}
	else if ( choice == 2)
       {
		  printf("Enter Quantity : ");
		  scanf("%d", &quantity);
		  total = 60 * quantity ;
		  printf("===================================          ");
          printf("\nYour total bill amount is Rs%.2f,\nPayment: CASH\n", total);
          printf("====================================          \n");
		  {
		    printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
		    scanf("%d", &again);
		    system("cls");
		    if (again == 1 )
			   chat();
		    else if (again == 2 )
				mainmenu();
		    else if (again != 1 , 2)
			{
			   printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
			   exit(0);
			}
		  }
       }
    else if ( choice == 3 )
        {
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 60 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					chat();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 4 )
        {
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 75 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					chat();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 5 )
        {
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 75 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					chat();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
        else if ( choice == 6 )
       {
           FILE *fp, *ft;
            char another, choice;

            struct emp
             {
               char name[40];
               int pri;
             };
    struct emp e; // structure variable creation
    char empname[40]; // string to store name of the chat
    long int recsize; // size of each record of chat
    fp = fopen("FOS.DAT","rb+");
    if(fp == NULL)
    {
        fp = fopen("FOS.DAT","wb+");
        if(fp == NULL)
        {
            printf("Cannot open file");
            exit(1);
        }
    }
    // size of each record i.e. size of structure variable e
    recsize = sizeof(e);

    while(1)
    {
        system("cls"); //clear the console window
        gotoxy(30,10); // move the cursor to position 30, 10 from top-left corner
        printf("1. Add Food");
        gotoxy(30,12);
        printf("2. Display Food");
        gotoxy(30,14);
        printf("3. Delete Food");
        gotoxy(30,16);
        printf("4. Back To Main-Menu");
        gotoxy(30,18);
        printf("Your Choice: ");
        fflush(stdin); // flush the input buffer
        choice  = getche();
        switch(choice)
        {
        case '1':
            system("cls");
            fseek(fp,0,SEEK_END); // search the file and move cursor to end of the file
            // here 0 indicates moving 0 distance from the end of the file

            another = 'y';
            while(another == 'y')
            {
                printf("\nEnter Item Name: ");
                scanf("%s",e.name);
                printf("\nEnter Price: ");
                scanf("%d", &e.pri);
                fwrite(&e,recsize,1,fp); // write the record in the file
                printf("\nAdd another record(y/n) ");
                fflush(stdin);
                another = getche();
            }
            break;
        case '2':
            system("cls");
            rewind(fp); //this moves file cursor to start of the file
            while(fread(&e,recsize,1,fp)==1)  // read the file and fetch the record one record per fetch
            {
                printf("\nItem is %s",e.name);
                printf("\nPrice is: %d",e.pri);
            }
            getch();
            break;
        case '3':
            system("cls");
            another = 'y';
            while(another == 'y')
            {
                printf("\nEnter name of Food to delete: ");
                scanf("%s",empname);
                ft = fopen("Temp.dat","wb");  // create a inteRs.ediate file for temporary storage
                rewind(fp); // move record to starting of file
                while(fread(&e,recsize,1,fp) == 1)  // read all records from file
                {
                    if(strcmp(e.name,empname) != 0)  // if the entered record match
                    {
                        fwrite(&e,recsize,1,ft); // move all records except the one that is to be deleted to temp file
                    }
                }
                fclose(fp);
                fclose(ft);
                remove("FOS.DAT"); // remove the original file
                rename("Temp.dat","FOS.DAT"); // rename the temp file to original file name
                fp = fopen("FOS.DAT", "rb+");
                printf("Delete another record(y/n)");
                fflush(stdin);
                another = getche();
            }
            break;
        case '4':
            fclose(fp);// close the file
            system("cls");
            chat();
        }
    }

       }
     else if ( choice == 7 )
        {
            mainmenu();
        }
     else if (choice != 1,2,3,4,5,6,7,8)
            {
                system("cls");
                printf("\n\n\t\t   Invalid Choice Entered\n\n");
                chat();

            }
  }

}

void exit(back)  /// Exit Screen
{
  printf("\n\n\t   =================================          ");
  printf("   \n           :-)Thanks for choosing our stall!\n\n");
  printf("           :-)Have a good day. Visit Again!  \n");
  printf("\t   ==================================  \n");
  getch();
  exit(0);
}


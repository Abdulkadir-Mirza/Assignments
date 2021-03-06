//Abdulkadir Mirza S1_T2
#include<stdio.h>
#include<string.h>

//Count total number of books in the library
int count();

void display(int);

//If the author name is same so the function strcmp returns a zero
void giv_author(char*);

//Adding book
void adbuk();

//Appears the title of the specified book
void which1(int);

//Displays all the books serially accession number
void allbuk();

//Structure
struct library
{
        int an;//Accession number
        char title[50];
        char author[30];
        int price;
        int flag;//flag = 0 : Issued and,flag =  1: not issued

}libarr[50] = {

        1, "Let Us C", "Yashavant Kanethkar", 258, 1,

        2, "Data Structure Through C", "Yashavant Kanethkar", 300, 1,

        3, "Let Us C++", "Yashavant Kanethkar", 220, 1,

        4, "Harry Potter : The Philosopher's Stone", "J. K. Rowling", 550, 0,

        5, "The Two Towers", "J. R. R. Tolkien", 560, 0,

        6, "The Hobbit", "J. R. R. Tolkien", 550, 1,

        7, "The Fellowship of the Ring", "J. R. R. Tolkien", 550, 0

};

 

 
//MAIN
int main()
{
        int ans = 1, an;
        char auth[30];
        while (ans != 7)
        {
               printf("\nYou are in menu section\n");
               printf("\n1. Add Book Information");
               printf("\n2. Display Book Information");
               printf("\n3. List all books of given author");
               printf("\n4. List the title of specified book");
               printf("\n5. List the counts of the books in library");
               printf("\n6. List the books in order of accession number");
               printf("\n7. Exit");
               printf("\n\n\t\tEnter you choice : ");
               scanf("%d", &ans);

               switch (ans)
               {
               case 1:
                       adbuk();
                       break;

               case 2:
                       printf("\nEnter the accession number of the book : ");
                       scanf("%d", &an);
                       display(an);
                       break;

               case 3:
                       while (getchar() != '\n');
                       printf("Enter the name of the author (case sensitive) : ");
		       scanf("%s",auth);
                       giv_author(auth);
                       break;

               case 4:
                       printf("\nEnter the accession number of book : ");
                       scanf("%d", &an);
                       which1(an);
                       break;

               case 5:
                       printf("\nTotal Number of books : %d", count());
                       break;

               case 6:
                       allbuk();
                       break;

               case 7:
                       return 0;

               default:
                       printf("\nWrong choice, Try Again!!");
               }
        }
        return 0;
}

 
//Count books
int count()
{
        int i = 0;
        while (libarr[i].an)
               i++;
        return i;
}

 
//Display
void display(int i)
{
        i--;//To use i as index
        printf("\n\n\n");
        printf("\nAccession Number : %d", libarr[i].an);
        printf("\nTitle : %s", libarr[i].title);
        printf("\nAuthor : %s", libarr[i].author);
        printf("\nPrice : %d", libarr[i].price);
        if (libarr[i].flag)//Flag : 0
               printf("\nStatus : Issued");
        else
               printf("\nStatus : Available");//Flag : 1
}

 
//Display Books of Given author
void giv_author(char *author)
{
        int i = 0;
        printf("\nBooks of \"%s\" are following : \n\n", author);
        while (libarr[i].an)
        {

               if (!(strcmp(author, libarr[i].author)))
                       display(libarr[i].an);
               i++;
        }

}

 
//Add Book
void adbuk()
{
        int next = count();
        libarr[next].an = next + 1;
 
        //fflush(stdin) or while(getch() != '\n'); to clear the buffer
        while (getchar() != '\n');
        printf("\nEnter the title of the book : ");
        scanf("%s",libarr[next].title);
        printf("\nEnter the author name of the book : ");
        scanf("%s",libarr[next].author);
        printf("\nEnter the price of the book : ");
        scanf("%d", &libarr[next].price);
        libarr[next].flag = 1;

}

 
void which1(int x)
{
        int i = 0;
        while (libarr[i].an)
        {

               if (libarr[i].an == x)
               {
                       printf("\n\nTitle of the book : %s\n", libarr[i].title);
                       return;
               }
		i++;
        }
        printf("No any book found found\n");
}

 

void allbuk()
{
        int i = 0;
        while (libarr[i].an)
        {
               display(i + 1);
               i++;
        }

}

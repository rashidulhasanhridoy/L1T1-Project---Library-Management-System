#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int i, ncse, nswe, nete, neee, ncivil, cn, sn, dn, in, rn;
char CSE[20][30];
char SWE[20][30];
char ETE[20][30];
char EEE[20][30];
char Civil[20][30];
char Book[50];
void LMS();
void Display();
void LibraryPolicy();
int AdminIn();
int UserIn();
void AddBook();
void ViewList();
void FullList();
void Search();
void DeleteBooks();
void IssueBook();
void Breturn();
int main()
{
    int option, flag = 0, admin, user;
    char a;
    LMS();
    Display();
    while(1)
    {
        scanf("%d", &option);
        switch(option)
        {
        case 0:
        LMS();
        flag = 1;
        printf("Press any key for exit.\n");
        printf("Thanks\n");
        break;

        case 1:
        LMS();
        printf("Issue Book(s)\n");
        user = UserIn();
        if(user == 8596)
        {
            printf("\nSuccessfully logged in.\n");
            IssueBook();
            Display();
        }
        else
        {
            printf("Try Again!\n");
            flag = 1;
            printf("Press any key for exit.\n");
            printf("Thanks\n");
        }
        break;

        case 2:
        LMS();
        printf("Return Book(s)\n");
        user = UserIn();
        if(user == 8596)
        {
            printf("\nSuccessfully logged in.\n");
            Breturn();
            Display();
        }
        else
        {
            printf("Try Again!\n");
            flag = 1;
            printf("Press any key for exit.\n");
            printf("Thanks\n");
        }
        break;

        case 3:
        LMS();
        printf("Search Book(s)\n");
        user = UserIn();
        if(user == 8596)
        {
           printf("\nSuccessfully logged in.\n");
           Search();
           Display();
        }
        else
        {
            printf("Try Again!\n");
            flag = 1;
            printf("Press any key for exit.\n");
            printf("Thanks\n");
        }
        break;

        case 4:
        LMS();
        printf("View Books List by category\n");
        user = UserIn();
        if(user == 171158596 || 8596)
        {
            printf("\nSuccessfully logged in.\n");
            ViewList();
            Display();
        }
        else
        {
            printf("Try Again!\n");
            flag = 1;
            printf("Press any key for exit.\n");
            printf("Thanks\n");
        }
        break;


        case 5:
        printf("View Full Books List.\n");
        LMS();
        printf("View Books List by category\n");
        user = UserIn();
        if(user == 171158596 || 8596)
        {
            printf("\nSuccessfully logged in.\n");
            FullList();
            Display();
        }
        else
        {
            printf("Try Again!\n");
            flag = 1;
            printf("Press any key for exit.\n");
            printf("Thanks\n");
        }
        break;

        case 6:
        LMS();
        LibraryPolicy();
        Display();
        break;

        case 7:
        LMS();
        printf("Add Book(s)\n");
        printf("This option is only for library authority.\n");
        admin = AdminIn();
        if(admin == 171158596)
        {
            printf("\nSuccessfully logged in.\n");
            AddBook();
            Display();
        }
        else
        {
            printf("Try Again!\n");
            flag = 1;
            printf("Press any key for exit.\n");
            printf("Thanks\n");
        }
        break;

        case 8:
        LMS();
        printf("Delete Book(s)\n");
        printf("This option is only for library authority.\n");
        admin = AdminIn();
        if(admin == 171158596)
        {
            printf("\nSuccessfully logged in.\n");
            DeleteBooks();
            Display();
        }
        else
        {
            printf("Try Again!\n");
            flag = 1;
            printf("Press any key for exit.\n");
            printf("Thanks\n");
        }
        break;

        default:
        printf("Wrong Input\n");
        break;
        }

        if(flag == 1)
            break;
    }
    return 0;
}



void LMS()
{
    printf("\nLibrary Management System\n");
}


void Display()
{
    printf("\nThanks for be with us.\n");
    printf("\nPlease select an option.\n");
    printf(" 1. Issue Book(s).\n");
    printf(" 2. Return Book(s).\n");
    printf(" 3. Search Book(s).\n");
    printf(" 4. View Books List by Category.\n");
    printf(" 5. View Full Books List.\n");
    printf(" 6. Library Policy.\n");
    printf(" 7. Add Book(s).\n");
    printf(" 8. Delete Book(s).\n");
    printf(" 0. Exit.\n");
}


int AdminIn()
{
    char AdminName[70];
    int AdminPass;
    printf("Enter Your Name:\n");
    scanf("%s", &AdminName);
    printf("%s, enter Your Password:\n", AdminName);
    scanf("%d", &AdminPass);

    return AdminPass;
}


int UserIn()
{
    char UserName[70];
    int UserPass;
    printf("Enter Your Name:\n");
    scanf("%s", &UserName);
    printf("%s , enter Your Password:\n", UserName);
    scanf("%d", &UserPass);

    return UserPass;
}


void LibraryPolicy()
{
    printf("\n\nThe following are NOT allowed in Library:\n");
    printf("1. Making unreasonable noise, including loud talking on a cell phone or otherwise.\n");
    printf("2. Using obscene or abusive language or gestures.\n");
    printf("3. Having a knife, gun, or any other weapon.\n");
    printf("4. Smoking.\n");
    printf("5. Eating or drinking except in designated areas.\n");
    printf("6. Selling any goods or services.\n");
}


void AddBook()
{
    printf("Select a category:\n");
    printf("1.CSE\n2.SWE\n3.ETE\n4.EEE\n5.Civil\n");
    scanf("%d", &cn);
    if(cn == 1)
    {
        printf("How many book(s) you want to store:\n");
        scanf("%d", &ncse);
        printf("Enter Book names:\n");
    for(i = 0; i < ncse + 1; i++)
        gets(CSE[i]);

    }

    else if(cn == 2)
    {
        printf("How many book(s) you want to store:\n");
        scanf("%d", &nswe);
        printf("Enter Book names:\n");
    for(i = 0; i < nswe + 1; i++)
        gets(SWE[i]);
    }

    else if(cn == 3)
    {
        printf("How many book(s) you want to store:\n");
        scanf("%d", &nete);
        printf("Enter Book names:\n");
    for(i = 0; i < nete + 1; i++)
        gets(ETE[i]);
    }

    else if(cn == 4)
    {
        printf("How many book(s) you want to store:\n");
        scanf("%d", &neee);
        printf("Enter Book names:\n");
    for(i = 0; i < neee + 1; i++)
        gets(EEE[i]);
    }

    else if(cn == 5)
    {
        printf("How many book(s) you want to store:\n");
        scanf("%d", &ncivil);
        printf("Enter Book names:\n");
    for(i = 0; i < ncivil + 1; i++)
        gets(Civil[i]);
    }
}


void ViewList()
{
    printf("Select a category:\n");
    printf("1.CSE\n2.SWE\n3.ETE\n4.EEE\n5.Civil\n");
    scanf("%d", &cn);
    if(cn == 1)
    {
    printf("Stored Books are:\n");
    for(i = 0; i < ncse + 1; i++)
        puts(CSE[i]);
    }

    else if(cn == 2)
    {
    printf("Stored Books are:\n");
    for(i = 0; i < nswe + 1; i++)
        puts(SWE[i]);
    }

    else if(cn == 3)
    {
    printf("Stored Books are:\n");
    for(i = 0; i < nete + 1; i++)
        puts(ETE[i]);
    }

    else if(cn == 4)
    {
    printf("Stored Books are:\n");
    for(i = 0; i < neee + 1; i++)
        puts(EEE[i]);
    }

    else if(cn == 5)
    {
    printf("Stored Books are:\n");
    for(i = 0; i < ncivil + 1; i++)
        puts(Civil[i]);
    }
}

void FullList()
{
    printf("Stored Books are:\n");
    for(i = 0; i < ncse + 1; i++)
        puts(CSE[i]);
    for(i = 0; i < nswe + 1; i++)
        puts(SWE[i]);
    for(i = 0; i < neee + 1; i++)
        puts(EEE[i]);
    for(i = 0; i < nete + 1; i++)
        puts(ETE[i]);
    for(i = 0; i < ncivil + 1; i++)
        puts(Civil[i]);
}

void Search()
{
    int sr = 0;
    printf("Select a category:\n");
    printf("1.CSE\n2.SWE\n3.ETE\n4.EEE\n5.Civil\n");
    scanf("%d", &sn);
    if(sn == 1)
    {
    printf("Enter the book name, yow want to search:\n");
    scanf("%s", &Book);
    for(i = 0; i < ncse + 1; i++)
    {
    if(strcmp(Book,CSE[i]) == 0)
    {
      sr = sr + 1;
    }
    }
    if(sr != 0)
    {
        printf("Book found in CSE category.\n");
    }
    else
    {
        printf("Not found.\n");
    }
    }

    else if(sn == 2)
    {
    printf("Enter the book name, yow want to search:\n");
    scanf("%s", &Book);
    for(i = 0; i < nswe + 1; i++)
    {
    if(strcmp(Book,SWE[i]) == 0)
    {
      sr = sr + 1;
    }
    }
    if(sr != 0)
    {
        printf("Book found in SWE category.\n");
    }
    else
    {
        printf("Not found.\n");
    }
    }

    else if(sn == 3)
    {
    printf("Enter the book name, yow want to search:\n");
    scanf("%s", &Book);
    for(i = 0; i < nete + 1; i++)
    {
    if(strcmp(Book,ETE[i]) == 0)
    {
        sr = sr + 1;
    }
    }
    if(sr != 0)
    {
        printf("Book found in ETE category.\n");
    }
    else
    {
        printf("Not found.\n");
    }
    }

    else if(sn == 4)
    {
    printf("Enter the book name, yow want to search:\n");
    scanf("%s", &Book);
    for(i = 0; i < neee + 1; i++)
    {
    if(strcmp(Book,EEE[i]) == 0)
    {
        sr = sr + 1;
    }
    }
    if(sr != 0)
    {
        printf("Book found in EEE category.\n");
    }
    else
    {
        printf("Not found.\n");
    }
    }

    else if(sn == 5)
    {
    printf("Enter the book name, yow want to search:\n");
    scanf("%s", &Book);
    for(i = 0; i < ncivil + 1; i++)
    {
    if(strcmp(Book,Civil[i]) == 0)
    {
         sr = sr + 1;
    }
    }
    if(sr != 0)
    {
        printf("Book found in Civil category.\n");
    }
    else
    {
        printf("Not found.\n");
    }
    }
}

void DeleteBooks()
{
    int dr = 0;
    printf("Select a category:\n");
    printf("1.CSE\n2.SWE\n3.ETE\n4.EEE\n5.Civil\n");
    scanf("%d", &dn);
    if(dn == 1)
    {
    printf("Enter the book name, yow want to delete:\n");
    scanf("%s", &Book);
    for(i = 0; i < ncse + 1; i++)
    {
    if(strcmp(Book,CSE[i]) == 0)
    {
      dr = dr + 1;
    }
    }
    if(dr != 0)
    {
        printf("Book found in CSE category and deleted.\n");
    }
    else
    {
        printf("Not found.\n");
    }
    }

    else if(dn == 2)
    {
    printf("Enter the book name, yow want to delete:\n");
    scanf("%s", &Book);
    for(i = 0; i < nswe + 1; i++)
    {
    if(strcmp(Book,SWE[i]) == 0)
    {
      dr = dr + 1;
    }
    }
    if(dr != 0)
    {
        printf("Book found in SWE category and deleted.\n");
    }
    else
    {
        printf("Not found.\n");
    }
    }

    else if(dn == 3)
    {
    printf("Enter the book name, yow want to delete:\n");
    scanf("%s", &Book);
    for(i = 0; i < nete + 1; i++)
    {
    if(strcmp(Book,ETE[i]) == 0)
    {
        dr = dr + 1;
    }
    }
    if(dr != 0)
    {
        printf("Book found in ETE category and deleted.\n");
    }
    else
    {
        printf("Not found.\n");
    }
    }

    else if(dn == 4)
    {
    printf("Enter the book name, yow want to delete:\n");
    scanf("%s", &Book);
    for(i = 0; i < neee + 1; i++)
    {
    if(strcmp(Book,EEE[i]) == 0)
    {
        dr = dr + 1;
    }
    }
    if(dr != 0)
    {
        printf("Book found in EEE category and deleted.\n");
    }
    else
    {
        printf("Not found.\n");
    }
    }

    else if(dn == 5)
    {
    printf("Enter the book name, yow want to delete:\n");
    scanf("%s", &Book);
    for(i = 0; i < ncivil + 1; i++)
    {
    if(strcmp(Book,Civil[i]) == 0)
    {
         dr = dr + 1;
    }
    }
    if(dr != 0)
    {
        printf("Book found in Civil category and deleted.\n");
    }
    else
    {
        printf("Not found.\n");
    }
    }
}

void IssueBook()
{
    int ir = 0;
    printf("Select a category:\n");
    printf("1.CSE\n2.SWE\n3.ETE\n4.EEE\n5.Civil\n");
    scanf("%d", &in);
    if(in == 1)
    {
    printf("Enter the book name, yow want to Issue:\n");
    scanf("%s", &Book);
    for(i = 0; i < ncse + 1; i++)
    {
    if(strcmp(Book,CSE[i]) == 0)
    {
      ir = ir + 1;
    }
    }
    if(ir != 0)
    {
        printf("Book found in CSE category.\n");
        printf("Kindly collected from desk.\n");
    }
    else
    {
        printf("Not found.\n");
    }
    }

    else if(in == 2)
    {
    printf("Enter the book name, yow want to Issue:\n");
    scanf("%s", &Book);
    for(i = 0; i < nswe + 1; i++)
    {
    if(strcmp(Book,SWE[i]) == 0)
    {
      ir = ir + 1;
    }
    }
    if(ir != 0)
    {
        printf("Book found in SWE category.\n");
        printf("Kindly collected from desk.\n");
    }
    else
    {
        printf("Not found.\n");
    }
    }

    else if(in == 3)
    {
    printf("Enter the book name, yow want to Issue:\n");
    scanf("%s", &Book);
    for(i = 0; i < nete + 1; i++)
    {
    if(strcmp(Book,ETE[i]) == 0)
    {
        ir = ir + 1;
    }
    }
    if(ir != 0)
    {
        printf("Book found in ETE category.\n");
        printf("Kindly collected from desk.\n");
    }
    else
    {
        printf("Not found.\n");
    }
    }

    else if(in == 4)
    {
    printf("Enter the book name, yow want to issue:\n");
    scanf("%s", &Book);
    for(i = 0; i < neee + 1; i++)
    {
    if(strcmp(Book,EEE[i]) == 0)
    {
        ir = ir + 1;
    }
    }
    if(ir != 0)
    {
        printf("Book found in EEE category.\n");
        printf("Kindly collected from desk.\n");
    }
    else
    {
        printf("Not found.\n");
    }
    }

    else if(in == 5)
    {
    printf("Enter the book name, yow want to Issue:\n");
    scanf("%s", &Book);
    for(i = 0; i < ncivil + 1; i++)
    {
    if(strcmp(Book,Civil[i]) == 0)
    {
         ir = ir + 1;
    }
    }
    if(ir != 0)
    {
        printf("Book found in Civil category.\n");
    }
    else
    {
        printf("Not found.\n");
    }
    }
}

void Breturn()
{
    printf("Select a category:\n");
    printf("1.CSE\n2.SWE\n3.ETE\n4.EEE\n5.Civil\n");
    scanf("%d", &rn);
    if(rn == 1)
    {
        printf("How many book(s) you want to return:\n");
        scanf("%d", &ncse);
        printf("Enter Book names:\n");
    for(i = 0; i < ncse + 1; i++)
        gets(CSE[i]);

    }

    else if(rn == 2)
    {
        printf("How many book(s) you want to return:\n");
        scanf("%d", &nswe);
        printf("Enter Book names:\n");
    for(i = 0; i < nswe + 1; i++)
        gets(SWE[i]);
    }

    else if(rn == 3)
    {
        printf("How many book(s) you want to return:\n");
        scanf("%d", &nete);
        printf("Enter Book names:\n");
    for(i = 0; i < nete + 1; i++)
        gets(ETE[i]);
    }

    else if(rn == 4)
    {
        printf("How many book(s) you want to return:\n");
        scanf("%d", &neee);
        printf("Enter Book names:\n");
    for(i = 0; i < neee + 1; i++)
        gets(EEE[i]);
    }

    else if(rn == 5)
    {
        printf("How many book(s) you want to return:\n");
        scanf("%d", &ncivil);
        printf("Enter Book names:\n");
    for(i = 0; i < ncivil + 1; i++)
        gets(Civil[i]);
    }
}

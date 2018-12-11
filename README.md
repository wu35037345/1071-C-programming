# 1071-C-programming

week01
* ctof.cpp
* wel.cpp
* 公式解.cpp
 
week02
* year.cpp
* sec.cpp
#include <stdio.h>
#include <stdlib.h>
struct Date
{
    int year;
    int month;
    int day;
};

struct ListNode
{
    int id;
    Date birthday;
    char *name;
    //Date date;
    //int num[6];
    ListNode *nextPtr;
};

typedef ListNode *ListNodePtr;

void insert( ListNodePtr *sPtr, ListNode item );
int del( ListNodePtr *sPtr, ListNode item);
int isEmpty( ListNodePtr sPtr );
void printList( ListNodePtr currentPtr );
void instructions( void );

int main( void )
{
    ListNodePtr startPtr = NULL;
    int choice;
    ListNode item;
    item.name = (char*)malloc(sizeof(char));


    instructions();
    printf( "? " );
    scanf( "%d", &choice );
    while ( choice != 3 )
    {

        switch ( choice )
        {
        case 1:
            printf( "Enter a character: " );
            scanf( "\n%d", &item );
            printf("Enter birthday: ");
            scanf("%d %d %d", &item.birthday.year, &item.birthday.month, &item.birthday.day);
            fflush(stdin);
            printf("Enter name: ");
            gets(item.name);
            insert( &startPtr, item );
            printList( startPtr );
            break;
        case 2:
            if ( !isEmpty( startPtr ) )
            {
                printf( "Enter character to be deleted: " );
                scanf( "\n%d", &item );
                if ( del( &startPtr, item ) )
                {
                    printf( "%d deleted.\n", item);
                    printList( startPtr );
                }
                else
                {
                    printf( "%d not found.\n\n", item );
                }
            }
            else
            {
                printf( "List is empty.\n\n" );
            }
            break;
        default:
            printf( "Invalid choice.\n\n" );
            instructions();
            break;
        }
        printf( "? " );
        scanf( "%d", &choice );
    }
    printf( "End of run.\n" );
    return 0;
}
void instructions( void )
{
    printf( "Enter your choice:\n"
            "   1 to insert an element into the list.\n"
            "   2 to delete an element from the list.\n"
            "   3 to end.\n" );
}
void insert( ListNode **sPtr, ListNode item )
{
    ListNodePtr newPtr;
    ListNodePtr previousPtr;
    ListNodePtr currentPtr;
    newPtr = (ListNode *) malloc( sizeof( ListNode ) );
    if ( newPtr != NULL )
    {
        newPtr->id = item.id;
        newPtr->birthday.year = item.birthday.year;
        newPtr->birthday.month = item.birthday.month;
        newPtr->birthday.day = item.birthday.day;
        newPtr->name = item.name;
        newPtr->nextPtr = NULL;

        previousPtr = NULL;
        currentPtr = *sPtr;
        while ( currentPtr != NULL && item.id > currentPtr->id )
        {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }
        if ( previousPtr == NULL )
        {
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        }
        else
        {
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }
    else
    {
        printf( "%d not inserted. No memory available.\n", item.id );
    }
}
int del( ListNodePtr *sPtr, ListNode item )
{
    ListNodePtr previousPtr;
    ListNodePtr currentPtr;
    ListNodePtr tempPtr;
    if ( item.id == ( *sPtr )->id )
    {
        tempPtr = *sPtr;
        *sPtr = ( *sPtr )->nextPtr;
        free( tempPtr );
        return item.id;
    }
    else
    {
        previousPtr = *sPtr;
        currentPtr = ( *sPtr )->nextPtr;
        while ( currentPtr != NULL && currentPtr->id != item.id )
        {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }
        if ( currentPtr != NULL )
        {
            tempPtr = currentPtr;
            previousPtr->nextPtr = currentPtr->nextPtr;
            free( tempPtr );
            return item.id;
        }
    }
    return '\0';
}
int isEmpty( ListNodePtr sPtr )
{
    return sPtr == NULL;
}
void printList( ListNodePtr currentPtr )
{
    if ( currentPtr == NULL )
    {
        printf( "List is empty.\n\n" );
    }
    else
    {
        printf( "The list is:\n" );
        while ( currentPtr != NULL )
        {
            printf("--> \n");
            printf("id = %d, birthday = %4d/%02d/%02d  name = %s\n", currentPtr->id, currentPtr->birthday.year,currentPtr->birthday.month,currentPtr->birthday.day,currentPtr->name);
            currentPtr = currentPtr->nextPtr;
        }
        printf( "NULL\n\n" );
    }
}


/**************************************************************************
 * (C) Copyright 1992-2010 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/








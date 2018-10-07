# 1071-C-programming

week01
* ctof.cpp
* wel.cpp
* 公式解.cpp
 
week02
* year.cpp
* sec.cpp
#include<stdio.h>
void prchar(char c,int n)
{
    for(int i=1; i<=n; i++)
        printf("%c",c);

}
void drawRec(int height,int width,int filled)
{
    if(filled)
        for(int i=1; i<=height; i++)
        {
            for(int j=1; j<=width; j++)
            {
                printf("*",i,j);
            }
            printf("\n");
        }
    else
    {
        for(int i=1; i<=height; i++)
        {
            for(int j=1; j<=width; j++)
            {
                if(i==1 || i==height || j==1 ||j==width)
                    printf("*",i,j);
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
}
void drawVerTri(int height,int type,int filled)
{
    int width;
    int j;
    switch(type)
    {
    case 1:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar('*',i);
                prchar(' ',height-i);
                printf("\n");
            }
        }
        else
        {
            width=height;
            for(int i=1; i<=height; i++)
            {
                for(j=1; j<=width; j++)
                {
                    if(i==j || i==height || j==1)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
        }
        break;
    case 2:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar(' ',height-i);
                prchar('*',i);
                printf("\n");
            }
        }
        else
        {
            width=height;
            for(int i=1; i<=height; i++)
            {
                for(int j=1; j<=width; j++)
                {
                    if(i==height ||j==width ||i+j==height+1)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
        }
        break;
    case 3:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar('*',height-i+1);
                prchar(' ',i-1);
                printf("\n");
            }
        }
        else
        {
            width=height;
            for(int i=1; i<=height; i++)
            {
                for(int j=1; j<=width; j++)
                {
                    if(i==1 ||j==1 ||i+j==height+1)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
        }
        break;
    case 4:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar(' ',i-1);
                prchar('*',height-i+1);
                printf("\n");
            }
        }
        else
        {
            width=height;
            for(int i=1; i<=height; i++)
            {
                for(int j=1; j<=width; j++)
                {
                    if(i==1 ||j==width ||i==j)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
        }
        break;
    }
}
void drawTsoTri(int height,int type,int filled)
{
    int width;
    width=2*height-1;
    switch(type)
    {
    case 1:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar(' ',height-i);
                prchar('*',2*i-1);
                prchar(' ',height-i);
                printf("\n");
            }
        }
        else
        {
            for(int i=1; i<=height; i++)
            {
                for(int j=1; j<=width; j++)
                {
                    if(i+j==7 || i==height || j-i==5)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
        }
        break;
    case 2:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar(' ',i-1);
                prchar('*',2*height-2*i+1);
                prchar(' ',i-1);
                printf("\n");
            }
        }
        else
        {
            for(int i=1; i<=height; i++)
            {
                for(int j=1; j<=width; j++)
                {
                    if(i==1 || i==j || j+i==12)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
        }
        break;
    }
}
int main()
{
    int choice;
    int height;
    int width;
    int type;
    int filled;
    while(1)
    {
        printf("Enter choice: ");
        printf("Main Menu\n");
        printf("1. Rectangle\n");
        printf("2. Vertical Triangle\n");
        printf("3. Tsosceles Triangle\n");
        printf("4. Exit\n");
        printf("=> ");
        scanf("%d",&choice);
        if(choice==4)
            break;
        switch(choice)
        {
        case 1:
            printf("Enter height,width,filled: ");
            scanf("%d %d %d",&height,&width,&filled);
            drawRec(height,width,filled);
            break;
        case 2:
            printf("Enter height, type, filled: ");
            scanf("%d %d %d",&height,&type,&filled);
            drawVerTri(height,type,filled);
            break;
        case 3:
            printf("Enter height, type, filled: ");
            scanf("%d %d %d",&height,&type,&filled);
            drawTsoTri(height,type,filled);
            break;
        }
    }
    return 0;
}








# 1071-C-programming

week01
* ctof.cpp
* wel.cpp
* 公式解.cpp
 
week02
* year.cpp
* sec.cpp
#include<stdio.h>

int main()
{
    int choice;
    int height;
    int width;
    int type;
    while(1)
    {
        printf("Enter choice: ");
        printf("Main Menu\n");
        printf("1. Rectangle\n");
        printf("2. Vertical Triangle\n");
        printf("3. Exit\n");
        printf("=> ");
        scanf("%d",&choice);
        if(choice==3)break;
        switch(choice){
        case 1:
            printf("Enter height and width: ");
            scanf("%d %d",&height,&width);
            for(int i=1;i<=height;i++){
                for(int j=1;j<=width;j++){
                    if(i==1 || i==height ||j==1 ||j==width)
                        printf("*");
                    else
                        printf(" ");
            }
            printf("\n");
            }
            break;
        case 2:
            printf("Enter type: ");
            scanf("%d",&type);
            if(type==5)break;
            switch(type){
            case 1:
                printf("Enter height and width: ");
                scanf("%d %d",&height,&width);
                for(int i=1;i<=height;i++){
                    for(int j=1;j<=width;j++){
                        if(i==height ||j==1 ||i==j)
                            printf("*");
                        else
                            printf(" ");
                    }
                    printf("\n");
                }
                break;
            case 2:
                printf("Enter height and width: ");
                scanf("%d %d",&height,&width);
                for(int i=1;i<=height;i++){
                    for(int j=1;j<=width;j++){
                        if(i==height ||j==width ||i+j==height+1)
                            printf("*");
                        else
                            printf(" ");
                    }
                    printf("\n");
                }
                break;
            case 3:
                 printf("Enter height and width: ");
                 scanf("%d %d",&height,&width);
                 for(int i=1;i<=height;i++){
                     for(int j=1;j<=width;j++){
                         if(i==1 ||j==1 ||i+j==height+1)
                             printf("*");
                         else
                             printf(" ");
                     }
                     printf("\n");
                }
                break;
            case 4:
                 printf("Enter height and width: ");
                 scanf("%d %d",&height,&width);
                 for(int i=1;i<=height;i++){
                     for(int j=1;j<=width;j++){
                        if(i==1 ||j==width ||i==j)
                            printf("*");
                        else
                            printf(" ");
                     }
                     printf("\n");
                 }
                 break;
            }
        }
    }
    return 0;
}
#include<stdio.h>

int main()
{
    int choice;
    int height;
    int width;
    int type;
    while(1)
    {
        printf("Enter choice");
        printf("Main Menu\n");
        printf("1. Rectangle\n");
        printf("2. Vertical Triangle\n");
        printf("3. Exit\n");
        printf("=> ");
        scanf("%d",&choice);
        if(choice==3)break;
        switch(choice){
        case 1:
            printf("Enter height and width: ");
            scanf("%d %d",&height,&width);
            for(int i=1;i<=height;i++){
                for(int j=1;j<=width;j++){
                    if(i==1 || i==height ||j==1 ||j==width)
                        printf("*");
                    else
                        printf(" ");
            }
            printf("\n");
            }
            break;
        case 2:
            printf("Enter height and type: ");
            scanf("%d %d",&height,&type);
            width=height;
            switch(type){
            case 1:
                for(int i=1;i<=height;i++){
                    for(int j=1;j<=width;j++){
                        if(i==height ||j==1 ||i==j)
                            printf("*");
                        else
                            printf(" ");
                    }
                    printf("\n");
                }
                break;
            case 2:
                for(int i=1;i<=height;i++){
                    for(int j=1;j<=width;j++){
                        if(i==height ||j==width ||i+j==height+1)
                            printf("*");
                        else
                            printf(" ");
                    }
                    printf("\n");
                }
                break;
            case 3:
                 for(int i=1;i<=height;i++){
                     for(int j=1;j<=width;j++){
                         if(i==1 ||j==1 ||i+j==height+1)
                             printf("*");
                         else
                             printf(" ");
                     }
                     printf("\n");
                }
                break;
            case 4:
                 for(int i=1;i<=height;i++){
                     for(int j=1;j<=width;j++){
                        if(i==1 ||j==width ||i==j)
                            printf("*");
                        else
                            printf(" ");
                     }
                     printf("\n");
                 }
                 break;
            }
        }
    }
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
int sum(int n1,int n2); // function prototype

int main(){
    int n1,n2;
    int total=0;
    printf("Enter n1 n2: ");
    scanf("%d %d",&n1,&n2);
    while(n1>=0&&n2>=0){
        total = sum(n1,n2);
        printf("sum(%d %d)=%d\n",n1,n2,total);
        printf("Enter n1 n2: ");
        scanf("%d %d",&n1,&n2);

    }
    return 0;
}


int sum(int n1,int n2){
    int total=0;
    for(int i=n1;i<=n2;i++){
        total+=i;
    }
    return total;

}



/*
int main(){
    int n1,n2;
    int sum;
    printf("Enter n1 n2: ");
    scanf("%d %d",&n1,&n2);
    while(n1>=0||n2>=0){
        sum=0;
        for(int i=n1;i<=n2;i++){
            sum=sum+i;
        }
        printf("sum(%d %d)=%d\n",n1,n2,sum);
        printf("Enter n1 n2: ");
        scanf("%d %d",&n1,&n2);
    }
    return 0;
}
*/
#include<stdio.h>
void prchar(char c,int n)
{
    for(int i=1; i<=n; i++)
        printf("%c",c);

}
void drawRec(int height,int width,int filled)
{
    if(filled)
    for(int i=1; i<=height; i++){
        for(int j=1; j<=width; j++){
            printf("*",i,j);}
            printf("\n");

    }else{
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
void drawVerTri(int height,int type,int filled){
    if(filled){
        for()
    }
        
}
#include<stdio.h>
void prchar(char c,int n)
{
    for(int i=1; i<=n; i++)
        printf("%c",c);

}
void drawRec(int height,int width,int filled)
{
    if(filled)
    for(int i=1; i<=height; i++){
        for(int j=1; j<=width; j++){
            printf("*",i,j);}
            printf("\n");

    }else{
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
void drawVerTri(int height,int type,int filled){
    if(filled){
        for()
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
        printf("3. Exit\n");
        printf("=> ");
        scanf("%d",&choice);
        if(choice==3)break;
        switch(choice)
        {
        case 1:
            printf("Enter height,width,filled: ");
            scanf("%d %d %d",&height,&width,&filled);
            drawRec(height,width,filled);
            break;
        case 2:
            printf("Enter height and type: ");
            scanf("%d %d",&height,&type);
            width=height;
            switch(type)
            {
            case 1:

                break;
            case 2:
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
                break;
            case 3:
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
                break;
            case 4:
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
                break;
            }
        }
    }
    return 0;
}














#include <stdio.h>
#include <stdlib.h>
#define e 1e-10


int Addition(int a, int b)
{
    int c=a+b;
    return c;
}

int Subtraction(int a, int b)
{
    int c=a-b;
    return c;
}

int Multiplication(int a, int b)
{
    int c=a*b;
    return c;
}

int Devision(int a, int b)
{
    int c=a/b;
    return c;
}

int Power(int a, int b)
{
    int i=0;
    int c=1;
    do
    {
        c=c*a;
        i++;
    }while(i!=b);
    return c;
}

int Root(int a)
{
     int next=a;
     int prev;
     do
     {
         prev=next;
         next = (prev+(a/prev))/2;
     }while (prev-next>e);
    return next;
}

int main()
{
    int a,b,otv,c,x;

    do{
        printf("1: Addition \n");
        printf("2: Subtraction \n");
        printf("3: Multiplication \n");
        printf("4: Devision \n");
        printf("5: Power \n");
        printf("6: Root \n");
        printf("7: Exit \n");
        do
        {
            printf("Choose an operation: \n");
            x=scanf("%d", &c);
            while(getchar()!='\n');
        }while(x!=1);
        
        switch (c)
        {
            case 1:
            do
            {
              printf("Enter first number: \n");
              x=scanf("%d",&a);
              while(getchar()!='\n');
            }while(x!=1);
            do
            {
              printf("Enter second number: \n");
              x=scanf("%d",&b);
              while(getchar()!='\n');
            }while(x!=1);
              otv=Addition(a,b);
              printf("Answer: %d \n", otv);
              break;
            case 2:
            do
            {
              printf("Enter first number: \n");
              x=scanf("%d",&a);
              while(getchar()!='\n');
            }while(x!=1);
            do
            {
              printf("Enter second number: \n");
              x=scanf("%d",&b);
              while(getchar()!='\n');
            }while(x!=1);
              otv=Subtraction(a,b);
              printf("Answer: %d \n", otv);
              break;
            case 3:
            do
            {
              printf("Enter first number: \n");
              x=scanf("%d",&a);
              while(getchar()!='\n');
            }while(x!=1);
            do
            {
              printf("Enter second number: \n");
              x=scanf("%d",&b);
              while(getchar()!='\n');
            }while(x!=1);
              otv=Multiplication(a,b);
              printf("Answer: %d \n", otv);
              break;
            case 4:
            do
            {
              printf("Enter first number: \n");
              x=scanf("%d",&a);
              while(getchar()!='\n');
            }while(x!=1);
            do
            {
              printf("Enter second number: \n");
              x=scanf("%d",&b);
              while(getchar()!='\n');
            }while(x!=1);
              otv=Devision(a,b);
              printf("Answer: %d \n", otv);
              break;
            case 5:
            do
            {
              printf("Enter the number: \n");
              x=scanf("%d",&a);
              while(getchar()!='\n');
            }while(x!=1);
            do
            {
              printf("Enter the power: \n");
              x=scanf("%d",&b);
              while(getchar()!='\n');
            }while(x!=1);
              otv=Power(a,b);
              printf("Answer: %d \n", otv);
              break;
            case 6:
            do
            {
              printf("Enter the number: \n");
              x=scanf("%d",&a);
              while(getchar()!='\n');
            }while(x!=1);
              otv=Root(a);
              printf("Answer: %d \n", otv);
              break;
            case 7:
              break;
            default :
              printf("Try again \n");

        }
      }while(c!=7);

    return 0;

}

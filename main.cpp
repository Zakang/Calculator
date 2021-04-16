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
    int a,b,otv,c;

    do{
        printf("1: Addition \n");
        printf("2: Subtraction \n");
        printf("3: Multiplication \n");
        printf("4: Devision \n");
        printf("5: Power \n");
        printf("6: Root \n");
        printf("7: Exit \n");
        printf("Choose operation: \n");
        scanf("%d", &c);
        switch (c)
        {
            case 1:
              printf("Enter first number: \n");
              scanf("%d",&a);
              printf("Enter second number: \n");
              scanf("%d",&b);
              otv=Addition(a,b);
              printf("Answer: %d \n", otv);
              break;
            case 2:
              printf("Enter first number: \n");
              scanf("%d",&a);
              printf("Enter second number: \n");
              scanf("%d",&b);
              otv=Subtraction(a,b);
              printf("Answer: %d \n", otv);
              break;
            case 3:
              printf("Enter first number: \n");
              scanf("%d",&a);
              printf("Enter second number: \n");
              scanf("%d",&b);
              otv=Multiplication(a,b);
              printf("Answer: %d \n", otv);
              break;
            case 4:
              printf("Enter first number: \n");
              scanf("%d",&a);
              printf("Enter second number: \n");
              scanf("%d",&b);
              otv=Devision(a,b);
              printf("Answer: %d \n", otv);
              break;
            case 5:
              printf("Enter the number: \n");
              scanf("%d",&a);
              printf("Enter the power: \n");
              scanf("%d",&b);
              otv=Power(a,b);
              printf("Answer: %d \n", otv);
              break;
            case 6:
              printf("Enter the number: \n");
              scanf("%d",&a);
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

#include<stdio.h>
int main()
{
    int y;
    printf("Enter 1st number ");
    scanf("%d",&y);
    int z;
    printf("Enter 2nd number ");
    scanf("%d",&z);
    int x;
    printf("Enter 1 for Addition, 2 for subtraction, 3 for multiplication, 4 for division and 5 for remainder ");
    scanf("%d",&x);
    switch(x)
    {
        case 1: 
        printf("Addition is %d",y+z);
        break;
        case 2:
        printf("Subtraction is %d",y-z);
        break;
        case 3:
        printf("Multiplication is %d",y*z);
        break;
        case 4:
        if (z==0){
            printf("Invalid entery");
        }
        else {
            float div= (1.0*y)/z;
            printf("Division is %.2f",div);
        }
        break;
        case 5:
        if(z==0){
            printf("Invalid entery");
        }
        else{
            printf("Remainder is %d",y%z);
        }
        break;
        default:
        printf("Invalid choice");
    }


}
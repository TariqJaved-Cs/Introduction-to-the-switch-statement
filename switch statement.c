#include<stdio.h>
int main()
{
    //Reads serial number and display the class of the ship
    char cclass;
    printf("Enter the ship serial number ");
    scanf("%c",&cclass);
    printf("ship class is %c ",cclass);
    switch (cclass){
    case 'B':
    case 'b':
        printf("battleship\n");
        break;
    case 'C':
    case 'c':

         printf("cruiser \n");
         break;
    case 'D':
    case 'd':
        printf("destroyer \n");
        break;
    default:
        printf("unknown\n");
    }

}

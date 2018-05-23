#include <stdio.h>
void main()
{
    int num,temp,rem,store=0;
    scanf ("%d",&num);
    for(temp=num;num!=0;num/=10)
    {
        rem = num%10;
        store = (store*10)+rem;
    }
    for(temp=store;store!=0;store/=10)
    {
        switch(store%10)
        {
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
        }
    }

}

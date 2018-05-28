#include <stdio.h>
void main()
{
    	int array[100], i, num,even=0,odd=0;

    	scanf("%d", &num);
    	for (i = 0; i < num; i++)
            scanf("%d", &array[i]);
        for (i = 0; i < num; i++)
        {
            if (array[i] % 2 == 0)
            {
	            even++;
                printf("%d\t", array[i]);
            }
        }
        for (i = 0; i < num; i++)
        {
            if (array[i] % 2 != 0)
            {
	            odd++;
                printf("%d\t", array[i]);
            }
        }
        printf("%d even numbers\n%d odd numbers\n",even,odd);
}

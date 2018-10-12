#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int num[30], i, max, min;
	float priem;
	srand(time(NULL));
	
	for(i=0; i<30; i++)
	{
		num[i] = rand()%90+10;
	}
    for(i=0; i<30; i++)
	{
		printf("%d, ", num[i]);
	}
	printf("\nEven numbers: ");
    for(i=0; i<30; i++)
	{
		if(num[i]%2==0)
		{
			printf("%d, ", num[i]);
		}
	}
	printf("\nCan be divided with 3 & 5: ");
	for(i=0; i<30; i++)
	{
		if(num[i]%3==0 && num[i]%5==0)
		{
			printf("%d, ", num[i]);
		}
	}
	printf("\nFirst bigger than the second: ");
	for(i=0; i<30; i++)
	{
		if(num[i]/10 > num[i]%10)
		{
			printf("%d, ", num[i]);
		}
	}
	printf("\nCiferny sucet je 10:   ");
	for(i=0; i<30; i++)
	{
		if(num[i]/10 + num[i]%10 == 10)
		{
			printf("%d, ", num[i]);
		}
	}
	printf("\nAirthmetical avarage of the array:   ");
	for(i=0; i<30; i++)
	{
		priem += num[i];
	}
	printf("%1.2f", priem/30 );
	max = num[0];
	for(i=1; i<30; i++)
	{
		if(num[i]>max)
		{
			max = num[i];
		}
	}
	printf("\nThe biggest number of the array: %d", max);
	min = num[0];
	for(i=1; i<30; i++)
	{
		if(num[i]<min)
		{
			min = num[i];
		}
	}
	printf("\nThe lowest number of the array: %d", min);
	
	
	
	
	
}

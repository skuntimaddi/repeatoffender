#include <stdio.h>

int main()
{
    printf("\nHello World");
    int array[25] = {0}; //input
	int count[25] = {0}; //counter; index to this array will be the data element itself.
	
	printf("\nEnter the elements :"	);
	int value = 0;
	for(int i = 0; i<25; i++)
	{
		scanf("%d",&value);
		array[i]=value;
		count[value]=count[value]+1;
	}
	
	printf("\n");
	for(int i = 0; i<25; i++)
	{
		printf("%d   ",count[i]);
	}
	printf("\n");
	
	int min=0, max=0;
	printf("\nEnter the window of elements");
	printf("\nMin value:");
	scanf("%d",&min);
	printf("\nMax value:");
	scanf("%d",&max);
	
	int diff = max - min;
	
	for(int j = min; j<=max ; j++)
	{
		printf("\nElement %d has appeared %d number of times in the input data set",j,count[j]);	
	}	
    return 0;
}

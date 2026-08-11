#define SIZE 5 
#include<stdio.h>
//----------------------------------------
void display_arr(int arr[], int size)
{
	int i;
	for(i=0; i<SIZE; i++)
	{
		printf("%d ",arr[i]);
	}
}
//--------------------------------------

void bubble_sort(int arr[], int size)
{
	int i,j;
	int pass = 0;
	int comp = 0;
	for(i=1; i<SIZE; i++)
	{
		pass++;

		for(j=0; j<SIZE-1; j++)
		{
			comp++;

			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	printf("pass = %d\n",pass);
	printf("Com = %d\n",comp);
}	
	


//----------------------------------
void selection_sort(int arr[], int SIZE)
{
	int i,j;
	int pass = 0;
	int comp = 0;
	for(i=0; i<SIZE-2; i++)
	{
		pass++;

		for(j=i+1; j<SIZE; j++)
		{
			comp++;

			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	printf("pass = %d\n",pass);
	printf("Com = %d\n",comp);
}	
	
//--------------------------------------
void insertion_sort(int arr[], int SIZE)
{
	int i,j,key;
	int pass = 0;
	int comp = 0;
	for(i=1; i<SIZE; i++)
	{
		pass++;
	key = arr[i];
	for(j=i-1; j>=0 && arr[j]>key; j--)
	{
		comp++;
		arr[j+1] = arr[j];
	}
		arr[j+1] = key;
	}

        printf("pass = %d\n",pass);
	printf("Com = %d\n",comp);
}	

	
//---------------------------------------

int main()
{
	int arr[SIZE], choice;
	int i;
	printf("Enter array elements ");
	scanf("%d",&arr[i]);
	
	printf("Array elemnts are :");
	for(i=0; i<SIZE; i++)
	{
		printf("%d",arr[i]);
	}
	do{
		printf("0.EXIT\n");
		printf("1.Display Array\n");
		printf("2.Bubble sort\n");
		printf("3.Selection sort\n");
		printf("4.Insertion sort\n");
		
		printf("Enter the choice:");
		scanf("%d",&choice);

	switch(choice)
	{
		case 0: printf("BYEEEEEEEEEEEEEEEEEEEEEEE");
				break;

		case 1:printf("Array Elemnts :");
			 display_arr(arr, SIZE);
				break;

		case 2:
			bubble_sort(arr,SIZE);
			printf("Bubble sort:");
			display_arr(arr, 5);
				break;

		case 3:
			 selection_sort(arr, SIZE);
			printf("Selection sort:");
			display_arr(arr, 5);
				break;

		case 4:
			insertion_sort(arr, SIZE);
			printf("Insertion sort:");
			display_arr(arr, 5);
				break;

		default: printf("INVALID\n");
				break;

	}		
	}while(choice != 0);

return 0;

	
}
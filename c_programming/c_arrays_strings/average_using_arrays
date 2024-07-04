#include <stdio.h>
#include<string.h>
int main()
{
	int i,n;
	float sum=0,num[n], average;
	printf("Enter the number of data:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	while(n<0){
		printf("!!error!! enter a positive numbers");
		fflush(stdin);fflush(stdout);
		scanf("%d",&n);

	}
	for(i=0;i<n;i++){
		printf("%d.enter the number\n",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&num[i]);
		sum+=num[i];
	}
	average=sum/n;
	printf("average=%.2f",average);
	return 0;
}


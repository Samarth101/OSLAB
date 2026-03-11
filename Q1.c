#include <stdio.h>
void bubbleSort(int * arr,int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void main(){
	FILE *fp1,*fp2;
	int arr[100],arr2[100];
	int n=0,n2=0;

	fp1=fopen("int1.txt","r");
	while(fscanf(fp1,"%d",&arr[n])==1)
	{
		n++;
	}
	fclose(fp1);
	bubbleSort(arr,n);
	fp2=fopen("sorted.txt","w");
	for(int i=0;i<n;i++)
	{
		fprintf(fp2,"%d ",arr[i]);
	}
	fclose(fp2);

	fp1=fopen("int2.txt","r");
	while(fscanf(fp1,"%d",&arr2[n2])==1)
	{
		n2++;
	}

	fclose(fp1);
	bubbleSort(arr2,n2);
	fp2=fopen("sorted.txt","a");
        for(int i=0;i<n2;i++)
        {
                fprintf(fp2,"%d ",arr2[i]);
        }
        fclose(fp2);

}

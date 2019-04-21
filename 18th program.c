#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int a[10],nog[10],name[10],n,i,j,temp;
printf("ENTER NUMBER OF STUDENTS: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("\nENTER NAME OF THE STUDENT %d: ",i+1);
	scanf("%s",&name[i]);		
	a[i] = i+1;
	printf("ENTER GIFTS FOR STUDENT %d: ",i+1);
	scanf("%d",&nog[i]);
}

for(i=0; i<n; i++)
    {

        for(j=i+1; j<n; j++)
        {

            if(nog[i] < nog[j])
            {
                temp = nog[i];
                nog[i]=nog[j];
                nog[j] = temp;
                temp = a[i];
                a[i]=a[j];
                a[j] = temp;
                
            }
        }
    }
   
printf("\n\n\n****************************************************     ORDER     *****************************************************\n");
printf("\n***********************     ACCOUNTANT PROCESSED BY STUDENT WHO HAS MAXIMUM NUMBER OF GIFTS     ************************\n\n");
printf("     ORDER OF STUDENTS\t\t      GIFTS TAKEN\n\n");
for(i=0;i<n;i++)
{
	printf("     STUDENT\t %d\t\t",a[i]);
	printf("      NUMBER OF GIFTS\t %d\t\n",nog[i]);
}
printf("\n\n                  ********************     GIFTS PROCESSED BY ORDERED: DONE     ********************\n\n");
}

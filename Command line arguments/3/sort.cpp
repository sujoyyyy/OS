#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int strtoint(char *str)
{
  int i,x;
  for(x=0,i=0;str[i];i++)
  {


  	if(i==0&& str[i]=='-')
  	   i++;

  	if(str[i]>='0'&& str[i]<='9')
  		x=x*10+(str[i]-48);
  	else
  		break;
  }

  if(str[0]=='-')
  	x=-x;

  return(x);
}

double strtodouble(char *str)
{
	double x; 
	x= atof(str);
      
	return(x);

}

void sort(int *a, int n,int flag)
{
if(flag==1)
        {
for (int i = 0; i < n; i++)                     //Loop for ascending ordering
        {
                for (int j = 0; j < n; j++)             //Loop for comparing other values
                {
                        if (a[j] > a[i])                //Comparing other array elements
                        {
                                int tmp = a[i];         //Using temporary variable for storing last value
                                a[i] = a[j];            //replacing value
                                a[j] = tmp;             //storing last value
                        }  
                }
        }
        printf("\n\nAscending : ");                     //Printing message
        for (int i = 0; i < n; i++)                     //Loop for printing array data after sorting
        {
                printf(" %d ", a[i]);
        }
}

if(flag==2){
        for (int i = 0; i < n; i++)                     //Loop for descending ordering
        {
                for (int j = 0; j < n; j++)             //Loop for comparing other values
                {
                        if (a[j] < a[i])                //Comparing other array elements
                        {
                                int tmp = a[i];         //Using temporary variable for storing last value
                                a[i] = a[j];            //replacing value
                                a[j] = tmp;             //storing last value
                        }
                }
        }
        printf("\n\nDescending : ");                    //Printing message
        for (int i = 0; i < n; i++)                     //Loop for printing array data after sorting
        {
                printf(" %d ", a[i]);                   //Printing data
        }

}
}
void sort(char *a,int n, int flag)
{
        if(flag==1)
        {
for (int i = 0; i < n; i++)                     //Loop for ascending ordering
        {
                for (int j = 0; j < n; j++)             //Loop for comparing other values
                {
                        if (a[j] > a[i])                //Comparing other array elements
                        {
                                char tmp = a[i];         //Using temporary variable for storing last value
                                a[i] = a[j];            //replacing value
                                a[j] = tmp;             //storing last value
                        }  
                }
        }
        printf("\n\nAscending : ");                     //Printing message
        for (int i = 0; i < n; i++)                     //Loop for printing array data after sorting
        {
                printf(" %c ", a[i]);
        }
}

if(flag==2){
        for (int i = 0; i < n; i++)                     //Loop for descending ordering
        {
                for (int j = 0; j < n; j++)             //Loop for comparing other values
                {
                        if (a[j] < a[i])                //Comparing other array elements
                        {
                                char tmp = a[i];         //Using temporary variable for storing last value
                                a[i] = a[j];            //replacing value
                                a[j] = tmp;             //storing last value
                        }
                }
        }
        printf("\n\nDescending : ");                    //Printing message
        for (int i = 0; i < n; i++)                     //Loop for printing array data after sorting
        {
                printf(" %c ", a[i]);                   //Printing data
        }

}
}
void sort(double *a, int n,int flag)
{
if(flag==1)
        {
for (int i = 0; i < n; i++)                     //Loop for ascending ordering
        {
                for (int j = 0; j < n; j++)             //Loop for comparing other values
                {
                        if (a[j] > a[i])                //Comparing other array elements
                        {
                                double tmp = a[i];         //Using temporary variable for storing last value
                                a[i] = a[j];            //replacing value
                                a[j] = tmp;             //storing last value
                        }  
                }
        }
        printf("\n\nAscending : ");                     //Printing message
        for (int i = 0; i < n; i++)                     //Loop for printing array data after sorting
        {
                printf(" %f ", a[i]);
        }
}

if(flag==2){
        for (int i = 0; i < n; i++)                     //Loop for descending ordering
        {
                for (int j = 0; j < n; j++)             //Loop for comparing other values
                {
                        if (a[j] < a[i])                //Comparing other array elements
                        {
                                double tmp = a[i];         //Using temporary variable for storing last value
                                a[i] = a[j];            //replacing value
                                a[j] = tmp;             //storing last value
                        }
                }
        }
        printf("\n\nDescending : ");                    //Printing message
        for (int i = 0; i < n; i++)                     //Loop for printing array data after sorting
        {
                printf(" %f ", a[i]);                   //Printing data
        }

}
}

int main(int argc, char *argv[])
{    

	
	if(argc<4)
	{
		printf("Wrong input format\n");
		
		return 0;
	}

	int n = strtoint(argv[1]);
	int flag= strtoint(argv[2]);
	printf("Size: %d\n",n );
	printf("A/D status: %d\n",flag );
    

	int a[100];
	double b[100];
	char c[100];
	int label=0;
	
	if(isdigit(argv[3][0]))
	{
		label=0;
        for(int i=0;i< strlen(argv[3]);i++)
               { if(argv[3][i]=='.')
                        {label=1; break;}}
        if(label==0)
        {
                int j=0;

	for(int i=3;j<n;i++)
	{       
		a[j]= strtoint(argv[i]);
		j++;
	}
        sort(a,n,flag);
        }

        else
        { int j=0;
        for(int i=3;j<n;i++)
        {       
                b[j]= strtodouble(argv[i]);
                j++;
        }
        sort(b,n,flag);
        }
}
	
	else if(isalpha(argv[3][0]))
	{
		int j=0;label=1;

	for(int i=3;j<n;i++)
	{
		c[j]= argv[i][0];
		j++;
	}
        sort(c,n,flag);
	}
	
        printf("\n");
	return 0;

}



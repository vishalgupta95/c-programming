#include <stdio.h>

void disp(int *ptr) {
 while(*ptr){
	 printf(" [%u] ",*ptr);
	 ptr++;
 }
 printf("\n\n");
}	

double getAverage(int x[],int count)
{
	int i=0;double j;
	for(i=0;i<count;i++){
		j += x[i];
    }
	return(j/count);
}

double getAverage1(int x[5],int count)
{
	int i=0;double j;
	for(i=0;i<count;i++){
		j += x[i];
    }
	return(j/count);
}


double getAverage2(int *x,int count)
{
	int i=0;double j;
	for(i=0;i<count;i++){
		j += x[i];
    }
	return(j/count);
}

int main ()
{
   /* an int array with 5 elements */
   int balance[5] = {1000, 2, 3, 17, 50};
   double avg;
   int x = sizeof(balance)/sizeof(balance[0]);
   printf("val =%d \n",x);
   /* pass pointer to the array as an argument */
   disp(balance);
   avg = getAverage( balance, x ) ;
   printf( "Average value is: %f  \n", avg );
   
   disp(balance);
   avg = getAverage1( balance, x ) ;
   printf( "Average value is: %f \n ", avg );
   disp(balance);
  
   avg = getAverage2( balance, x ) ;
   printf( "Average value is: %f \n", avg );
   disp(balance);
    
   return 0;
}

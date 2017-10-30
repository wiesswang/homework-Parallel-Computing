# include<stdio.h>
# include<math.h>
# include<stdlib.h>
void main()
{
    	int i,j,k=0;
    	FILE *fp;
    	fp = fopen ("result.txt","w");
    	if (fp ==NULL)
    	{
    		printf ("faile open the file!\n");
    		exit (-1);
    	}
    	for(i=2;i<100000;i++){
        		for(j=2;j<=sqrt(i);j++)
        		      if(i%j==0)
                			 break; 
                  if(j>sqrt(i))	
                  {
                  	fprintf (fp,"%d ",i);
                  	k++;
                  }
    	}
    	printf("\n素数的个数为:%d\n",k);
}

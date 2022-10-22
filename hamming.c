#include<stdio.h>
#include<math.h>
void hamming();
int main()
{
     int k,r,sum;
     printf("\nEnter the number of data bits and parity bits: ");
     scanf("%d%d", &k, &r);
     sum=k+r+1;
     if(sum<=pow(2,r))
     {
        printf("\nHamming code can be generated!!\n");
        hamming();
     }
     else
      printf("\nHamming code cannot be generated!!");
   return 0;
}
void hamming()
{
     int ham[12],i;
     printf("\nEnter the data bits: ");
     for(i=1;i<=11;i++)
     {
          if(i==1 || i==2 || i==4 || i==8)
             continue;
          else
            scanf("%d", &ham[i]);
     }
     ham[1]=ham[3]^ham[5]^ham[7]^ham[9]^ham[11];
     ham[2]=ham[3]^ham[6]^ham[7]^ham[10]^ham[11];
     ham[4]=ham[5]^ham[6]^ham[7];
     ham[8]=ham[9]^ham[10]^ham[11];
     printf("\nHamming code is: ");
     for(i=1;i<=11;i++)
        printf("%d ", ham[i]);
     printf("\nParity bits are: ");
     for(i=1;i<=11;i++)
     {
          if(i==1 || i==2 || i==4 || i==8)
               printf("%d ", ham[i]);   }
}


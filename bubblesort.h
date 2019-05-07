#ifndef BUBBLESORT_H_INCLUDED
#define BUBBLESORT_H_INCLUDED

void bubblesort(int arr[], int n)
{   setviewport(0,0,1000,700,0);
    outtextxy(10,650," BUBBLE SORT");

   int i, j;
   for (i = 0; i < n-1; i++)
      {
          for (j = 0; j < n-i-1; j++)
         {
             //drawbar(j,arr[j],BLUE);
           if (arr[j] > arr[j+1])
             {
                 drawbar(j+1,arr[j],BLUE);
                 drawbar(j,arr[j+1],GREEN);
                 delay(30);
              swap(j, j+1,arr);
             }
            drawbar(j,arr[j],GREEN);
         }

      }
      for(int i=0;i<n;i++)
         drawbar(i,arr[i],BLUE);
}


#endif // BUBBLESORT_H_INCLUDED

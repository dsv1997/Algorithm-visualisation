#ifndef SELECTIONSORT_H_INCLUDED
#define SELECTIONSORT_H_INCLUDED

void selectionsort(int ar[],int n)
{    setviewport(0,0,1000,600,0);
    outtextxy(10,650,"SELECTION SORT");
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        bar(i+10*i,ar[i],10+i+10*i,600);
        min_idx = i;
        for (j = i+1 ;j < n; j++)
        {
         if (ar[j] < ar[min_idx])
            min_idx = j;
         }
         drawbar(i,ar[min_idx],BLUE);
         if(min_idx!=i)
         drawbar(min_idx,ar[i],GREEN);
         else
            drawbar(i,ar[min_idx],BLUE);//IF i==min_idx then color the bar blue
         swap(min_idx,i,ar);
         delay(100);
    }
    drawbar(n-1,ar[n-1],BLUE);//for last bar
}


#endif // SELECTIONSORT_H_INCLUDED

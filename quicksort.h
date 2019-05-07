#ifndef QUICKSORT_H_INCLUDED
#define QUICKSORT_H_INCLUDED
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
     drawbar(i,arr[i],MAGENTA);
     drawbar(high,arr[high],MAGENTA);
     delay(20);
    for (int j = low; j <= high- 1; j++)
    {

        if (arr[j] <= pivot)
        {
            i++;
            drawbar(i,arr[i],BLUE);
            drawbar(j,arr[j],BLUE);
            swap(i, j,arr);
            drawbar(i,arr[i],GREEN);
            drawbar(j,arr[j],GREEN);
        }
       else{
          delay(20);
           }
    }
            drawbar(i+1,arr[i+1],BLUE);
            drawbar(high,arr[high],BLUE);
            swap(i + 1, high,arr);
            drawbar(i+1,arr[i+1],GREEN);
            drawbar(high,arr[high],GREEN);
            delay(20);
            drawbar(low-1,arr[low-1],GREEN);
            drawbar(high,arr[high],GREEN);delay(20);
    return (i + 1);
}

void quicksort(int arr[], int low, int high)
{    setviewport(0,0,1000,600,0);
    outtextxy(10,650,"QUICK SORT");
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}



#endif // QUICKSORT_H_INCLUDED

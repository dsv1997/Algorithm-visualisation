#ifndef MERGESORT_H_INCLUDED
#define MERGESORT_H_INCLUDED
void merge(int arr[], int l, int m, int r)
{
    int delaytime = 8;
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
       {
            L[i] = arr[l + i];
       }
    for (j = 0; j < n2; j++)
    {
            R[j] = arr[m + 1+ j];
    }

    i = 0; j = 0; k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            drawbar(k,L[i],RED);
            delay(delaytime);
            drawbar(k,L[i],RED);
            delay(delaytime);
            i++;
        }
        else
        {
            arr[k] = R[j];
            drawbar(k,R[j],RED);
            delay(delaytime);
            drawbar(k,R[j],RED);
            delay(delaytime);
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        drawbar(k,L[i],RED);
        delay(delaytime);
        drawbar(k,L[i],RED);
        delay(delaytime);
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        drawbar(k,R[j],RED);
        delay(delaytime);
        drawbar(k,R[j],RED);
        delay(delaytime);
        j++;
        k++;
    }
}

void mergesort(int arr[], int l, int r)
{

    setviewport(0,0,1000,600,0);

    outtextxy(10,650," MERGE   SORT");

    if (l < r)
    {
        int m = l+(r-l)/2;
        mergesort(arr, l, m);
        mergesort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}


#endif // MERGESORT_H_INCLUDED

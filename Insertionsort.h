#ifndef INSERTIONSORT_H_INCLUDED
#define INSERTIONSORT_H_INCLUDED

void insertionsort(int arr[],int n)
{   int delaytime=0.2;
    setviewport(0,0,1000,600,0);
    outtextxy(10,650,"INSERTION SORT");


    int i, key, j;
    for (i = 1; i < n; i++) {

        key = arr[i];
        drawbar(i,arr[i],GREEN);
        delay(delaytime);
        j = i - 1;

        drawbar(j,arr[j],RED);
        while (j >= 0 && arr[j] > key) {

            arr[j + 1] = arr[j];
            if(j+1==i)
            {
                drawbar(j+1,arr[j+1],GREEN);
                delay(delaytime);
            }
            else
            {
                drawbar(j+1,arr[j+1],BLUE);
                delay(delaytime);
            }
            j = j - 1;
            drawbar(j+1,arr[j+1],RED);
            delay(delaytime);

           drawbar(j,arr[j],RED);
            delay(delaytime);
        }

        arr[j + 1] = key;

        drawbar(j+1,arr[j+1],BLUE);
        delay(delaytime);

        drawbar(j,arr[j],BLUE);
        delay(delaytime);
        }
        drawbar(i,arr[i],BLUE);
        delay(delaytime);
}


#endif // INSERTIONSORT_H_INCLUDED

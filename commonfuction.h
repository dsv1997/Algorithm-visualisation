#ifndef COMMONFUNCTION_H_INCLUDED
#define COMMONFUNCTION_H_INCLUDED
void drawbar(int position,int height,int color)
{    setviewport(9*position,0,9+9*position,600,1);
     clearviewport();
     setviewport(9*position,0,9+9*position,600,1);
     setfillstyle(SOLID_FILL, color);
     bar(0, 600-height, 8, 600);
}
void swap(int min_idx,int i,int ar[])
{
    int temp=ar[min_idx];
    ar[min_idx]=ar[i];
    ar[i]=temp;
}

#endif // COMMONFUNCTION_H_INCLUDED

#include <graphics.h>
#include <iostream>
#include"commonfunction.h"
#include"selectionsort.h"
#include"quicksort.h"
#include"insertionsort.h"
#include"mergesort.h"
using namespace std;
class rectanglearray{
   public:
       int n;
       int *ar;
       void generatear(int n)
       {  ar=new int[n];
         for(int i=n-1;i>=0;i--)
            ar[i]=rand()%600+1;
       }
};
void create(int ar[],int n){
    for(int i=0;i<n;i++)
        drawbar(i,ar[i],GREEN);
}
int main()
{     initwindow(1000,700,"Sorting",1,1,false,true);
      rectanglearray obj;
      obj.n=91;
      obj.generatear(obj.n);
      create(obj.ar,obj.n);
      delay(1000);
      selectionsort(obj.ar,obj.n);cleardevice();
      obj.generatear(obj.n);
      create(obj.ar,obj.n);

      insertionsort(obj.ar,obj.n);cleardevice();
      obj.generatear(obj.n);
      create(obj.ar,obj.n);
      quicksort(obj.ar,0,obj.n);cleardevice();
      obj.generatear(obj.n);
      create(obj.ar,obj.n);
      mergesort(obj.ar,0,obj.n);
	  getch();

	return 0;
}

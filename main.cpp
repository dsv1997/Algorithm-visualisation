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
       int *ar=new int[n];
       void generatear()
       {
         for(int i=n-1;i>=0;i--)
            ar[i]=rand()%600+4;
       }
};
void create(int ar[],int n){
    for(int i=0;i<n;i++)
        drawbar(i,ar[i],GREEN);
}
int main()
{     initwindow(1008,700,"Sorting",1,1,false,true);
      rectanglearray obj;
      obj.n=116 ;
      obj.generatear();
      create(obj.ar,obj.n);
      delay(100);
      selectionsort(obj.ar,obj.n);
      obj.generatear();
      create(obj.ar,obj.n);
      insertionsort(obj.ar,obj.n);
      obj.generatear();
      create(obj.ar,obj.n);
      quicksort(obj.ar,0,obj.n);
      obj.generatear();
      create(obj.ar,obj.n);
      mergesort(obj.ar,0,obj.n);
	  getch();

	return 0;
}

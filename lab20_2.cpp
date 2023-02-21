#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1,Rect *R2){
    if(R2->x-R1->x > R1->w || R2->y-R1->y>R2->h ) return 0;
    
    double max,min,w,h;
    
    if(R1->x>=R2->x) max=R1->x;
        else max=R2->x;
    if(R1->x+R1->w>=R2->x+R2->w) min=R2->x+R2->w;
        else min=R1->x+R1->w;
    w= min-max;
    
    if(R1->y<=R2->y) min=R1->y;
        else min=R2->y;
    if(R1->y-R1->h>=R2->y-R2->h) max=R1->y-R1->h;
        else max=R2->y-R2->h;
    h= min-max;
    
    return w*h;
}
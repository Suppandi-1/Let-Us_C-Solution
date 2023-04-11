#include<stdio.h>
#include<math.h>

float distance (float x ,float y , float X ,float Y){
    return ( sqrt( (x-X)*(x-X) + (y-Y)*(y-Y)));
}
float area ( float x, float y, float x2,float y2, float x3 ,float y3){
    float a,b,c;

    a = distance(x,y ,x2,y2); b= distance(x2,y2, x3,y3); c= distance(x3,y3,x,y);

    float s = (a+b+c)/3;

    return (sqrt( s*(s-a)*(s-b)*(s-c)));
}
int check(float x1,float x2,float x3,float y1 ,float y2,float y3, float X,float Y){
    if ( area(X,Y,x2,y2,x3,y3) +area( x1,y1,X,Y,x2,y2) +area(x1,y1,x3,y3,X,Y) <=3*area (x1,y1,x2,y2,x3,y3) ){
        return 1;
    }
    else return 0;
    //may be this is wrong

}


    
int main()
{   
    float x1,x2,y1,y2,x3,y3, X,Y;
    scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
    printf("enter the point to check:\n")
   ;scanf("%f %f",&X,&Y);

   printf("%d\n",check(x1,x2,x3,y1,y2,y3,X,Y)) ;
    
    return 0;
}
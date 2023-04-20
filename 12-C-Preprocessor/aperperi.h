#include<math.h>
#define Area_tri(x1,y1,x2,y2,x3,y3) (abs((y1*(x2-x3) + y2*(x3-x1) +y3*(x1-x2))/2))
#define Area_sruare(a) (a*a)
#define Area_circ(r) (3.14*r*r)
 
#define PERI_tri(x1, y1 ,x2,y2,x3,y3) (sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3)) + sqrt((x2-x1)*(x2-x1) + (y2- y1)*(y2 - y1) ) + sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3)))
#define PERI_sq(a) (4*a)
#define PERI_circ(r) (2*3.14*r)


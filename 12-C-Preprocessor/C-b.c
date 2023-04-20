

#define IF_SMALL_CASE(ch) (ch<=122 && ch>=97)
#define IF_UPPER_CASE(ch) (ch<=90 && ch>=65)
#define IF_ALPHA(ch) (IF_UPPER_CASE || IF_SMALL_CASE)
#define BIGGER_of(a,b) (a>b?a:b)

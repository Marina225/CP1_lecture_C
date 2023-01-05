#include <stdio.h>
#define RETURN_BACK return
#define BEGIN {
#define END }
#define PROGRAM int main()
#define SQUARE(x)(x*x)
#define LOG(format,args...)printf(format,##args)
#define PI 3.14

//with define you can replace any element in the code. This may be convenient but harder to debug.
PROGRAM BEGIN
    printf("%f\n", SQUARE(PI));
    LOG("%f %f\n", 1.2, 2.3);
    RETURN_BACK 0;
END

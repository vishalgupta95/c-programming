#include <stdio.h>

//#define my_sizeof(type) (char *)(&type + 1) - (char *)(&type)
#define my_sizeof(type) (char *)(&type + 1) - (char *)(&type)
#define concat(a, b) a##b
#define MAX(i, j) (((i) > (j)) ? i : j)

enum week
{
    Mon,
    Tue,
    Wed,
    Thur,
    Fri,
    Sat,
    Sun
};

int test()
{
    int a = 10;
    return a >= 0 ? 999 : 888;
}

int main(int argc, char *argv[])
{
    enum week day;
    bool boolx = true;
    int x = 10;
    char *ptr;
    day = Mon;
    int xy = 30;

    printf("conditioanl operator  %d \n", test());
    printf("default enum value %d\n", day);
    printf("default bool value %d\n", boolx);
    printf("size of int %lu\n", sizeof(int));
    printf("size of long %lu\n", sizeof(long));
    printf("size of double %lu\n", sizeof(double));
    printf("size of long long %lu\n", sizeof(long long));
    printf("size of enum %lu\n", sizeof(day));
    printf("size of ptr %lu\n", sizeof(ptr));
    printf("size of *ptr %lu\n", sizeof(*ptr));
    printf("%d %d %d \n", x++, x++, x++);
    printf("%d %d  %d \n", ++x, ++x, ++x);
    //printf("%c", *argv[1]);  - seg fault

    printf("my size of integer is %d \n", my_sizeof(x));
    printf("%d", concat(x, y));
    return 0;

    //int a, b;

    //a = 250;
    //b = 25;

    //cout << "The maximum is " << MAX(a, b) << endl;

    return 0;
}

typedef struct Point
{
    int x;
    int y;
} Point;

int xmain()
{
    Point p1;
    p1.x = 1;
    p1.y = 3;
    printf("%d \n", p1.x);
    printf("%d \n", p1.y);
    return 0;
}

#if 0

har *c[] = {"Mahesh", "Ganesh", "999", "333"};
char *a;
char **cp[] = {c+3, c+2, c+1, c};
char ***cpp = cp;
    
int main(void) {
    printf("%u %u %u %u %u %u \n",sizeof(a),sizeof(*a),sizeof(c),sizeof(cp),sizeof(cpp),sizeof(char),sizeof(char*));
    return 0;
}   

void reverse(NODE **temp)                                                                                                                             
{

    NODE *q, *r, *s;
    q = *temp;
    r = NULL;
    while (q)
    {   
        s = r;
        r = q; 
        q = q->next;
        r->next = s;
    }
    *temp = r;
}

#endif
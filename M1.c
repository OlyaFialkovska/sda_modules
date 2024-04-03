#include "MErr.h"
#include "Common.h"
#include "M1.h"
void f1()
{
    fprintf(f,"f1_started\n");
    Tg1 one =0.11;Tg2 two =0.22;Tg3 three =0.33;Tg4 four =0.44;
    fprintf(f,"typedef:\n Tg1=%.3f\n Tg2=%.3f\n Tg3=%.3f\n Tg4=%.3f\n",one,two,three,four);
    if(num!=3)
    {
        num++;
        f5();
    }
    num--;
    Err();
    fprintf(f,"f1_finished\n");
}
void f5()
{
    fprintf(f,"f5_started\n");
    fprintf(f,"constants:\n Cg1=%c\n Cg2=%c\n",Cg1,Cg2);
    f6();Err();
    fprintf(f,"f5_finished\n");
}
void f6()
{
    fprintf(f,"f6_started\n");
    Vg1=11,Vg2=22;
    fprintf(f,"variables:\n Vg1=%d\n Vg2=%d\n",Vg1,Vg2);
    f1();Err();
    fprintf(f,"f6_finished\n");
}

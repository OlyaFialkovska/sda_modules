#include "Common.h"
#include "MErr.h"
#include "M2.h"
#include "M3.h"

void f2()
{
    fprintf(f,"f2_started\n");
    Tg1 one =0.111;Tg2 two =0.222;Tg3 three =0.333;Tg4 four =0.444;
    fprintf(f,"typedef:\n Tg1=%.3f\n Tg2=%.3f\n Tg3=%.3f\n Tg4=%.3f\n",one,two,three,four);
    f7();Err();
    fprintf(f,"f2_finished\n");
}

void f3()
{
    fprintf(f,"f3_started\n");
    fprintf(f,"constants:\n Cg1=%c\n Cg2=%c\n",Cg1,Cg2);
    f7();f8(); f9();Err();
    fprintf(f,"f3_finished\n");
}

void f4()
{
    fprintf(f,"f4_started\n");
    Vg1=111,Vg2=222;
    fprintf(f,"variables:\n Vg1=%d\n Vg2=%d\n",Vg1,Vg2);
    f8();
    if(num!=3)
    {
        num++;
        f9();
    }
     num--;
     Err();
    fprintf(f,"f4_finished\n");
}

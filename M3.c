#include "Common.h"
#include "MErr.h"
#include "M3.h"
#include "M2.h"

void f7()
{
    fprintf(f,"f7_started\n");
    Tg1 one =0.1111;Tg2 two =0.2222;Tg3 three =0.3333;Tg4 four =0.4444;
    fprintf(f,"typedef:\n Tg1=%.3f\n Tg2=%.3f\n Tg3=%.3f\n Tg4=%.3f\n",one,two,three,four);
    Err();
    fprintf(f,"f7_finished\n");
}

void f8()
{
    fprintf(f,"f8_started\n");
    fprintf(f,"constants:\n Cg1=%c\n Cg2=%c\n",Cg1,Cg2);
    Err();
    fprintf(f,"f8_finished\n");
}

void f9()
{
    fprintf(f,"f9_started\n");
    Vg1=1111,Vg2=2222;
    fprintf(f,"variables:\n Vg1=%d\n Vg2=%d\n",Vg1,Vg2);
        f4();Err();
    fprintf(f,"f9_finished\n");
}

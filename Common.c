#include "common.h"
const char Cg1='y',Cg2='u';
void common()
{
    Vg1=1;
    Vg2=2;
    Tg1 a = 0.1;
    Tg2 b = 0.2;
    Tg3 c = 0.3;
    Tg4 d = 0.4;
    num=1;
    f=fopen("protocol.txt","w");
    fprintf(f,"common_started_and_finished\n");
}

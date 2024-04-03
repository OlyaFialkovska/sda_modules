#include "M1.h"
#include "M2.h"
#include "MErr.h"
#include "Common.h"

int main()
{
    common();
    fprintf(f,"main_started\n");
    f1();
    f2();
    f3();
    f4();
    fprintf(f,"main_finished\n");
    return 0;
}

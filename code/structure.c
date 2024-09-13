#include <stdio.h>

struct id{
    int enroll_no;
    float cpi ;
    float spi ;
};

int main()
{
    struct id vaidehi ;
    vaidehi.enroll_no = 6081;
    vaidehi.cpi = 8.64;
    vaidehi.spi = 8.63;
    
    struct id dulari ;
    dulari.enroll_no = 6224;
    dulari.cpi = 9.0;
    dulari.spi = 8.8;
    
    printf("vaidehi's enroll_no : %d\n",vaidehi.enroll_no);
    printf("vaidehi's cpi : %f\n",vaidehi.cpi);
    printf("vaidehi's spi : %f\n",vaidehi.spi);
    
    printf("dulari's enroll no. : %d\n",dulari.enroll_no);
    printf("dulari's cpi : %f\n",dulari.cpi);
    printf("dulari's spi : %f\n",dulari.spi);
}
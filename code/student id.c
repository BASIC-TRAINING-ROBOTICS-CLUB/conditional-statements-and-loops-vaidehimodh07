#include <stdio.h>
#include <string.h>

struct id{
    long int enroll_no;
    char name[10] ;
    long int phoneno ;
    char branch[10] ;
    
};

int main()
{
    struct id vaidehi ;
    vaidehi.enroll_no = 6081;
    strcpy(vaidehi.name,"vaidehi");
    vaidehi.phoneno = 7227996325;
    strcpy(vaidehi.branch,"IT");
    
    struct id dulari ;
    dulari.enroll_no = 6224;
    strcpy(dulari.name,"dulari");
    dulari.phoneno = 8511382548;
    strcpy(dulari.branch,"IT");
    
    printf("vaidehi's enroll_no : %ld\n",vaidehi.enroll_no);
    printf("vaidehi's name : %s\n",vaidehi.name);
    printf("vaidehi's phone no : %ld\n",vaidehi.phoneno);
    printf("vaidehi's department : %s\n",vaidehi.branch);
    
    printf("dulari's enroll no. : %ld\n",dulari.enroll_no);
    printf("dulari's name : %s\n",dulari.name);
    printf("dulari's phone no : %ld\n",dulari.phoneno);
    printf("dulari's department : %s\n",dulari.branch);
}
#include <stdio.h>
#include <stdlib.h>
#include "deposit.h"

int main() 
{
    int srok, vklad;

    if (!input(&vklad, &srok)) {
        return 1;    
    }

    vklad = calc(srok, vklad);  
    printf("\nCуммa вклада на момент окончания срока: %d\n", vklad);	
    return 0;
}
   

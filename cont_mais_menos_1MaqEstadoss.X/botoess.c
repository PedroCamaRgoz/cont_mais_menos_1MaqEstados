/*
 * File:   botoess.c
 * Author: Pedro
 *
 * Created on 6 de Março de 2021, 16:15
 */


#include <xc.h>
#include "config.h"

#define BMAIS PORTDbits.RD2 // botao +
#define BMENOS PORTDbits.RD3 // botao -



void botao_init (void)
{
    TRISDbits.TRISD2 = 1; // pino b +1
    TRISDbits.TRISD3 = 1; // pino b -1
    
}

char botaomais(void)
{

    return(BMAIS);
    
}


char botaomenos (void)
{

    return(BMENOS);
}


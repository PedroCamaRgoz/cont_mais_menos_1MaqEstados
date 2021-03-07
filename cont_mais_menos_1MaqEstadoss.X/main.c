/*
 * File:   main.c
 * Author: Pedro
 *
 * Created on 6 de Março de 2021, 15:53
 */


#include <xc.h>
#include "config.h"
#include "display7seg.h"
#include "botoess.h"
#include "delay.h"


void main(void) 
{
    botao_init();
    disp7seg_init();
    
    unsigned char   cont = 0;
    unsigned char estado = 0;
   
    while(1)
    {
        digitos7seg(cont);  
        
        switch (estado)
        {
            case 0: 
                    if (botaomais()==1) estado=1;
                    if(botaomenos()==1) estado=2;
                    break;
          
            case 1: 
                    if (botaomais()==0) estado=3;
                    break;
         
            case 2: 
                    if (botaomenos()==0) estado=4;
                    break;
            case 3 : 
                    cont= cont==9? 0 : cont+1;
                    estado = 0;
                    break;
                     
            case 4 : 
                    cont = cont==0 ? 9 :cont-1; 
                    estado = 0;
                    break;
        }
             delay(1);

    }
    
}

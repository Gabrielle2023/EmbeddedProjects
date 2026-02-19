#include "stm32f10x.h"
/*le code ajoute une variable code ajoute une variable globale modulo et une fonction blink() 
qui fait clignoter la LED moins vite qu'avant : elle ne change l'état de la LED que toutes les 10 passes dans la boucle 
(grâce à modulo % cycle == 0). La LED clignote donc à une fréquence visible (environ 10 fois plus lente que la boucle sans délai).*/

char modulo; //incrémenté à chaque appel
	
void configure(){
    RCC->APB2ENR |=  RCC_APB2ENR_IOPAEN ;
    GPIOA->CRL = GPIOA->CRL & ~(0xF << 4*5); 
    GPIOA->CRL = GPIOA->CRL | (0x01 << 4*5);
	
}

void blink(){  
    char cycle = 10;
    modulo = modulo+1; 
 
    if (modulo %cycle == 0) 
    { 
        modulo = 0; 
        GPIOA->ODR ^= (1 << 5); 
    } 
}  

int main (void) 
{
		configure();
    while(1) 
    { 
			blink();
    } 
    return 0; 
}


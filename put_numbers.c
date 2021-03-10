#include <stdio.h>
#include "put_numbers.h"
void newline(){
    putchar('\n');
}
static int put_digit(int chiffre) {
        if ((chiffre < 0) || (chiffre > 9)) {
                return -1; 
        }   

        if (putchar(chiffre + '0') == EOF) {
                return -1;
        }
        return 0;
}
/*Exo 18*/
static int put_hdigit(int h) {
        if ((h < 0) || (h > 15)) {
                return -1; 
        }
        else{
        	if (h<10){
        		put_digit(h);
            }else{
				if (putchar(55+h) == EOF) {
                	return -1; 
            	}
        	}
        }   
        return 0;
}


/* exercice 19 */ 
static int putdec2(int nombre) {
        int nbchiffres = 0;
        int v=1;

        int n = nombre;
        while (n != 0) {
            n = n / 10;
            nbchiffres++;
            v=v*10;
        }
        v=v/10;
        
        while  (nbchiffres!=0) {
            
            if (put_digit((nombre / v) % 10) == -1) return -1;
            v=v/10;

            nbchiffres--;
        }  
}



int putdec(int nombre) {
    if (nombre > 0) {
        putdec2(nombre);
    } else if (nombre < 0) {
        nombre = -nombre;
        putchar('-');
        putdec2(nombre);
    }else {
        putchar('0');
    }
}

int putbin(unsigned int nombre) {
    if (nombre > 1) putbin(nombre >> 1);
    if (putchar('0' + (nombre & 1)) == EOF) return -1;
}

int puthex(unsigned int h){
    if(h>15) puthex(h>>4);
    if (put_hdigit(h)==-1) return -1;
}

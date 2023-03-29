#include "definitions.h"
#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

// Definindo um novo tipo para passagem de parâmetros para as funções


//-----------------------------------------------------------------------------
void MyGlDraw(void) {
    //*************************************************************************
    // Chame aqui as funções do mygl.h
    //*************************************************************************
    pixel pixels[17];
    // inicializando os pixels 
    pixels[0].x = 256;
    pixels[0].y = 256;
    pixels[0].R = 255;
    pixels[0].G = 0;
    pixels[0].B = 0;
    pixels[0].A = 255;

    pixels[1].x = 512;
    pixels[1].y = 100;
    pixels[1].R = 0;
    pixels[1].G = 255;
    pixels[1].B = 0;
    pixels[1].A = 255;

    pixels[2].x = 400;
    pixels[2].y = 0;
    pixels[2].R = 0;
    pixels[2].G = 0;
    pixels[2].B = 255;
    pixels[2].A = 255;

    pixels[3].x = 256;
    pixels[3].y = 0;
    pixels[3].R = 255;
    pixels[3].G = 0;
    pixels[3].B = 0;
    pixels[3].A = 255;

    pixels[4].x = 100;
    pixels[4].y = 0;
    pixels[4].R = 0;
    pixels[4].G = 255;
    pixels[4].B = 0;
    pixels[4].A = 250;

    pixels[5].x = 0;
    pixels[5].y = 100;
    pixels[5].R = 0;
    pixels[5].G = 0;
    pixels[5].B = 255;
    pixels[5].A = 255;

    pixels[6].x = 0;
    pixels[6].y = 256;
    pixels[6].R = 255;
    pixels[6].G = 255;
    pixels[6].B = 255;
    pixels[6].A = 255;

    pixels[7].x = 0;
    pixels[7].y = 256;
    pixels[7].R = 0;
    pixels[7].G = 0;
    pixels[7].B = 255;
    pixels[7].A = 255;

    pixels[8].x = 0;
    pixels[8].y = 400;
    pixels[8].R = 0;
    pixels[8].G = 0;
    pixels[8].B = 255;
    pixels[8].A = 255;

    pixels[9].x = 100;
    pixels[9].y = 512;
    pixels[9].R = 0;
    pixels[9].G = 0;
    pixels[9].B = 255;
    pixels[9].A = 255;

    pixels[10].x = 256;
    pixels[10].y = 512;
    pixels[10].R = 0;
    pixels[10].G = 0;
    pixels[10].B = 255;
    pixels[10].A = 255;

    pixels[11].x = 400;
    pixels[11].y = 512;
    pixels[11].R = 0;
    pixels[11].G = 0;
    pixels[11].B = 255;
    pixels[11].A = 255;

    pixels[12].x = 512;
    pixels[12].y = 400;
    pixels[12].R = 0;
    pixels[12].G = 0;
    pixels[12].B = 255;
    pixels[12].A = 255;

    pixels[13].x = 512;
    pixels[13].y = 256;
    pixels[13].R = 0;
    pixels[13].G = 0;
    pixels[13].B = 255;
    pixels[13].A = 255;

    pixels[14].x = 384;
    pixels[14].y = 384;
    pixels[14].R = 0;
    pixels[14].G = 255;
    pixels[14].B = 255;
    pixels[14].A = 255;

    pixels[15].x = 128;
    pixels[15].y = 384;
    pixels[15].R = 50;
    pixels[15].G = 205;
    pixels[15].B = 50;
    pixels[15].A = 255;

    pixels[16].x = 256;
    pixels[16].y = 128;
    pixels[16].R = 255;
    pixels[16].G = 0;
    pixels[16].B = 255;
    pixels[16].A = 255;
   
   
    //PutPixel(250,250,250,0,0,250);
    
    // DrawLine(pixels[0], pixels[1]);
    // DrawLine(pixels[0], pixels[2]);
    // DrawLine(pixels[0], pixels[3]);
    // DrawLine(pixels[0], pixels[4]);
    // DrawLine(pixels[0], pixels[5]);
    // DrawLine(pixels[0], pixels[6]);
    // DrawLine(pixels[0], pixels[7]);
    // DrawLine(pixels[0], pixels[8]);
    // DrawLine(pixels[0], pixels[9]);
    // DrawLine(pixels[0], pixels[10]);
    // DrawLine(pixels[0], pixels[11]);
    // DrawLine(pixels[0], pixels[12]);
    // DrawLine(pixels[0], pixels[13]);

    // chamando a função passando os pixels como parametro
    DrawTriangle(pixels);

}



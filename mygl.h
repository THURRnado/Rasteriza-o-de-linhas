#ifndef _MYGL_H_
#define _MYGL_H_
#endif

#include "definitions.h"

//-----------------------------------------------------------------------------
void MyGlDraw(void);

//*****************************************************************************
// Defina aqui as suas funções gráficas
//*****************************************************************************

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Coloca um pixel na coordenada desejada e com a cor da combinação de RGBA inserida
void PutPixel(int x, int y, int R, int G, int B, int A){

FBptr[4 * x + 4 * y * IMAGE_WIDTH + 0] = R;
FBptr[4 * x + 4 * y * IMAGE_WIDTH + 1] = G;
FBptr[4 * x + 4 * y * IMAGE_WIDTH + 2] = B;
FBptr[4 * x + 4 * y * IMAGE_WIDTH + 3] = A;

}

//////////////////////////////////////////////////////////////////////////////////////////////

//É possível traçar linhas que vão de 0 a 45°
void DrawLine1(int xi, int yi, int xf, int yf, int R, int G, int B, int A){

int dy = yf - yi;
int dx = xf - xi;
int x = xi;
int y = yi;
int e = 0;

while(x <= xf){

PutPixel(x, y, R, G, B, A);
    
x = x + 1;
e = e - (2 * dy);

if(e >= dx){
	
	y = y - 1;
	e = e - (2*dx);
	
		}
	}

}

///////////////////////////////////////////////////////////////////////////////////////////

//É possível traçar linhas que vão de 45° até 90°
void DrawLine2(int xi, int yi, int xf, int yf, int R, int G, int B, int A){

int dy = yf - yi;
int dx = xf - xi;
int x = xi;
int y = yi;
int e = 0;

while(y >= yf){

PutPixel(x, y, R, G, B, A);
    
y = y - 1;
e = e - (2 * dx);

if(e <= dy){
	
	x = x + 1;
	e = e - (2*dy);
	
		}
	}

}

//////////////////////////////////////////////////////////////////////////////////////////////

//É possível traçar linhas que vão de 270° até 315°
void DrawLine7(int xi, int yi, int xf, int yf, int R, int G, int B, int A){

int dy = yf - yi;
int dx = xf - xi;
int x = xi;
int y = yi;
int e = 0;

while(y <= yf){

PutPixel(x, y, R, G, B, A);
    
y = y + 1;
e = e + (2 * dx);

if(e >= dy){
	
	x = x + 1;
	e = e - (2*dy);
	
		}
	}

}

/////////////////////////////////////////////////////////////////////////////////////////////

//É possível traçar linhas que vão de 315° até 360°
void DrawLine8(int xi, int yi, int xf, int yf, int R, int G, int B, int A){

int dy = yf - yi;
int dx = xf - xi;
int x = xi;
int y = yi;
int e = 0;

while(x <= xf){

PutPixel(x, y, R, G, B, A);
    
x = x + 1;
e = e + (2 * dy);

if(e >= dx){
	
	y = y + 1;
	e = e - (2*dx);
	
		}
	}

}

//////////////////////////////////////////////////////////////////////////////////////////////

//É possível traçar linhas que vão de 90° até 135°
void DrawLine3(int xi, int yi, int xf, int yf, int R, int G, int B, int A){

int dy = yf - yi;
int dx = xf - xi;
int x = xi;
int y = yi;
int e = 0;

while(y >= yf){

PutPixel(x, y, R, G, B, A);
    
y = y - 1;
e = e + (2 * dx);

if(e <= dy){
	
	x = x - 1;
	e = e - (2*dy);
	
		}
	}

}

//////////////////////////////////////////////////////////////////////////////////////////////

//É possível traçar linhas que vão de 135° até 180°
void DrawLine4(int xi, int yi, int xf, int yf, int R, int G, int B, int A){

int dy = yf - yi;
int dx = xf - xi;
int x = xi;
int y = yi;
int e = 0;

while(x >= xf){

PutPixel(x, y, R, G, B, A);
    
x = x - 1;
e = e + (2 * dy);

if(e <= dx){
	
	y = y - 1;
	e = e - (2*dx);
	
		}
	}

}

//////////////////////////////////////////////////////////////////////////////////////////////

//É possível traçar linhas que vão de 180° até 225°
void DrawLine5(int xi, int yi, int xf, int yf, int R, int G, int B, int A){

int dy = yf - yi;
int dx = xf - xi;
int x = xi;
int y = yi;
int e = 0;

while(y <= yf){

PutPixel(x, y, R, G, B, A);
    
y = y + 1;
e = e - (2 * dx);

if(e >= dy){
	
	x = x - 1;
	e = e - (2*dy);
	
		}
	}

}

//////////////////////////////////////////////////////////////////////////////////////////////

//É possível traçar linhas que vão de 225° até 270°
void DrawLine6(int xi, int yi, int xf, int yf, int R, int G, int B, int A){

int dy = yf - yi;
int dx = xf - xi;
int x = xi;
int y = yi;
int e = 0;

while(x >= xf){

PutPixel(x, y, R, G, B, A);
    
x = x - 1;
e = e - (2 * dy);

if(e <= dx){
	
	y = y + 1;
	e = e - (2*dx);
	
		}
	}

}

////////////////////////////////////////////////////////////////////////////////////////////////////////

//traça uma linha reta quando x for crescendo
void DrawLine9(int xi, int yi, int xf, int yf, int R, int G, int B, int A){

int dy = yf - yi;
int dx = xf - xi;
int x = xi;
int y = yi;
int e = 0;

while(x <= xf){

PutPixel(x, y, R, G, B, A);
    
x = x + 1;

}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

//traça uma linha reta quando x for decrescendo
void DrawLine10(int xi, int yi, int xf, int yf, int R, int G, int B, int A){

int dy = yf - yi;
int dx = xf - xi;
int x = xi;
int y = yi;
int e = 0;

while(x >= xf){

PutPixel(x, y, R, G, B, A);
    
x = x - 1;

}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

//traça uma linha reta quando y for crescendo
void DrawLine11(int xi, int yi, int xf, int yf, int R, int G, int B, int A){

int dy = yf - yi;
int dx = xf - xi;
int x = xi;
int y = yi;
int e = 0;

while(y <= yf){

PutPixel(x, y, R, G, B, A);
    
y = y + 1;

}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

//traça uma linha reta quando y for decrescendo
void DrawLine12(int xi, int yi, int xf, int yf, int R, int G, int B, int A){

int dy = yf - yi;
int dx = xf - xi;
int x = xi;
int y = yi;
int e = 0;

while(y >= yf){

PutPixel(x, y, R, G, B, A);
    
y = y - 1;

}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////

//Testa entre quais angulos a reta pedida será traçada e retorna uma das oito
//funções definidas acima. Caso os valores não sejam reconhecidos retorna um erro
void DrawLine(int xi, int yi, int xf, int yf, int R, int G, int B, int A){

int dy = yf - yi;
int dx = xf - xi;

//Testa se a linha pedida está entres 0° à 45°
if((dx >= (dy*-1)) && (dx > 0) && (dy < 0)){

 DrawLine1(xi, yi, xf, yf, R, G, B, A);

//Testa se a linha pedida está entres 45° à 90°
}else if(((dy*-1) >= dx) && (dx > 0) && (dy < 0)){

 DrawLine2(xi, yi, xf, yf, R, G, B, A);

//Testa se a linha pedida está entres 90° à 135°
}else if(((dy*-1) >= (dx*-1)) && (dx < 0) && (dy < 0)){

 DrawLine3(xi, yi, xf, yf, R, G, B, A);

//Testa se a linha pedida está entres 135° à 180°
}else if(((dx*-1) >= (dy*-1)) && (dx < 0) && (dy < 0)){

 DrawLine4(xi, yi, xf, yf, R, G, B, A);

//Testa se a linha pedida está entres 180° à 225°
}else if(((dx*-1) >= dy) && (dx < 0) && (dy > 0)){

 DrawLine5(xi, yi, xf, yf, R, G, B, A);

//Testa se a linha pedida está entres 225° à 270°
}else if((dy >= (dx*-1)) && (dx < 0) && (dy > 0)){

 DrawLine6(xi, yi, xf, yf, R, G, B, A);

//Testa se a linha pedida está entres 270° à 315°
}else if((dy >= dx) && (dx > 0) && (dy > 0)){

 DrawLine7(xi, yi, xf, yf, R, G, B, A);

//Testa se a linha pedida está entres 315° à 360°
}else if((dx >= dy) && (dx > 0) && (dy > 0)){

 DrawLine8(xi, yi, xf, yf, R, G, B, A);

//Testa se a linha reta é para x > 0
}else if((dy == 0) && (dx > 0)){

 DrawLine9(xi, yi, xf, yf, R, G, B, A);

//Testa se a linha reta é para x < 0
}else if((dy == 0) && (dx < 0)){

 DrawLine10(xi, yi, xf, yf, R, G, B, A);

//Testa se a linha reta é para y > 0
}else if((dx == 0) && (dy > 0)){

 DrawLine11(xi, yi, xf, yf, R, G, B, A);

//Testa se a linha reta é para y < 0
}else if((dx == 0) && (dy < 0)){

 DrawLine12(xi, yi, xf, yf, R, G, B, A);

}else{

printf("Erro! numeros inválidos\n");

exit(0);

}

}

////////////////////////////////////////////////////////////////////////////////////////////////////

//Desenha um triângulo de acordo com os três vertices apontados
void DrawTriangle(int x1, int y1, int R1, int G1, int B1, int A1, int x2, int y2, int R2, int G2, int B2, int A2, int x3, int y3, int R3, int G3, int B3, int A3){

//O final da linha 1 se interliga com o começo da 2
DrawLine(x1, y1, x2, y2, R1, G1, B1, A1);

//O final da linha 2 se interliga com o começo da 3
DrawLine(x2, y2, x3, y3, R2, G2, B2, A2);

//O final da linha 3 se interliga com o começo da 1
DrawLine(x3, y3, x1, y1, R3, G3, B3, A3);

}



















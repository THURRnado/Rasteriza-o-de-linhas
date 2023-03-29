#ifndef _MYGL_H_
#define _MYGL_H_
#endif

#include "definitions.h"

// Definindo um novo tipo para passagem de parâmetros para as funções
typedef struct {
    int x;
    int y;
    int R;
    int G;
    int B;
    int A;
}pixel;

//-----------------------------------------------------------------------------
void MyGlDraw(void);

//*****************************************************************************
// Defina aqui as suas funções gráficas
//*****************************************************************************



//Coloca um pixel na coordenada desejada e com a cor da combinação de RGBA inserida
void PutPixel(int x, int y, int R, int G, int B, int A) {

	FBptr[4 * x + 4 * y * IMAGE_WIDTH + 0] = R;
	FBptr[4 * x + 4 * y * IMAGE_WIDTH + 1] = G;
	FBptr[4 * x + 4 * y * IMAGE_WIDTH + 2] = B;
	FBptr[4 * x + 4 * y * IMAGE_WIDTH + 3] = A;

}



//É possível traçar linhas que vão de 0 a 45°
void DrawLine1(pixel pixel1, pixel pixel2){

	int dy = pixel2.y - pixel1.y;
	int dx = pixel2.x - pixel1.x;
	int x = pixel1.x;
	int y = pixel1.y;
	int e = 0;


	while(x <= pixel2.x){

		PutPixel(x, y, pixel1.R, pixel1.G, pixel1.B, pixel1.A);
			
		x = x + 1;
		e = e - (2 * dy);

		if(e >= dx){
			
			y = y - 1;
			e = e - (2*dx);
			
		}
	}

}


//É possível traçar linhas que vão de 45° até 90°
void DrawLine2(pixel pixel1, pixel pixel2){

	int dy = pixel2.y - pixel1.y;
	int dx = pixel2.x - pixel1.x;
	int x = pixel1.x;
	int y = pixel1.y;
	int e = 0;
	

	while(y >= pixel2.y){

		PutPixel(x, y, pixel1.R, pixel1.G, pixel1.B, pixel1.A);
			
		y = y - 1;
		e = e - (2 * dx);

		if(e <= dy){
			
			x = x + 1;
			e = e - (2*dy);
			
		}
	}

}

//É possível traçar linhas que vão de 90° até 135°
void DrawLine3(pixel pixel1, pixel pixel2){

	int dy = pixel2.y - pixel1.y;
	int dx = pixel2.x - pixel1.x;
	int x = pixel1.x;
	int y = pixel1.y;
	int e = 0;

	while(y >= pixel2.y){

	PutPixel(x, y, pixel1.R, pixel1.G, pixel1.B, pixel1.A);
		
	y = y - 1;
	e = e + (2 * dx);

		if(e <= dy){
			
			x = x - 1;
			e = e - (2*dy);
			
		}
	}

}

//É possível traçar linhas que vão de 135° até 180°

void DrawLine4(pixel pixel1, pixel pixel2){

	int dy = pixel2.y - pixel1.y;
	int dx = pixel2.x - pixel1.x;
	int x = pixel1.x;
	int y = pixel1.y;
	int e = 0;

	while(x >= pixel2.x){

		PutPixel(x, y, pixel1.R, pixel1.G, pixel1.B, pixel1.A);
			
		x = x - 1;
		e = e + (2 * dy);

		if(e <= dx){
			
			y = y - 1;
			e = e - (2*dx);
			
		}
	}

}

//É possível traçar linhas que vão de 180° até 225°
void DrawLine5(pixel pixel1, pixel pixel2){

	int dy = pixel2.y - pixel1.y;
	int dx = pixel2.x - pixel1.x;
	int x = pixel1.x;
	int y = pixel1.y;
	int e = 0;

	while(x >= pixel2.x){

	PutPixel(x, y, pixel1.R, pixel1.G, pixel1.B, pixel1.A);
		
		x = x - 1;
		e = e - (2 * dy);

		if(e <= dx){
			
			y = y + 1;
			e = e - (2*dx);
			
		}
	}

}

//É possível traçar linhas que vão de 225° até 270°
void DrawLine6(pixel pixel1, pixel pixel2){

	int dy = pixel2.y - pixel1.y;
	int dx = pixel2.x - pixel1.x;
	int x = pixel1.x;
	int y = pixel1.y;
	int e = 0;

	while(y <= pixel2.y){

		PutPixel(x, y, pixel1.R, pixel1.G, pixel1.B, pixel1.A);
			
		y = y + 1;
		e = e - (2 * dx);

		if(e >= dy){
			
			x = x - 1;
			e = e - (2*dy);
			
		}
	}

}

//É possível traçar linhas que vão de 270° até 315°
void DrawLine7(pixel pixel1, pixel pixel2){

	int dy = pixel2.y - pixel1.y;
	int dx = pixel2.x - pixel1.x;
	int x = pixel1.x;
	int y = pixel1.y;
	int e = 0;

	while(y <= pixel2.y){

		PutPixel(x, y, pixel1.R, pixel1.G, pixel1.B, pixel1.A);
			
		y = y + 1;
		e = e + (2 * dx);

		if(e >= dy){
			
			x = x + 1;
			e = e - (2*dy);
			
		}
	}

}


//É possível traçar linhas que vão de 315° até 360°
void DrawLine8(pixel pixel1, pixel pixel2){

	int dy = pixel2.y - pixel1.y;
	int dx = pixel2.x - pixel1.x;
	int x = pixel1.x;
	int y = pixel1.y;
	int e = 0;

	while(x <= pixel2.x){

		PutPixel(x, y, pixel1.R, pixel1.G, pixel1.B, pixel1.A);
			
		x = x + 1;
		e = e + (2 * dy);

		if(e >= dx){
			
			y = y + 1;
			e = e - (2*dx);
			
		}
	}

}


//traça uma linha reta quando x for crescendo
void DrawLine9(pixel pixel1, pixel pixel2){

	int dy = pixel2.y - pixel1.y;
	int dx = pixel2.x - pixel1.x;
	int x = pixel1.x;
	int y = pixel1.y;
	int e = 0;

	while(x <= pixel2.x){

	PutPixel(x, y, pixel1.R, pixel1.G, pixel1.B, pixel1.A);
		
	x = x + 1;

	}
}


//traça uma linha reta quando x for decrescendo
void DrawLine10(pixel pixel1, pixel pixel2){

	int dy = pixel2.y - pixel1.y;
	int dx = pixel2.x - pixel1.x;
	int x = pixel1.x;
	int y = pixel1.y;
	int e = 0;

	while(x >= pixel2.x){

		PutPixel(x, y, pixel1.R, pixel1.G, pixel1.B, pixel1.A);
			
		x = x - 1;

	}
}


//traça uma linha reta quando y for crescendo
void DrawLine11(pixel pixel1, pixel pixel2){

	int dy = pixel2.y - pixel1.y;
	int dx = pixel2.x - pixel1.x;
	int x = pixel1.x;
	int y = pixel1.y;
	int e = 0;

	while (y <= pixel2.y) {

		PutPixel(x, y, pixel1.R, pixel1.G, pixel1.B, pixel1.A);
			
		y = y + 1;

	}
}


//traça uma linha reta quando y for decrescendo
void DrawLine12(pixel pixel1, pixel pixel2){

	int dy = pixel2.y - pixel1.y;
	int dx = pixel2.x - pixel1.x;
	int x = pixel1.x;
	int y = pixel1.y;
	int e = 0;

	while(y >= pixel2.y) {

		PutPixel(x, y, pixel1.R, pixel1.G, pixel1.B, pixel1.A);
		
		y = y - 1;

	}
}


// Testa qual o ângulo e a direção na qual a reta será traçada e retorna uma das oito
// funções definidas acima. Caso os valores não sejam reconhecidos, retorna um erro.
void DrawLine(pixel pixel1, pixel pixel2){

	int dy = pixel2.y - pixel1.y;
	int dx = pixel2.x - pixel1.x;

		//Testa se a linha pedida está entres 0° à 45°
	if((dx >= (dy*-1)) && (dx > 0) && (dy < 0)){

		//DrawLine1(xi, yi, xf, yf, R, G, B, A);
		DrawLine1(pixel1 , pixel2);

		//Testa se a linha pedida está entres 45° à 90°
	}else if(((dy*-1) >= dx) && (dx > 0) && (dy < 0)){

		DrawLine2(pixel1 , pixel2);

		//Testa se a linha pedida está entres 90° à 135°
	}else if(((dy*-1) >= (dx*-1)) && (dx < 0) && (dy < 0)){

		DrawLine3(pixel1 , pixel2);

		//Testa se a linha pedida está entres 135° à 180°
	}else if(((dx*-1) >= (dy*-1)) && (dx < 0) && (dy < 0)){

		DrawLine4(pixel1 , pixel2);

		//Testa se a linha pedida está entres 180° à 225°
	}else if(((dx*-1) >= dy) && (dx < 0) && (dy > 0)){

		DrawLine5(pixel1 , pixel2);

		//Testa se a linha pedida está entres 225° à 270°
	}else if((dy >= (dx*-1)) && (dx < 0) && (dy > 0)){

		DrawLine6(pixel1 , pixel2);

		//Testa se a linha pedida está entres 270° à 315°
	}else if((dy >= dx) && (dx > 0) && (dy > 0)){

		DrawLine7(pixel1 , pixel2);

		//Testa se a linha pedida está entres 315° à 360°
	}else if((dx >= dy) && (dx > 0) && (dy > 0)){

		DrawLine8(pixel1 , pixel2);

		//Testa se a linha reta é para x > 0
	}else if((dy == 0) && (dx > 0)){

		DrawLine9(pixel1 , pixel2);

		//Testa se a linha reta é para x < 0
	}else if((dy == 0) && (dx < 0)){

		DrawLine10(pixel1 , pixel2);

		//Testa se a linha reta é para y > 0
	}else if((dx == 0) && (dy > 0)){

		DrawLine11(pixel1 , pixel2);

		//Testa se a linha reta é para y < 0
	}else if((dx == 0) && (dy < 0)){

		DrawLine12(pixel1 , pixel2);

	}else{

		printf("Erro! Números inválidos\n");

		exit(0);

	}

}


//Desenha um triângulo de acordo com os três vertices apontados
void DrawTriangle(pixel pixels[]){

	//O final da linha 1 se interliga com o começo da 2
	DrawLine(pixels[14], pixels[15]);

	//O final da linha 2 se interliga com o começo da 3
	DrawLine(pixels[15], pixels[16]);

	//O final da linha 3 se interliga com o começo da 1
	DrawLine(pixels[16], pixels[14]);

}


















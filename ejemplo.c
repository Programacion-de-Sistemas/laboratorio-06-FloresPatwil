#include "chess.h"
#include "figures.h"
void display(){
  /* char** blackKnight = reverse(knight);
  interpreter(blackKnight);
  ---------------------------------------
  EJERCICIO 1 cuadro blanqui negro
  char** Black = reverse(whiteSquare);
  char** White = whiteSquare;
  char** Union = join(White, Black);

  char** Suceso = repeatH(Union,4);
  interpreter(Suceso);
  
  //EJERCICIO 2 cuadro negri blanco
  char** Black = reverse(whiteSquare);
  char** Union = join(Black, whiteSquare);

  char** Suceso = repeatH(Union,4);
  interpreter(Suceso); */
  //EJERCICIO 3  Creacion del tablero 4 x 8
  char** Black = reverse(whiteSquare);
  char** Union = join(Black, whiteSquare);

  char** Suceso = repeatH(Union,4);
  char** Espejo =flipV(Suceso);

  char** UnionFilas = up(Suceso , Espejo);
  char** Tablero = repeatV(UnionFilas,4);
  interpreter(Tablero);
}

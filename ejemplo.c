#include "chess.h"
#include "figures.h"
void display(){
  /*char** blackKnight = reverse(knight);
  interpreter(blackKnight);
  char** Square = repeatH(whiteSquare, 8);
  interpreter(Square);*/

  //cuadro blanqui negro
  char** Black = reverse(whiteSquare);
  char** White = whiteSquare;
  char** Union = join(White, Black);

  char** Suceso = repeatH(Union,4);
  interpreter(Suceso);
}

#include "chess.h"
#include "figures.h"

void display(){
  /*char** blackKnight = reverse(knight);
  interpreter(blackKnight);
  char** Square = repeatH(whiteSquare, 8);
  interpreter(Square);
  */
  char** Black = reverse(whiteSquare);
  char** White = whiteSquare;
  char** Union = join(Black, White);
  char** Suceso = repeatH(Union, 4);
  interpreter(Union);
}

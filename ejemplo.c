#include "chess.h"
#include "figures.h"

void display(){
  /*char** blackKnight = reverse(knight);
  interpreter(blackKnight);
  char** Square = repeatH(whiteSquare, 8);
  interpreter(Square);
  */
  char** Black = reverse(repeatH(whiteSquare,0));
  char** White = repeatH(whiteSquare,0);

  char** Union = join(Black, White);
  interpreter(Union);
}

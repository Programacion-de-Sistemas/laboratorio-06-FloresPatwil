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
  interpreter(Suceso); 
  //EJERCICIO 3  Creacion del tablero 4 x 8
  char** Black = reverse(whiteSquare);
  char** Union = join(Black, whiteSquare);

  char** Suceso = repeatH(Union,4);
  char** Espejo =flipV(Suceso);

  char** UnionFilas = up(Suceso , Espejo);
  char** Tablero = repeatV(UnionFilas,4);
  interpreter(Tablero);
  //EJERCICIO 4 Primera fila de fichas blancas 
  char** blackSquare = reverse(whiteSquare);
  char** Union = join(blackSquare, whiteSquare);
  char** SFilNB = repeatH(Union,4);
  
  char** CabTorAlf = join(join(rook, knight),bishop);//rook/knight/bishop
  char** AlfTorCab = join(join(bishop,knight),rook); //bishop/knight/rook
  char** CinDer = join(join(king,queen),AlfTorCab);    //5 piezas derechas superiore

  char** PiezasS = join(CabTorAlf,CinDer);             //8 piezas superiores
  char** FilaS = superImpose(PiezasS,SFilNB);
  / EJERCICIO 5 Tablero negri blanco pero ahora con piezas negras del inferior tablero
  //fila negro y blanca
  char** blackSquare = reverse(whiteSquare);
  char** Union = join(blackSquare, whiteSquare);
  char** SFilNB = repeatH(Union,4);
  
  char** CabTorAlf = join(join(rook, knight),bishop);//rook/knight/bishop
  char** AlfTorCab = join(join(bishop,knight),rook); //bishop/knight/rook
  char** CinDer = join(join(king,queen),AlfTorCab);    //5 piezas derechas superiore
  //  como son las mismas piezas aplicamos revese 
  //  para ponerlas de color negro
  char** PiezasS = reverse(join(CabTorAlf,CinDer));             //8 piezas superiores
  char** FilaS = superImpose(PiezasS,SFilNB);

  interpreter(FilaS);

  */
  // EJERCICIO 6 Tablero completo
  char** blackSquare = reverse(whiteSquare);
  char** Union = join(blackSquare, whiteSquare);
  char** SFilNB = repeatH(Union,4);                  //fila negri blanca 1x8
  
  char** CabTorAlf = join(join(rook, knight),bishop);//rook/knight/bishop
  char** AlfTorCab = join(join(bishop,knight),rook); //bishop/knight/rook
  char** CinDer = join(join(king,queen),AlfTorCab);    //5 piezas derechas superiore
  //  como son las mismas piezas aplicamos revese 
  //  para ponerlas de color negro
  char** PiezasS = join(CabTorAlf,CinDer);             //8 piezas superiores
  char** FilaW = superImpose(PiezasS,SFilNB);          //fila BN f blancas superior 
  char** FilaB = reverse(superImpose(PiezasS,SFilNB)); //Fila NB f negras inferior
  
  //Fila Peones Negros
  char** PeonesB = reverse(repeatH(pawn,8));           //peones oscuros  x8
  char** FilPeoB = superImpose(PeonesB,SFilNB);        //peones en tablero Negriblanco

  //Fila Peones Blancos
  char** FilPeoW = reverse(superImpose(PeonesB,SFilNB));//peones blancos x8

  interpreter(FilPeoW);
}

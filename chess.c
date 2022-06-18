#include "chess.h"
#include "figures.h"

char** flipV(char** y){  //espejo vertical de la imagen original
    char *p;
    p = y;
    for(int i=0;i<sizeof(y);i++){
        while(*p != '\0'){
            y[i] = strev(p);
            p++;
        }
    }
    return y;
}

char** flipH(char** y){  //espejo horizontal de la imagen original
    for(int i=sizeof(y); i>=0;i--)
        return y;
}

char** rotateL(char** y){  //Nueva imagen de la rotacion a la izquierda del original

}

char** rotateR(char** y){  //Nueva imagen de la rotacion a la derecha del original

}

char** reverse(char** y){  //imagen contraria a la original

}

char** superImpose(char** y, char** x){  //imagen resultado de imagen superpuesta a otra

}

char** join(char** y, char** x){  //imagen resultado de una imagen al lado de otra

}

char** up(char** y, char** x){  //imegen resultado de una imagen sobre otra

}

char** repeatH(char** y, int x){  //imagen resultado de repetir horizontalmente

}

char** repeatV(char** y, int x){  //imagen resultado de repetir verticalmente

}

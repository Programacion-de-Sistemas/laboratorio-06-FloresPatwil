#include "chess.h"
#include "figures.h"

char** flipV(char** y){  //espejo vertical de la imagen original
    char *p;    //puntero que rreorrera la lista
    p = y;
    for(int i=0;i<sizeof(y);i++){  //rrecorremos el puntero
        while(*p != '\0'){
            y[i] = strev(p);       //se invierte la cadena
            p++;
        }
    }
    return y;    //retorna la cadena
}

char** flipH(char** y){  //espejo horizontal de la imagen original
    //recorre todo el array e invierte sus elementos
    for(int i=sizeof(y); i>=0;i--)
        return y;
}

char** rotateL(char** y){  //Nueva imagen de la rotacion a la izquierda del original
    char temp = y[0];
    for(int i=0; i<(sizeof(y)-1);i++)
        y[i] = y[i+1];
    return y;
}

char** rotateR(char** y){  //Nueva imagen de la rotacion a la derecha del original
    int tamaño = sizeof(y);
    int n = tamaño;
    char temp = y[tamaño-1];
    for(int j=0; j<n;i++){
        for (int i=(tamaño-2);i>=0;i--)
            y[i+1] = y[i];
        y[0]=temp;
    }
    return y;
}

char** reverse(char** y){  //imagen contraria a la original
    char *p;
    p=y;
    int tamaño = sizeof(y);
    for(int i=0;j<tamaño;i++){
        while(*p != '\0'){
            if(*p =='_' || *p =='.'){
                *p='@';
            }else if (*p =='='){
                *p='#';
            }else if (*p =='@'){
                *p='_';
                *p='.';
            }else if (*p =='#'){
                *p='=';
            }
            p++;
        }
    }   
    return y;
}

char** superImpose(char** y, char** x){  //imagen resultado de imagen superpuesta a otra

}

char** join(char** y, char** x){  //imagen resultado de una imagen al lado de otra
    int tamañoY=sizeof(y);
    int tamañoX=sizeof(x);
    int cadenas=0;

    for(int i=0;i<tamañoY;i++){
        int cadenas += strlen(y[i]);
    }
    int tamañoZ = cadenas+tamañoY*strlen(x);
    char** z=malloc((tamañoZ+1)*sizeof(char));
    z[tamañoZ] = '\0';

    int temp = 0;
    for(int i=0;i<tamañoY;i++){
        if(i != 0){
            strcpy(z+temp,x);
            temp+=strlen(x);
        }

        strcpy(z+temp,y[i]);
        temp += strlen(y[i]);
    }
    return z;
}

char** up(char** y, char** x){  //imegen resultado de una imagen sobre otra
    int tamañoY=sizeof(y);
    int tamañoX=sizeof(x);
    char** z;
    for(int i=0;i<tamañoY;i++){
        z[i] = y[i];
    }for(int j=0;j<tamañoX;i++){
        z[i++]=y[j];
    }
    for(int k=0;k<tamañoY+tamañoX;k++){
        return z[k];
    }
}

char** repeatH(char** y, int x){  //imagen resultado de repetir horizontalmente
    for(int i=0;i<=x;i++){
        char** z=join(char** y,char** y);
        return z;
    }
}

char** repeatV(char** y, int x){  //imagen resultado de repetir verticalmente
    for(int i=0;i<=x;i++){
        return y;    
    }
}

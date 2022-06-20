#include "chess.h"
#include "figures.h"

//dado el tamano considerale que manejan as figuras
//se repite podemos definir el tamano
int tamano=59;
char** flipV(char** y){  //espejo vertical de la imagen original
    char *p;    //puntero que rreorrera la lista
    p = y;
    for(int i=0;i<sizeof(tamano;i++){  //rrecorremos el puntero
        while(*p != '\0'){
            y[i] = strev(p);       //se invierte la cadena
            p++;
        }
    }
    return y;    //retorna la cadena
}

char** flipH(char** y){  //espejo horizontal de la imagen original
    //recorre todo el array e invierte sus elementos
    char* temp;
    for(int i=0;i<t/2;i++){
        temp=y[i];
        y[i]=y[t-i-1];
        y[t-i-1]=temp;
    }
    return y;
}

char** rotateL(char** y){  //Nueva imagen de la rotacion a la izquierda del original
    char temp = y[0];  //agarramos el primer array
    for(int i=0; i<(sizeof(y)-1);i++)  //rrecorremos el array
        y[i] = y[i+1];  //rotamos
    return y;
}

char** rotateR(char** y){  //Nueva imagen de la rotacion a la derecha del original
    int tamaño = sizeof(y);  //tamano del array
    int n = tamaño;
    char temp = y[tamaño-1];  //tomamos el ultimo elemento   
    for(int j=0; j<n;i++){  //recorremos el array
        for (int i=(tamaño-2);i>=0;i--)  //voltemos a la derecha uno por uno
            y[i+1] = y[i];
        y[0]=temp;
    }
    return y;
}

char** reverse(char** y){  //imagen contraria a la original
    char *p;  //creamos puntero
    p=y;
    int tamaño = sizeof(y);  //tamano del array
    for(int i=0;j<tamaño;i++){  //recorre el array
        while(*p != '\0'){  //todos los que no cean 0
            if(*p =='_' || *p =='.'){  //invierte el color definido
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
    return y;
}

char** join(char** y, char** x){  //imagen resultado de una imagen al lado de otra
    int tamañoY=sizeof(y);  //tam 1 cadena
    int tamañoX=sizeof(x);  //tam 2 cadena
    int cadenas=0;

    for(int i=0;i<tamañoY;i++){
        int cadenas =+ strlen(y[i]);  //extraemos elem de la cadena
    }
    int tamañoZ = cadenas+tamañoY*strlen(x); //juntamos los tamnos de las cadenas
    char** z=malloc((tamañoZ+1)*sizeof(char));
    z[tamañoZ] = '\0';  //almacenmos en la cadena
    //recorremos segunda cadena
    int temp = 0;
    for(int i=0;i<tamañoY;i++){
        if(i != 0){
            strcpy(z+temp,x);
            temp+=strlen(x);
        }

        strcpy(z+temp,y[i]);  //se almacena cadena Z
        temp += strlen(y[i]);
    }
    return z;  //nueva cadena con ambos
}

char** up(char** y, char** x){  //imegen resultado de una imagen sobre otra
    /se trata de unir los arrays mas no sus elementos   
    char** z;
    //Cadena Y
    for(int i=0;i<tamaño;i++){
        z[i] = y[i];
     //Cadena X      
    }for(int j=0;j<tamaño;j++){
        z[j++]=x[j];
    }
    //Juntar el tamaño de ambas cadenas
    for(int k=0;k<tamaño+tamaño;k++){
        return z[k];
    }
}

char** repeatH(char** y, int x){  //imagen resultado de repetir horizontalmente
    //se repite n veces la funcion
    for(int i=0;i<=x;i++){
        char** z=join(char** y,char** y);
        return z;
    }
}

char** repeatV(char** y, int x){  //imagen resultado de repetir verticalmente
    //se repite n veces la funcion
    for(int i=0;i<=x;i++){
        return y;    
    }
}

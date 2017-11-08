#include<iostream>
#include<cstring>
using namespace std ;
int main(){
 char a[100];
 char p[100];
 char alf[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"; //se ponen las letras completas del alfabeto minuscula y mayuscula
 cout<<"ingrese palabra "<<endl;// le pedimos al usuario que ingrese la frase palabra que quiera cifrar
 gets(p); //nos sirve para que se ponga toda la frase
 int j;//la palabra ingresada
 for(int i=0;i<strlen(p);i++){ // de declara i igual a 0 y el i menor, que nuestra longitud de la cadena va a ir incrememntando
  j=0;
  while(j<52){ //es menor que 52 porque se cuentan todas las letras del abecedario establecidas resultando 51 pero s epone 52 para insdicar que solo antes de 52 osea 51 funcionara
   if(p[i]==alf[j] && (j<23||(j>=26 &&j<49))){ // sila palbara que es i es igual a j que es la primera palabra de mi alfabeto y mi jota sea menor a 23 y menor que 4 por la x que es caso especial 
   
    p[i]=alf[j+3];//entonces la palabra en posision i es igual al alfabeta¡o sumado en 3
    j=52;
      }
   if(p[i]==alf[j] && (j>=23 && j<26)){ //si la nuestra palabara se en cuentra en la posicion a y j es menor a 23 y 26 
       if(p[i]=='x'){ // si es x enotnces 
        p[i]='a'; // es igual a a
    }
    if(p[i]=='y'){
        p[i]='b';
    }
    if(p[i]=='z'){
        p[i]='c';
    }
    j=52;//sale del while
   }
   if(p[i]==alf[j] && (j>=49 && j<52)){ //el rango cambia 
       if(p[i]=='X'){
        p[i]='A';
    }
    if(p[i]=='Y'){
        p[i]='B';
    }
    if(p[i]=='Z'){
        p[i]='C';
    }
    j=52; //sale del while
   }
      j++;
  }
  
 }
 cout<<"la frase encriptada es: \n" << p <<"\n";//muestra el resultado de la encriptacion
 
 
 cout<<"ingrese palabra "<<endl;// le pedimos al usuario que ingrese la frase palabra que quiera cifrar
 gets(a); //nos sirve para que se ponga toda la frase
 int h;//la palabra ingresada
 for(int i=0;i<strlen(a);i++){ // de declara i igual a 0 y el i menor, que nuestra longitud de la cadena va a ir incrememntando
  h=0;
  while(h<52){ //es menor que 52 porque se cuentan todas las letras del abecedario establecidas resultando 51 pero s epone 52 para insdicar que solo antes de 52 osea 51 funcionara
   if(a[i]==alf[h] && (h<23||(h>=26 &&h<49))){ // sila palabra que es i es igual a h que es la primera palabra de mi alfabeto y mi jota sea menor a 23 y menor que 4 por la x que es caso especial 
   
    a[i]=alf[h-3];//entonces la palabra en posision i es igual al alfabeto restado en 3
    h=52;
      }
   if(a[i]==alf[h] && (h>=23 && h<26)){ //si la nuestra palabara se en cuentra en la posicion a y h es menor a 23 y 26 
       if(a[i]=='x'){ // si es x enotnces 
        a[i]='a'; // es igual a a
    }
    if(a[i]=='y'){
        a[i]='b';
    }
    if(a[i]=='z'){
        a[i]='c';
    }
    h=52;//sale del while
   }
   if(a[i]==alf[h] && (h>=49 && h<52)){ //el rango cambia 
       if(a[i]=='X'){
        a[i]='A';
    }
    if(a[i]=='Y'){
        a[i]='B';
    }
    if(a[i]=='Z'){
        a[i]='C';
    }
    h=52; //sale del while
   }
      h++;
  }
  
 }
 cout<<"la frase desencriptada es: \n" << a;//muestra el resultado de la encriptacion
 return 0;
 
 
 
 
 
 
 
 //TABLA PARA SABER EL NUMERO DE CADA LETRA
 //a b c d e f g h i j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z 
 //0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 
 //A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z
 //26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51  
 }

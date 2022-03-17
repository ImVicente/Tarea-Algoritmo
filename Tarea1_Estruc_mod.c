#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


//Definiendo funciones
void menu_principal();
void leer_archivo();
void nombre_archivo();
void crear_archivo();
void comparar_palabras_claves();
char palabra1 [50];
char palabra2 [50];
char NombreArchivo [1000];
char NombreArchivoN [1000];

//ejecutar
int main(){


    nombre_archivo();
    crear_archivo();
    //comparar_palabras_claves();

    //menu_principal();
    return 0;
}

void nombre_archivo() {

    printf("Bienvenido al programa, porfavor ingrese el nombre del archivo a trabajar \n");
    printf("Recuerde que debe ser un archivo .txt\n");
    printf("Nombre del archivo: ");
        scanf("%s",&NombreArchivo);
    printf("Perfecto, el nombre de su archivo es: %s\n",&NombreArchivo );
    printf("Ahora ingrese el nombre del nuevo archivo que sera creado \n");
    printf("Recuerde que el nombre debe ser diferente al que ingreso originalmente \n");
    printf("Nombre del nuevo archivo: ");
        scanf("%s",&NombreArchivoN);
    int igualdad;
    bool repetir=true;

    while(repetir){

    system("cls");
    int igualdad = strcmp(NombreArchivo, NombreArchivoN);

    if (igualdad == 0) {
            printf("Recuerde que el nombre debe ser diferente al que ingreso originalmente, porfavor ingrese uno nuevo: \n");
            scanf("%s",&NombreArchivoN);}
    if (igualdad != 0) {
            printf("El nuevo archivo se llamara %s \n",&NombreArchivoN );
            printf("Por favor ingrese cualquier tecla para continuar\n");
            _getch();
            repetir=false;}

    };
    menu_principal();
    _getch();
    return 0;

    }
//Funcion
void menu_principal()
{
    int opcion;
    bool repetir = true;

    do {
        system("cls");

        // Texto del menú
        printf("\n");
        printf("\n\n\t\t\tMenu de Opciones\n");
        printf("\n");
        printf("\n\t1: Decodificar \n");
        printf("\t2: Codificar \n");
        printf("\t0: Salir\n");
        printf("\n");

        printf("\tIngrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: leer_archivo();
                repetir=false;
                break;

            case 2: leer_archivo();
                repetir=false;
                break;

            case 0:
            	repetir = false;
            	break;
        }
    } while (repetir);

    return 0;
}
// Función leer archivo
void leer_archivo ()
{
   FILE *fp;
   int c;

   fp = fopen(strcat(NombreArchivo,".txt"),"r");
   while(1) {
      c = fgetc(fp);
      if( feof(fp) ) {
         break ;
      }
      printf("%c", c);
   }
   fclose(fp);

}
void crear_archivo()
{

    FILE *fp;

fp=fopen(strcat(NombreArchivoN,".txt") , "wt");


fputs("Primer linea\n",fp);
    fputs("Segunda linea\n",fp);
    fputs("Tercer linea\n",fp);
    fclose(fp);
    }
//Comparar palabras claves

void comparar_palabras_claves()
{

    int igualdad;
    int largo_1;
    int largo_2;
    bool repetir=true;

    do{
        system("cls");
        printf("Ahora ingresara las palabras claves, por favor recuerden que deben tener el mismo largo y deben ser distintas. \n");
        printf("Considere que la tecla espacio igual se considerada para el largo de las palabras. \n");
        printf("Palabra clave 1: \n");
        scanf("%s",&palabra1);
        largo_1= strlen(palabra1);
        printf("Palabra clave 2: \n");
        scanf("%s",&palabra2);
        largo_2= strlen(palabra2);


        int igualdad = strcmp(palabra1, palabra2);
        if (igualdad < 0 &&  largo_1==largo_2){
            printf("Las palabras claves si cumplen las condiciones. \n");
            _getch();
            repetir=false;
        }
        if (igualdad==0 && largo_1==largo_2){
            printf("Las palabras son iguales, por favor vuelva a ingresar las palabras.\n");
            _getch();
        }
        if (igualdad<0  && largo_1!=largo_2){
            printf("Las palabras no tienen el mismo largo, por favor vuelva a ingresar las palabras.\n");
            _getch();
        }
        if (igualdad==0 && largo_1!=largo_2){
            printf("Las palabras no cumplen ninguna condicion, por favor vuelva a ingresarlas.\n");
            _getch();
        }
    }while(repetir);
    return 0;

}



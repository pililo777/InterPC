/* minieditor.c modificado */
#include <alloc.h>


#define xrun


extern double var[127];
extern char contadorvar;
extern char contador;

#include "vars.h"
/*extern char variables[127][127];
extern char constantes[127][127]; */

extern int idx_prg;
extern int nodos;

#include <stdio.h>
#include "stdlib.h"
#include <string.h>


extern int idx_vec;
extern double * arrayVectores[32];
extern int idx_win;
extern FILE * yyin;
extern int err_number;

#include "nodo.h"


extern ast far * pila_programas[32];
extern ast far * procedimientos[127];
extern int idx_prg;
extern  long memoria;
extern int linenumber;

void liberar_mem();


void liberar_nodo( ast * p, int n)

{
    //printf("memoria: %d\n", memoria);
    //elnodo * p;
    //p=a;


	if (p==NULL) return;


/*
	if (p->tipo == stop)
	    pausar();
*/


	if (p == pila_programas[n]) {
		if (p->subnodos == 0)
		    {
			free(p);
			nodos--;
			//printf("no hay nodos para liberar\n");
			return;
		    }

	    if (p->subnodos > 0) {
		liberar_nodo(p->nodo1, n);
/*
	    free(p->nodo1);
	    memoria -= sizeof (struct elnodo);
	    printf("librando un nodo: %ld\n", memoria);
*/
	    }

	if (p->subnodos > 1) {
	    liberar_nodo(p->nodo2, n);
/*
	    free(p->nodo2);
	    memoria -= sizeof (struct elnodo);
	    printf("librando un nodo: %ld\n", memoria);
*/
	}

	if (p->subnodos > 2) {
	    liberar_nodo(p->nodo3,n);
/*
	    free(p->nodo3);
	    memoria -= sizeof (struct elnodo);
	    printf("librando un nodo: %ld\n", memoria);
*/
	}

	if (p->subnodos > 3) {
	    liberar_nodo(p->nodo4,n );
/*
	    free(p->nodo4);
	    memoria -= sizeof (struct elnodo);
	    printf("librando un nodo: %ld\n", memoria);
*/
	}

	if (p->subnodos > 4) {
	    liberar_nodo(p->nodo5,n);
/*
	    free(p->nodo5);
	    memoria -= sizeof (struct elnodo);
	    printf("librando un nodo: %ld\n", memoria);
*/
	}

	   free(p);
	   memoria -= (long) sizeof (struct ast);
	   nodos--;
       //    printf("librando el nodo raiz: %ld\n", memoria);



	pila_programas[n] = NULL;
	return;
    }
    else {

	if (p->subnodos == 0)
	{
	    free(p);
	    memoria -= (long) sizeof (struct ast);
	    nodos--;
	 //   printf("librando un nodo sin subnodos: %ld\n", memoria);
	    return;
	}


	   if (p->subnodos > 0) {
	    liberar_nodo(p->nodo1, n);

/*
	    free(p->nodo1);
	    memoria -= sizeof (struct elnodo);
	    printf("librando un nodo: %ld\n", memoria);
*/

    }

	if (p->subnodos > 1) {
            liberar_nodo(p->nodo2, n);
/*
            free(p->nodo2);
            memoria -= sizeof (struct elnodo);
            printf("librando un nodo: %ld\n", memoria);
*/
}

        if (p->subnodos > 2) {
            liberar_nodo(p->nodo3, n);
/*
	    free(p->nodo3);
            memoria -= sizeof (struct elnodo);
            printf("librando un nodo: %ld\n", memoria);
*/
        }

        if (p->subnodos > 3) {
            liberar_nodo(p->nodo4, n);
/*
            free(p->nodo4);
            memoria -= sizeof (struct elnodo);
            printf("librando un nodo: %ld\n", memoria);
*/
        }

        if (p->subnodos > 4) {
            liberar_nodo(p->nodo5, n);
/*
            free(p->nodo5);
            memoria -= sizeof (struct elnodo);
	    printf("librando un nodo: %ld\n", memoria);
*/
        }
           
	   free(p);
           memoria -= (long) sizeof (struct ast);
           nodos--;
           
       //    printf("librando el nodo: %ld\n", memoria);
           return;

    }
    //return
        
}
 
extern int gtk_iniciado;
extern int ejecuta_desde_editor;

int
main_anterior (int argc, char *argv[])
//main_old()
{
  
    return 0;
}

 
extern short inter_flag;

void liberar_mem() {
    char str1 [100];
    char str2 [100];
    char str3 [100];
//  printf("check9 liberando memoria\n");
            liberar_nodo(pila_programas[0], 0);
	    //liberar_nodo(pila_programas[31], 1);

            while (idx_prc>0)
            {
                idx_prc--;
		liberar_nodo(procedimientos[idx_prc], idx_prc);
            }
            
            //liberar vectores:
            while (idx_vec>0)
            {
                int tamano = 0;   /*TODO: calcular tamano mas adelante, se han comentado las lineas*/
		double * vector;
                idx_vec--;
                
                vector = arrayVectores[idx_vec];


                //tamano = malloc__size(vector);

                //tamano = malloc_usable_size(vector);

                free(vector);
                memoria -= tamano;
	    }
            
 
             sprintf(str1, "Constantes: %d", (int) contador );
             sprintf(str2, "Variables: %d", (int) contadorvar );
             sprintf(str3, "Memoria: %li -- nodos: %d", (long) memoria, nodos );
 


}



extern char modo_pausa;
extern char en_pausa;
extern char buff1[128];



  

extern int instalavar(char);
extern char *yytext;


FILE * fichero = (FILE *) 0;
 
void old_main(int argc, const char **argv) {

    int i;


    if (argc == 1) {

	printf("analizando el programa: %s\n", argv);


    }



    if (argc > 0) { //  {     //LO normal es :   (argc > 1)  --  para depurar con un programa: (argc = 1)

	i = 1;
	do {

	    yyin = fopen(argv[1], "r"); //comentar para depurar
	    if (yyin != NULL) {

		{
		    yyparse();
		    fclose(yyin);
		    i++;
		}
	    }
	    else {
		printf("imposible abrir fichero.\n");
		return;
	    }
	} while (i != argc); //  (i != argc);  //   // ; para depurar:  (i==1); modificar abajo tambien(run)

	//ejecuciona los programas de la pila.

	// CORRE HASTA 32 PROGRAMAS:

	i = 1;
	idx_win = 0;
	do {
	    execut(pila_programas[i - 1]);
	    printf("hemos finalizado\n");
	    i++;
	} while (i != argc); // (i != argc);     //para depurar:  ( (i == 1); //
	// exit (0);

	// libera la memoria de los vectores o matrices enteras

	if (idx_vec > 0) {
	    for (i = idx_vec - 1; i >= 0; i--) {
		double * vector;
		vector = (double*) arrayVectores[i];
		printf("liberando vector %d\n", i);
		// free(vector);  //revisar porqué da error desde que se hizo la ventana grafica.
	    }
	}

	return;
    }
    else
	printf("usar: inter.exe nombreprograma \[nombreprograma....\]\n");
}





extern char buff2[10][128];
/*
     CARGA PROGRAMAS, EL NUMERO DE PROGRAMAS A CARGAR VA EN EL PARAMETRO ARGC
     LA POSICION EN LA PILA DE PROGRAMAS VIENE DADA POR IDX_PROG
*/

extern void initProcedimientos();

int cargar(int argc, const  char argv[][128])
  {

    int i; int k;

    if (argc > 1) { //  {     //LO normal es :   (argc > 1)  --  para depurar con un programa: (argc = 1)
	//yyin = fopen("c:\\inter\\tst10.pr", "r");
	i = 1;
	do {
	    printf("abriendo el fichero %s\n", argv[i]);
	    yyin = fopen(argv[i], "r"); //comentar para depurar
	    if (yyin != NULL) {
		//printf("abierto.....\n");
		{
		    printf("cargando en pila programas indice %d\n", idx_prg);
		    //initProcedimientos();
		    yyparse();
		    printf("memoria: %li\n", (long) memoria);
		    linenumber  = 1;
		    fclose(yyin);
		    i++;
		}
	    }
	    else {
		printf("imposible abrir fichero.\n");

						k = getchar();
						return;
	    }
	} while (i != argc);    //  (i != argc)  para depurar:  (i==1); modificar abajo tambien(run)

	return; //para el modulo python
    }
    else
	printf("usar: inter.exe nombreprograma [nombreprograma....]\n");
}



extern int mquit;
extern int gtk_iniciado;
extern void initProcedimientos();

void runall() {
    int argc = 0;
    char *argv[1];

    int i;

    memoria = 0;


    i = 0;
    idx_win = 0;
    do {
	printf("ejecutando programa %d\n", i);
	execut(pila_programas[i]);
	i++;
    } while (pila_programas[i]!=0); // (i != argc);     //para depurar:  ( (i == 1); //
    // exit (0);
    mquit = 0;
    return; //para el modulo python
}



#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

//***********DEFINICIONES******************************
typedef struct nodoarbol * puntarbol;

typedef struct nodoarbol{
  char sinonimo [10];
  puntarbol izq;
  puntarbol der;
}nodoarbol;

typedef struct nodolista * puntlista;

typedef struct nodolista{
  char palabra [10];
  puntarbol raiz;
  puntlista ant;
  puntlista sig;
}nodolista;

typedef struct archivo{
  char palabra [10];
  char sinonimos [10];
}archivo;


//**********FUNCIONES************
void INIMATRIZ (puntlista mat[27][27])
{
  int i,j;
  for (i=0; i<27; i++)
	  for (j=0; j<27; j++)
		  mat[i][j] = NULL;
}

puntlista POSICION (char palabra [10], puntlista matriz[27][27], int & a, int & b, int & c)
{
  c = 1;
  switch (palabra [0])
  {
	 case 'A': case 'a':
		palabra[0] = 'a'; a = 0; break;
	 case 'B':  case 'b':
		palabra[0] = 'b'; a = 1; break;
	 case 'C':  case 'c':
		palabra[0] = 'c'; a = 2; break;
	 case 'D': case 'd':
		palabra[0] = 'd';a = 3; break;
	 case 'E':  case 'e':
		palabra[0] = 'e'; a = 4; break;
	 case 'F': case 'f':
		palabra[0] = 'f'; a = 5; break;
	 case 'G': case 'g':
		palabra[0] = 'g'; a = 6; break;
	 case 'H': case 'h':
		palabra[0] = 'h'; a = 7; break;
	 case 'I': case 'i':
		palabra[0] = 'i'; a = 8; break;
	 case 'J': case 'j':
		palabra[0] = 'j'; a = 9; break;
	 case 'K': case 'k':
		palabra[0] = 'k'; a = 10; break;
	 case 'L': case 'l':
		palabra[0] = 'l'; a = 11; break;
	 case 'M': case 'm':
		palabra[0] = 'm'; a = 12; break;
	 case 'N': case 'n':
		palabra[0] = 'n'; a = 13; break;
	 case 'Ñ': case 'ñ':
		palabra[0] = 'ñ'; a = 14; break;
	 case 'O': case 'o':
		palabra[0] = 'o'; a = 15; break;
	 case 'P': case 'p':
		palabra[0] = 'p'; a = 16; break;
	 case 'Q': case 'q':
		palabra[0] = 'q'; a = 17; break;
	 case 'R': case 'r':
		palabra[0] = 'r'; a = 18; break;
	 case 'S': case 's':
		palabra[0] = 's'; a = 19; break;
	 case 'T': case 't':
		palabra[0] = 't'; a = 20; break;
	 case 'U': case 'u':
		palabra[0] = 'u'; a = 21; break;
	 case 'V': case 'v':
		palabra[0] = 'v'; a = 22; break;
	 case 'W': case 'w':
		palabra[0] = 'w'; a = 23; break;
	 case 'X': case 'x':
		palabra[0] = 'x'; a = 24; break;
	 case 'Y': case'y':
		palabra[0] = 'y'; a = 25; break;
	 case 'Z': case 'z':
		palabra[0] = 'z'; a = 26; break;
  }
  switch (palabra [1])
  {
	 case 'A': case 'a':
		palabra[1] = 'a'; b = 0; break;
	 case 'B':  case 'b':
		palabra[1] = 'b'; b = 1; break;
	 case 'C':  case 'c':
		palabra[1] = 'c'; b = 2; break;
	 case 'D': case 'd':
		palabra[1] = 'd'; b = 3; break;
	 case 'E':  case 'e':
		palabra[1] = 'e'; b = 4; break;
	 case 'F': case 'f':
		palabra[1] = 'f'; b = 5; break;
	 case 'G': case 'g':
		palabra[1] = 'g'; b = 6; break;
	 case 'H': case 'h':
		palabra[1] = 'h'; b = 7; break;
	 case 'I': case 'i':
		palabra[1] = 'i'; b = 8; break;
	 case 'J': case 'j':
		palabra[1] = 'j'; b = 9; break;
	 case 'K': case 'k':
		palabra[1] = 'k'; b = 10; break;
	 case 'L': case 'l':
		palabra[1] = 'l'; b = 11; break;
	 case 'M': case 'm':
		palabra[1] = 'm'; b = 12; break;
	 case 'N': case 'n':
		palabra[1] = 'n'; b = 13; break;
	 case 'Ñ': case 'ñ':
		palabra[1] = 'ñ'; b = 14; break;
	 case 'O': case 'o':
		palabra[1] = 'o'; b = 15; break;
	 case 'P': case 'p':
		palabra[1] = 'p'; b = 16; break;
	 case 'Q': case 'q':
		palabra[1] = 'q'; b = 17; break;
	 case 'R': case 'r':
		palabra[1] = 'r'; b = 18; break;
	 case 'S': case 's':
		palabra[1] = 's'; b = 19; break;
	 case 'T': case 't':
		palabra[1] = 't'; b = 20; break;
	 case 'U': case 'u':
		palabra[1] = 'u'; b = 21; break;
	 case 'V': case 'v':
		palabra[1] = 'v';b = 22; break;
	 case 'W': case 'w':
		palabra[1] = 'w'; b = 23; break;
	 case 'X': case 'x':
		palabra[1] = 'x'; b = 24; break;
	 case 'Y': case'y':
		palabra[1] = 'y'; b = 25; break;
	 case 'Z': case 'z':
		palabra[1] = 'z'; b = 26; break;
  }
  if (c != 0)
  {
		puntlista l = matriz[a][b];
		return (l);
  }
}

int ESCHAR (char * cadena)    // General
{
 int a;
 int i=0;
 int c=1;
 while(cadena [i]!= NULL && c==1)
 {

	a = (int) cadena [i];
	if (a <= 64 ||(a>=91 && a<=96) || a >= 123)

	  c =	0;

	else
	{
		if(i==0)
		{

		  if(a >= 97 && a <= 122)
		  {
			  a = a - 32;
			  (char) cadena [i] = a;
		  }
	  }
	  else
	  {

		  if(a >= 65 && a <= 90)
		  {
			 a = a + 32;
			 (char)cadena [i] = a;
		  }
	  }
		 i++;
	}
 }
 return(e);
}

puntlista buscarenlista (puntlista & l, char palabra[10])
{
  puntlista ant, r = l;
  while ((r != NULL) && (strcmp(r->palabra, palabra)!= 0))
  {
	 ant = r;
	 r = r -> sig;
  }
  if (r == NULL)
	 return NULL;
  else
	 return r;
}
void nsinonimo (puntarbol & punt, char sinonimo [10], int mostrar)//nuevo sinonimo
{
  puntarbol ant, p = punt;
  while(((p != NULL) && (strcmp (p -> sinonimo, sinonimo)!=0)))
  {
	 ant = p;
	 if(strcmp (p -> sinonimo, sinonimo)!=0)
		p = p -> der;
	 else
		p = p -> izq;
  }
  if (((p != NULL) && (strcmp (p -> sinonimo, sinonimo)==0)))
  {
	 if (mostrar != 3)
	 {
		cout<<"_El sinónimo ya fue previamente ingresado para esa palabra_";
		getch();
	 }
	 clrscr();
  }
  else
  {
	 puntarbol n = new nodoarbol;
	 n -> izq = NULL;
	 n -> der = NULL;
	 strcpy(n -> sinonimo, sinonimo);
	 if (punt == NULL)
	 {
		punt = n;
		if (mostrar != 3)
		{
		  cout<<"El sinónimo fue ingresado"<<endl;
		  getch();
      }
		clrscr();
    }
	 else
	 {
		if(strcmp (ant -> sinonimo, n -> sinonimo)!=0)
		  ant -> der = n;
		else
		{
		  ant -> izq = n;
		}
		if (mostrar != 3)
		{
		  cout<<"_El sinónimo fue ingresado_"<<endl;
		  getch();
		}
		clrscr();
	 }
  }
}

void agregaralista (puntlista matriz[27][27], char palabra [10], puntlista & ent1, puntlista & ent2, int mostrar)
{
  puntlista lista;
  int n; //en este caso no hace falta porque ya fue comprobrado antes
  int a, b; //fila-columna
  lista = POSICION (palabra, matriz, a, b, n);
  puntlista l;
  if (lista == NULL)
	 l = ent1;
  else
	 l = lista;
  while (((l != NULL)  && (strcmp(l->palabra, palabra)!= 0)))
  {
	 l = l -> sig;
  }
  if (l != NULL  &&  strcmp(l->palabra,palabra)==0)
  {
	 if (mostrar != 3)
	 {
		cout<<endl<<"Ya existe esa palabra en el diccionario"<<endl;
		getch();
    }
	 clrscr();
  }
  else
  {
  puntlista n = new nodolista;
  strcpy(n -> palabra, palabra);
  n->raiz = NULL;
	 if ((ent1 == NULL) && (ent2 == NULL)) //Si es unico
	 {
		ent1 = ent2 = n;
		n -> sig = n -> ant = NULL;
	 }
	 else
	 {
		if (ent1 == l)//Si es el primero
		{
		  n -> sig = l;
		  n -> ant = NULL;
		  l -> ant = n;
		  ent1 = n;
		}
		else
		{
		  if (l == NULL)//Si es el ultimo
		  {
		  n -> sig = l;
		  n -> ant = ent2;
		  ent2 -> sig = n;
		  ent2 = n;
		  }
		  else //Si esta en el medio
		  {
		  n -> sig = l;
		  n -> ant = l->ant;
		  l -> ant -> sig = n;
		  l -> ant = n;
		  }
		}

	 }
  if (mostrar != 3)
  {
	cout<<"_La palabra fue agregada a la lista_"<<endl;
  }
	if(lista != NULL)
	 cout<<""<<endl;
	else
	{
	  if (((lista == NULL) || (strcmp (lista -> palabra,n -> palabra)!=0)))
	  {
		matriz[a][b] = n;
	  }
	}
  }
}





void listararbol (puntarbol p)
{
  if (p != NULL)
  {
	 listararbol (p -> izq);
		cout<<p -> sinonimo<<endl;
	 listararbol(p -> der);
  }
}

//******************PUNTO 01*************************
void SHOWSIN (puntlista matriz[27][27], puntlista ent)
{
  int c;
  int a, b; //fila-columna
  int flag = 0;
  char palabra [10];
  puntlista l, r;
  cout<<"_Ingrese la palabra para ver sus sinonimos_"<<endl;
  cin>>palabra;
  l = POSICION (palabra, matriz, a, b, c);
  while (c==0)
  {
	 cout<<"Ingrese la palabra nuevamente "<<endl;
	 cin>>palabra;
	 l = POSICION (palabra, matriz, a, b, c);
  }
  if (l == NULL)
	 r = ent;
  else
	 r = l;
  while (((r != NULL) && (strcmp (r -> palabra, palabra) != 0)))
	 r = r->sig;
  if (r==NULL)
  {
	 cout<<"_No existe la palabra en el diccionario_"<<endl;
	 getch();
	 clrscr();
  }
  else
  {
	 cout<<endl;
    cout<<"La palabra: "<<palabra<<" tiene los siguientes sinonimos: "<<endl;
	 listararbol(r->raiz);
	 getch();
    clrscr();
  }
}

//*********PUNTO 02***********
void ADDSIN (puntlista matriz[27][27], puntlista ent)
{
	puntlista r = ent;
	char palabra [10];
	int c, a, b;
	int mostrar = 0;
	puntlista l;
	cout<<"_Ingrese la palabra a buscar en minusculas_"<<endl;
	cin>>palabra;
	char sinonimo [10];
	l = POSICION (palabra, matriz, a, b, c);
	while (c == 0)
	{
	  cout<<"Ingrese la palabra nuevamente ";
	  cin>>palabra;
	  l = POSICION (palabra, matriz, a, b, c);
	}
	if (l == NULL)
	{
		cout<<"No se encuentra en el diccionario la palabra ingresada"<<endl;
		getch();
		clrscr();
	}
	else
	{
		r = l;
		while (((r != NULL) && (strcmp (r -> palabra, palabra) != 0)))
			r = r -> sig;
		if (r == NULL)
			cout<<"No se encuentra en el diccionario la palabra ingresada"<<endl;
		else
		{
		  cout<<"Ingrese el sinonimo que desea agregar"<<endl;
		  cin>>sinonimo;
		  nsinonimo (r -> raiz, sinonimo, mostrar);
		}
	}
}

//PUNTO 3
void NEWWORD (puntlista matriz[27][27], puntlista & ent1, puntlista & ent2)
{
  puntlista l, ant;
  int c, a, b;
  int mostrar = 0;
  char palabra[10];
  char sinonimo[10];
  cout<<"Ingrese la Palabra deseada: "<<endl;
  cin>>palabra;
  l = POSICION (palabra, matriz, a, b, c);
  while (c==0)
  {
	 cout<<"Ingrese la palabra nuevamente "<<endl;
	 cin>>palabra;
	 l = POSICION (palabra, matriz, a, b, c);
  }
  agregaralista (matriz, palabra, ent1, ent2, c);

  while (getch()!= 27)
  {
	 cout<<"Ingrese el sinonimo que desea agregar"<<endl;
	 cin>>sinonimo;
	 l = POSICION(palabra, matriz, a, b, c);
	 puntlista r = l;
	 while ((r != NULL) && (strcmp(r->palabra, palabra)!= 0))
	 {
		ant = r;
		r = r->sig;
	 }
	 nsinonimo (r -> raiz, sinonimo, mostrar);
  }
}



void MOSTRAR (puntlista ent)
{
  while (ent != NULL)
  {
	 cout<<"Palabra: "<<ent -> palabra<<endl;
	 ent = ent -> sig;
  }
}




//***********************************************PUNTO 04
int ELIMINAR_SINONIMO (puntarbol & raiz, char sinonimo [10])
{
 puntarbol p, r=raiz;
 while ((r!=NULL) && (strcmp(r->sinonimo,sinonimo)!=0))
 {
	p = r;
	if (strcmp (r -> sinonimo, sinonimo)!=0)
	  r = r -> der;
	else
	  r = r -> izq;
 }
 if (r == NULL)
  return (0);
 else
 {
	puntarbol c;
	if (r -> izq == NULL)
	 c = r -> der;
	else
	{
		if(r -> der == NULL)
		  c = r->izq;
		else 
		{
		  puntarbol ant;
		  puntarbol q = r -> izq;
		  while (q -> der != NULL)
		  {
			 ant =q;
			 q = q -> der;
		  }
		  if (q != r -> izq)
		  {
			 ant -> der = q -> izq;
			 q -> izq = r -> izq;
		  }
		  q -> der = r -> der;
		  c = q;
		}
	}
	if (r == raiz)
	  raiz = c;
	else
	{
	  if (strcmp (r -> sinonimo, p -> sinonimo)!=0)
		 p->izq = c;
	  else
		 p -> der = c;
	}
	delete(r);
	return(1);
 }

}


void SINONIMO_A_ELIMINAR (puntarbol & raiz)
{
  char sinonimo[10];
  cout<<"Escriba el nombre del sinonimo que desea eliminar"<<endl;
  cin>>sinonimo;
  int seelimino = ELIMINAR_SINONIMO (raiz,sinonimo);
  if (seelimino == 1)
  {
	 cout<<"El sinonimo ha sido eliminado"<<endl;
	 getch();
	 clrscr();
  }
  else
  {
	  cout<<"El sinonimo no ha sido encontrado para la palabra solicitada"<<endl;
     getch();
	  clrscr();
  }
}

void PUNTO4 (puntlista mat[27][27], puntlista ent1, puntlista ent2)
{
	int c, a, b;
	char palabra [10];
	puntlista r, l = NULL;
	cout<<"Escriba la palabra de la cual se quiere eliminar un sinonimo en minusculas"<<endl;
	cin>>palabra;
   l = POSICION (palabra, mat, a, b, c);
	while (c==0)
	{
		cout<<"Ingrese la palabra nuevamente recordando que solo se aceptan letras"<<endl;
		cin>>palabra;
		l = POSICION (palabra, mat, a, b, c);
	}
	if (l == NULL)
	{
	  r = ent1;
	  cout<<"_No existe la palabra en el diccionario_"<<endl;
	  getch();
	  clrscr();
   }
	else
	{
		r = l;
		while (((r != NULL) && (strcmp (r -> palabra, palabra)!= 0)))
			r = r->sig;
		if (strcmp(r -> palabra, palabra) != 0)
		{
		  cout<<"_No existe la palabra en el diccionario_"<<endl;
		  getch();
		  clrscr();
		  clrscr();
		}
		else
		{
		  SINONIMO_A_ELIMINAR (r->raiz);
		}
	}
}

//**********************PUNTO 05
void F_ELIMINAR (puntlista & l, puntlista & ent1,puntlista & ent2)
{
  int c;
  if ((l == ent1) && (l == ent2))
  {
	  ent1 = ent2 = NULL;
	  l = NULL;
  }
  else
  {
	 if(ent1 == l)
	 {
		ent1 = ent1 -> sig;
		ent1 -> ant = NULL;
	 }
	 else
	 {
		if (ent2 == l)
		{
		  ent2 = ent2 -> ant;
		  ent2 -> sig = NULL;
		}
		else
		{
		  l -> ant->sig = l -> sig;
		  l -> sig->ant = l -> ant;
		}
    }
  }
  delete (l);
}

void ELIMINAR (puntlista matriz[27][27], puntlista & ent1, puntlista & ent2)
{
	int a, b;//fila-columna
	int c;
	char palabra [10];
	puntlista l, ant, r;
	cout<<"_Ingrese la palabra a eliminar en minusculas_"<<endl;
	cin>>palabra;
	l = POSICION (palabra, matriz, a, b, c);
	while (c==0)
	{
		cout<<"_Ingrese la palabra nuevamente_"<<endl;
		cin>>palabra;
		l = POSICION (palabra, matriz, a, b, c);
	}
	if (l == NULL)
	{
		cout<<"_No existe la palabra en el diccionario_"<<endl;
		getch();
		clrscr();
	}
	else
	{
		r = l;
		while (((r != NULL) && (strcmp (r -> palabra, palabra)!= 0)))
			r = r->sig;
		if (strcmp(r -> palabra, palabra) != 0)
		{
		  cout<<"_No existe la palabra en el diccionario_"<<endl;
		  getch();
		  clrscr();
		}
		else
		{
        cout<<"_Sinonimos a eliminarse_"<<endl;
		  listararbol (l -> raiz);
		  getch();
		  while(l -> raiz != NULL)
		  {
			 ELIMINAR_SINONIMO (l -> raiz, (l->raiz) -> sinonimo);
			 delete (l -> raiz);
		  }
		  l = POSICION (palabra, matriz, a, b, c);
		  F_ELIMINAR (l, ent1, ent2);
		  cout<<"_Palabra y sus respectivos sinonimos fueron eliminados_"<<endl;
		  getch();
		  clrscr();
		}
	}
}
//PUNTO ARCHIVOS
void DOWNLOAD (puntlista mat[27][27], FILE * A, puntlista & ent1, puntlista & ent2)
{
  int a, b;//fila-columna
  int c;
  int nocartel =3;
  archivo arch;
  A = fopen("archivo.dat","rb");
  if(A != NULL)
  {
    puntlista entlista, l;
    while (! feof (A))
	 {
		int leyo;
		leyo= fread(&arch, sizeof (archivo), 1, A);
		if (leyo != 0)
		{
		  agregaralista (mat, arch.palabra, ent1, ent2, nocartel);
		  l = POSICION (arch.palabra, mat, a, b, c);
		  entlista = buscarenlista (l, arch.palabra);
		  if (entlista != NULL)
		  	nsinonimo (entlista -> raiz, arch.sinonimos, nocartel);
      }
	 }
	 fclose(A);
  }
}

void LLENAR1 (FILE * A, archivo arch, puntarbol raiz, char palabra [10])
{
  if (raiz != NULL)
  {
	 LLENAR1 (A, arch, raiz -> izq, palabra);
	  strcpy(arch.palabra, palabra);
	  strcpy(arch.sinonimos, raiz -> sinonimo);
	  fwrite(&arch, sizeof(archivo), 1, A);
	 LLENAR1 (A, arch, raiz -> der, palabra);
  }
}

void LLENAR2 (FILE * A, archivo arch, char palabra [10])
{
	 LLENAR2 (A, arch, palabra);
	 strcpy(arch.palabra, palabra);
	 strcpy(arch.sinonimos, "");
	 fwrite(&arch, sizeof(archivo), 1, A);
}

void ARCHIVO (FILE * A, puntlista ent)
{
  archivo arch;
  A = fopen("archivo.dat","w");
  if (A != NULL)
  {
	 while(ent != NULL)
	 {
		if (ent -> raiz != NULL)
			LLENAR1 (A, arch, ent -> raiz, ent -> palabra);
		else
			LLENAR2 (A, arch, ent ->palabra);
		ent = ent -> sig;
	 }
	 fclose(A);
  }
  else
	cout<<"_Error abriendo el archivo_"<<endl;
}





void main (void)
{
  char c[10];
  puntlista ent1 = NULL;
  puntlista ent2 = NULL;
  puntlista matriz [27][27];
  FILE * A;
  INIMATRIZ (matriz);
  DOWNLOAD (matriz, A, ent1, ent2);
  cout<<"********* PRESIONE ENTER PARA EL COMIENZO DEL PROGRAMA *********"<<endl;
  getch();
  clrscr();
  do
  {
	 cout<<"********** MENU PRINCIPAL **********"<<endl;
	 cout<<"1_ Mostrar sinonimos de una palabra hasta indicar fin"<<endl;
	 cout<<"2_ Agregar un sinonimo a una palabra existente"<<endl;
	 cout<<"3_ Agregar una palabra nueva a la estructura con todos sus sinonimos"<<endl;
	 cout<<"4_ Eliminar un sinonimo dado de una palabra dada"<<endl;
	 cout<<"5_ Eliminar una palabra del diccionario"<<endl;
	 cout<<"6_ Actualizar Archivo"<<endl;
	 cout<<"7_ Listar el diccionario"<<endl;
	 cout<<"8_ Salir"<<endl;
	 cin>>c;
	 switch (*c)
	 {
		case '1':
		  SHOWSIN (matriz, ent1);
		  break;
		case '2':
		  ADDSIN (matriz, ent1);
		  break;
		case '3':
		  NEWWORD (matriz, ent1, ent2);
		  break;
		case '4':
		  PUNTO4 (matriz, ent1, ent2);
		  break;
		case '5':
		  ELIMINAR (matriz, ent1, ent2);
		  break;
		case '6':
		  ARCHIVO (A, ent1);
		  cout<<"El Archivo fue actualizado"<<endl;
        getch();
		  clrscr();
		  break;
		case '7':
		  cout<<"Estas son las palabras presentes en el diccionario"<<endl;
		  MOSTRAR (ent1);
		  getch();
		  clrscr();
		  break;
		default:
			if (*c != '8')
			{
			  cout<<"***Nro de opcion incorrecto***"<<endl;
			  cout<<"  Presione enter para intentarlo nuevamente"<<endl;
			  getch();
			  clrscr();
			}
			else
			{
            clrscr();
				cout<<"                    ****FIN DE LA APLICACION****"<<endl;
				//ARCHIVO (A, ent1);
				cout<<"El Archivo fue actualizado"<<endl;
				getch();
			}
			break;

	 }
  }while (*c != '9');
}

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <string>
#include <wchar.h>

using namespace std;

// estructura
struct datos
{
    char games[5];
    string juego, clasf, cons, descrip, articulo;
    int price, imp, year, totart;
    int tot;
};

int main()
{
    datos videojuegos[5];
    int opcion;

    printf("\t ***BIENVENIDO A LA TIENDA EN LINEA,QUE DESEA HACER?*** \n");
    printf("1.- Compra de videojuegos \n");
    printf("2.- Renovar membresia de la tienda \n");
    printf("3.- Rentar un videojuego por 7 dias \n");
    printf("4.- Baja de articulos \n");
    printf("5.- Limpiar pantalla \n");
    printf("6.- Salir \n");
    scanf_s("%d", &opcion);

    switch (opcion)
    {
    case 1:

        printf("\t ***informacion sobre el videojuego*** \n");
        printf("1.- Smash Bros \n");
        printf("2.- halo reach \n");
        printf("3.- Call Of Duty \n");
        scanf_s("%d", &opcion);

        for (int i = 0; i < 3; i++)
        {
            if (opcion == 1)
            {
                printf("Nombre del videojuego: Smash Bros \n");
                cin.ignore();
                gets_s(videojuegos[i].games);
                printf("Numero de articulo: 72 \n");
                getline(cin, videojuegos[i].articulo);
                printf("Clasificacion del videojuego: Teen \n");
                getline(cin, videojuegos[i].clasf);
                printf("Consola: Nintedo \n");
                getline(cin, videojuegos[i].cons);
                printf("Descripcíon: Juego de peleas con habilidades unicas \n");
                getline(cin, videojuegos[i].descrip);
                printf("Año de lanzamiento: 1988 \n");
                scanf_s("%d", &videojuegos[i].year);
                printf("Precio: $489 \n");
                scanf_s("%d", &videojuegos[i].price);
                printf("Impuesto: $79 \n");
                scanf_s("%d", &videojuegos[i].imp);
                printf("Total de compra con impuestos: $568 \n");
                scanf_s("%d", &videojuegos[i].price, &videojuegos[i].imp);
                videojuegos[i].tot = (&videojuegos[i].price + videojuegos[i].imp);
            }
            for (int i = 0; i < 3; i++)
            {
                if (opcion == 2)
                {
                    printf("Nombre del videojuego: Halo Reach  \n");
                    printf("Numero de articulo: 117 \n");
                    printf("Clasificacion del videojuego: Mature \n");
                    printf("Consola: Xbox \n");
                    printf("Descripcíon: Un equipo llamado noble 6 tienen la mision de rescatar a la humanidad de una posible exticion a causa de una invasion enemiga llamada covenant, daran su vida si es necesario para que las vidas no se pierdan \n");
                    printf("Año de lanzamiento: 2010 \n");
                    printf("Precio: $700 \n");
                    printf("Impuesto: $112 \n");
                    printf("Total de compra con impuestos: $812 \n");
                }
                for (int i = 0; i < 3; i++)
                {
                    if (opcion == 3)
                    {
                        printf("Nombre del videojuego: Call of Duty \n");
                        printf("Numero de articulo: 01 \n");
                        printf("Clasificacion del videojuego: Mature+18 \n");
                        printf("Consola: Xbox \n");
                        printf("Descripcíon: Un batallon llamado Ghost esta de infiltrado para ppoder extraer informacion de una nacion enemiga para poder erradicar con la vielncia entre paises \n");
                        printf("Año de lanzamiento: 2004 \n");
                        printf("Precio: $300 \n");
                        printf("Impuesto: $48 \n");
                        printf("Total de compra con impuestos: $348 \n");
                    }
                    printf("¿Quiere regresar al menu de inicio? \n");
                    printf("1 si    2 no \n");
                    if (opcion == 1)
                    {
                        //system ("pause");
                        return main();
                    }
                    break;
                }
            }
        }
    case 2:
        break;
    case 3:
        break;
    case 4:
        //pendiente los strings ( c_str)
        for (int i = 0; i < 3; i++)
        {
            printf("total: %d \n", videojuegos[i].tot);
            printf("Juegos: %d \n", videojuegos[i].totart);
        }
        break;
    case 5:
        system("cls");
        //limpiar pantalla
        return main();
        break;
    case 6:
        exit(1);
        //salir
        break;
    }
}
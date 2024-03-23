#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100                     //Aqui defini lo que sería una constante para fijar el limite de caracteres a ingresar a la hora de almacenar los datos.

typedef struct Contact {                     //Use typedef para crear un alias para struct Contact
    char name[50];
    char lastname[50];
    char phone[20];
    char email[50];
    char address[50];
    char card[16];
} ContactInfo;                                  //Aqui elegí un nombre descriptivo a mi parecer.

int main() {
    int numContacts = 0;                        //Se declara una variable para llevar la cuenta del número de contactos que se van colocando. en este caso es numContacts
    ContactInfo contacts[MAX_CONTACTS];

    while (numContacts < MAX_CONTACTS) {                      //Se utiliza un bucle while para leer los datos de los contactos del usuario hasta que se alcance el límite máximo o el usuario no quiera agregar más contactos.
                                                              // Dentro del bucle, se solicitan al usuario los datos de cada contacto.
        printf("Ingresa tu nombre: ");
        scanf("%s", contacts[numContacts].name);

        printf("Ingresa tu apellido: ");
        scanf("%s", contacts[numContacts].lastname);

        printf("Ingresa tu contacto: ");
        scanf("%s", contacts[numContacts].phone);

        printf("Ingresa tu Email: ");
        scanf("%s", contacts[numContacts].email);
                                                            //Se utiliza scanf para leer los datos introducidos y almacenarlos en las variables donde van.
        printf("Ingresa tu direccion: ");
        scanf("%s", contacts[numContacts].address);

        printf("Ingresa tu numero de tu tarjeta de credito: ");
        scanf("%s", contacts[numContacts].card);

        numContacts++;
                                                             //Después de que se han introducido todos los contactos, se muestra una lista con la información de cada uno.

        printf("Querei agregar otro contacto? (y/n): ");
        char response;
        scanf(" %c", &response);
        if (response != 'y') {
            break;
        }
    }

    printf("\nLista de contactos:\n");
    for (int i = 0; i < numContacts; i++) {               //Tambien se utiliza un bucle for para recorrer el array "contacts" y mostrar los datos de cada contacto.
        printf("Contacto %d:\n", i + 1);
        printf("Nombre: %s\n", contacts[i].name);
        printf("Apellido: %s\n", contacts[i].lastname);
        printf("Telefono: %s\n", contacts[i].phone);
        printf("Correo: %s\n", contacts[i].email);
        printf("Direccion: %s\n", contacts[i].address);
        printf("Tarjeta de credito: %s\n", contacts[i].card);
    }

    return 0;
}

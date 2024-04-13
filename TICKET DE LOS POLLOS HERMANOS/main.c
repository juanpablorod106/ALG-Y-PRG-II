#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Ticket {      //se crea una variable struct Ticket.
    char sala[10];
    char asiento[10];
    char hora[10];
    char fecha[10];
    char pelicula[50];
    char nombre[50];
    char apellido[50];
    char cedula[50];
};

int main() {
    FILE *fp;
    struct Ticket ticket;   //llamada ticket para almacenar los detalles del boleto.

//Luego, se solicita al usuario que ingrese los detalles del boleto utilizando la función fgets()

    printf("Ingresa la Sala: ");
    fgets(ticket.sala, sizeof(ticket.sala), stdin);
    ticket.sala[strcspn(ticket.sala, "\n")] = '\0';

    printf("Ingresa el Asiento: ");
    fgets(ticket.asiento, sizeof(ticket.asiento), stdin);
    ticket.asiento[strcspn(ticket.asiento, "\n")] = '\0';

    printf("Ingresa la Hora de la Funcion: ");
    fgets(ticket.hora, sizeof(ticket.hora), stdin);
    ticket.hora[strcspn(ticket.hora, "\n")] = '\0';

    printf("Ingresa la Fecha de la funcion: ");
    fgets(ticket.fecha, sizeof(ticket.fecha), stdin);
    ticket.fecha[strcspn(ticket.fecha, "\n")] = '\0';

    printf("Ingresa el Nombre de la Pelicula: ");
    fgets(ticket.pelicula, sizeof(ticket.pelicula), stdin);
    ticket.pelicula[strcspn(ticket.pelicula, "\n")] = '\0';

    printf("Ingresa tu Nombre: ");
    fgets(ticket.nombre, sizeof(ticket.nombre), stdin);
    ticket.nombre[strcspn(ticket.nombre, "\n")] = '\0';

    printf("Ingresa tu Apellido: ");
    fgets(ticket.apellido, sizeof(ticket.apellido), stdin);
    ticket.apellido[strcspn(ticket.apellido, "\n")] = '\0';

    printf("Ingresa tu ID o Cedula: ");
    fgets(ticket.cedula, sizeof(ticket.cedula), stdin);
    ticket.cedula[strcspn(ticket.cedula, "\n")] = '\0';

    fp = fopen("ticket.txt", "w");  //Abrir el archivo de texto para hacer el ticket

    //Detalles del Ticket:

    fprintf(fp, "              LOS POLLOS HERMANOS CINEMA             \n");
    fprintf(fp, "-----------------------------------------------------\n");
    fprintf(fp, " Sala: %s\n Asiento: %s\n Hora de la Funcion: %s\n Fecha de la Funcion: %s\n Nombre de la Pelicula: %s\n Nombre: %s\n Apellido: %s\n Cedula: %s\n", ticket.sala, ticket.asiento, ticket.hora, ticket.fecha, ticket.pelicula, ticket.nombre, ticket.apellido, ticket.cedula);
    fprintf(fp, "-----------------------------------------------------\n");
    fclose(fp); //Aquí cierra el txt del ticket

    printf("Tu ticket ha sido impreso, disfrute su pelicula.txt\n");

    return 0;
}

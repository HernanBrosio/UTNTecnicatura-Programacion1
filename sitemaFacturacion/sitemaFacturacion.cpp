#include <iostream>
using namespace std;

struct Cliente
{
    int clienteID;
    string nombre;
    string apellido;
    string email;
};

struct Factura
{
    int facturaDia;
    int facturaMes;
    int facturaAnio;
    string numeroFactura;
    int clienteID;
    int productoSKU[10];
    string productoNombre;
    int productoCantidad;
    float precioUnitario;
    float precioTotal;
    float facturaTotal;
};

struct Producto
{
    int productoSKU;
    string productoNombre;
    float productoPrecio;
    int productoStock;
};

void menuPrincipal();
void menuClientes(Cliente clientes[], int &cantidadClientes);
void menuFacturas(Factura facturas[], int &cantidadFacturas, Cliente clientes[], int cantidadClientes, Producto productos[], int cantidadProductos);
void menuCierreCaja();
void agregarCliente(Cliente clientes[], int &cantidadClientes);
void listarCliente(Cliente clientes[], int cantidadClientes);
void inventario(Producto productos[], int cantidadProductos);
void ingresarFactura(Factura facturas[], int &cantidadFacturas, Cliente clientes[], int cantidadClientes, Producto productos[], int cantidadProductos);
void listarFacturas(Factura facturas[], int cantidadFacturas, Cliente clientes[], int cantidadClientes, Producto productos[], int cantidadProductos);
void cierreCaja(Factura facturas[], int cantidadFacturas, Cliente clientes[], int cantidadClientes, Producto productos[], int cantidadProductos);

int main()
{

    menuPrincipal();
}
void menuPrincipal()
{
    static Cliente clientes[100]{};
    static Producto productos[10]{};
    static Factura facturas[100]{};

    static int cantidadClientes = 0;
    static int cantidadProductos = 0;
    static int cantidadFacturas = 0;

    while (true)
    {

        int opcion;
        cout << "----SISTEMA DE FACTURACION----" << endl;
        cout << "--------MENU PRINCIPAL--------" << endl;
        cout << "Elija la opcion deseada: " << endl;
        cout << "1. Gestion de Clientes" << endl;
        cout << "2. Gestion de Facturas" << endl;
        cout << "3. Salir" << endl;
        cout << "-----------------------------" << endl;
        cin >> opcion;

        if (opcion < 1 || opcion > 3)
        {
            cout << "Opcion no valida" << endl;
            continue;
        }
        switch (opcion)
        {
        case 1:
            menuClientes(clientes, cantidadClientes);
            break;
        case 2:
            menuFacturas(facturas, cantidadFacturas, clientes, cantidadClientes, productos, cantidadProductos);
            break;
        case 3:
            cout << "Saliendo del sistema..." << endl;
            return;
        }
    }
}

void menuClientes(Cliente clientes[], int &cantidadClientes)
{
    while (true)
    {

        int opcion;
        cout << "----GESTION DE CLIENTES----" << endl;
        cout << "Elija la opcion deseada: " << endl;
        cout << "1. Agregar Cliente" << endl;
        cout << "2. Listar Clientes" << endl;
        cout << "3. volver al menu anterior" << endl;
        cout << "-----------------------------" << endl;
        cin >> opcion;

        if (opcion < 1 || opcion > 3)
        {
            cout << "Opcion no valida" << endl;
            continue;
        }

        if (opcion == 3)
        {
            return;
        }

        switch (opcion)
        {
        case 1:
            agregarCliente(clientes, cantidadClientes);
            break;
        case 2:
            listarCliente(clientes, cantidadClientes);
            break;
        }
    }
}


void menuFacturas(Factura facturas[], int &cantidadFacturas, Cliente clientes[], int cantidadClientes, Producto productos[], int cantidadProductos)
{
    while (true)
    {

        int opcion;
        cout << "----GESTION DE FACTURAS----" << endl;
        cout << "Elija la opcion deseada: " << endl;
        cout << "1. Ingresar Factura" << endl;
        cout << "2. Listar Facturas" << endl;
        cout << "3. Cierre de caja" << endl;
        cout << "4. volver al menu anterior" << endl;
        cout << "-----------------------------" << endl;
        cin >> opcion;

        if (opcion < 1 || opcion > 4)
        {
            cout << "Opcion no valida" << endl;
            continue;
        }

        if (opcion == 4)
        {
            return;
        }
        switch (opcion)
        {
        case 1:
            ingresarFactura(facturas, cantidadFacturas, clientes, cantidadClientes, productos, cantidadProductos);
            break;
        case 2:
            listarFacturas(facturas, cantidadFacturas, clientes, cantidadClientes, productos, cantidadProductos);
            break;
        case 3:
            menuCierreCaja();
            break;
        }
    }
}

void menuCierreCaja()
{
    while (true)
    {
        int opcion;
        cout << "----CIERRE DE CAJA----" << endl;
        cout << "Elija la opcion deseada: " << endl;
        cout << "1. Total de venta de la sesion" << endl;
        cout << "2. Factura de mayor importe" << endl;
        cout << "3. Promedio de facturacion por factura" << endl;
        cout << "4. Promedio de productos por factura" << endl;
        cout << "5. volver al menu anterior" << endl;
        cout << "-----------------------------" << endl;
        cin >> opcion;

        if (opcion < 1 || opcion > 5)
        {
            cout << "Opcion no valida" << endl;
            menuCierreCaja();
        }

        if (opcion == 5)
        {
            return;
        }
    }
}

void agregarCliente(Cliente clientes[], int &cantidadClientes)
{
    while (cantidadClientes < 100)
    {
        cout << "Ingrese el ID del cliente: " << endl;
        cin >> clientes[cantidadClientes].clienteID;
        cout << "Ingrese el nombre del cliente: " << endl;
        cin >> clientes[cantidadClientes].nombre;
        cout << "Ingrese el apellido del cliente: " << endl;
        cin >> clientes[cantidadClientes].apellido;
        cout << "Ingrese el email del cliente: " << endl;
        cin >> clientes[cantidadClientes].email;

        cantidadClientes++;

        cout << "Cliente agregado exitosamente" << endl;
        char continuar;
        cout << "Desea agregar otro cliente? (s/n): ";
        cin >> continuar;
        if (continuar == 'n' || continuar == 'N')
            return;
    }
    cout << "Se alcanzo el maximo de clientes (100)." << endl;
}

void listarCliente(Cliente clientes[], int cantidadClientes)
{
    if (cantidadClientes == 0)
    {
        cout << "No hay clientes para mostrar." << endl;
        return;
    }
    cout << "----LISTA DE CLIENTES (" << cantidadClientes << ")----" << endl;
    for (int i = 0; i < cantidadClientes; ++i)
    {
        cout << "ID: " << clientes[i].clienteID << endl;
        cout << "Nombre: " << clientes[i].nombre << endl;
        cout << "Apellido: " << clientes[i].apellido << endl;
        cout << "Email: " << clientes[i].email << endl;
        cout << "-----------------------------" << endl;
    }
}

void inventario(Producto productos[], int cantidadProductos)
{
    productos[0] = {9901, "Teclado", 1000, 99};
    productos[1] = {9902, "Mouse", 1500, 99};
    productos[2] = {9903, "Monitor", 1000, 99};
    productos[3] = {9904, "Notebook", 100000, 99};
    productos[4] = {9905, "Webcam", 500, 99};
    productos[5] = {9906, "Barra de sonido", 1100, 99};
    productos[6] = {9907, "Estabilizador de tension", 100, 99};
    productos[7] = {9908, "Soporte de monitor", 50, 99};
    productos[8] = {9909, "Silla Gamer", 20000, 99};
    productos[9] = {9010, "Mousepad", 20, 99};
}

void ingresarFactura(Factura facturas[], int &cantidadFacturas, Cliente clientes[], int cantidadClientes, Producto productos[], int cantidadProductos)
{
    char continuar = 's';
    while (cantidadFacturas < 100 && (continuar == 's' || continuar == 'S'))
    {
        cout << "Ingrese el dia de la factura: " << endl;
        cin >> facturas[cantidadFacturas].facturaDia;
        cout << "Ingrese el mes de la factura: " << endl;
        cin >> facturas[cantidadFacturas].facturaMes;
        cout << "Ingrese el anio de la factura: " << endl;
        cin >> facturas[cantidadFacturas].facturaAnio;
        cout << "Ingrese el numero de la factura: " << endl;
        cin >> facturas[cantidadFacturas].numeroFactura;
        cout << "Ingrese el ID del cliente: " << endl;
        for (int i = 0; i < cantidadClientes; ++i)
        {
            cout << "ID: " << clientes[i].clienteID << " - Nombre: " << clientes[i].nombre << " " << clientes[i].apellido << endl;
        }
        cin >> facturas[cantidadFacturas].clienteID;
        // Quiero que el usuario pueda ver los skus disponibles, quiero que lo ingrese y que si no existe le diga que no existe, quiero que luego ingrese la cantidad y que el precio unitario se cargue solo desde el inventario
        char continuarProducto = 's';
        while (continuarProducto == 's' || continuarProducto == 'S')
        {
            // Mostrar productos disponibles A DESARROLLAR
            cout << "Desea agregar otro producto a la factura? (s/n): ";
            cin >> continuarProducto;
        }
        
        cantidadFacturas++;
        cout << "Factura ingresada exitosamente" << endl;
        cout << "Desea agregar otra factura? (s/n): ";
        cin >> continuar;
    }
}

void listarFacturas(Factura facturas[], int cantidadFacturas, Cliente clientes[], int cantidadClientes, Producto productos[], int cantidadProductos)
{
}
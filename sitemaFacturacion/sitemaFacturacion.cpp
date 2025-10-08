#include <iostream>
using namespace std;

struct Cliente
{
    int clienteID;
    string nombre;
    string apellido;
    string email;
    string direccion;
    int telefono;
};

struct Factura
{
    int facturaDia;
    int facturaMes;
    int facturaAnio;
    string numeroFactura;
    int clienteID;
    string productoSKU;
    string productoNombre;
    int productoCantidad;
    float precioUnitario;
    float precioTotal;
    float descuento;
    float IVA;
    float facturaTotal;
};

struct Producto
{
    string productoSKU;
    string productoNombre;
    string productoDescripcion;
    int productoPrecio;
    int productoStock;
};

void menuPrincipal(int opcion1);
void menuClietes(int opcion1);
void menuProductos(int opcion1);
void menuFacturas(int opcion1);

int main()
{
    int opcion1;
    menuPrincipal(opcion1);
}
void menuPrincipal(int opcion1)
{
    int opcion;
    cout << "---SISTEMA DE FACTURACION---" << endl;
    cout << "--------MENU PRINCIPA--------" << endl;
    cout << "Elija la opcion deseada: " << endl;
    cout << "1. Gestion de Clientes" << endl;
    cout << "2. Gestion de Productos" << endl;
    cout << "3. Gestion de Facturas" << endl;
    cout << "4. Salir" << endl;
    cout << "-----------------------------" << endl;
    cin >> opcion;

    if (opcion < 1 || opcion > 4)
    {
        cout << "Opcion no valida" << endl;
        menuPrincipal(opcion);
    }
    switch (opcion)
    {
    case 1:
        menuClietes(opcion);
        break;
    case 2:
        menuProductos(opcion);
        break;
    case 3:
        menuFacturas(opcion);
        break;
    }
}

void menuClietes(int opcion1)
{
    int opcion;
    cout << "---GESTION DE CLIENTES---" << endl;
    cout << "Elija la opcion deseada: " << endl;
    cout << "1. Agregar Cliente" << endl;
    cout << "2. Modificar Cliente" << endl;
    cout << "3. Buscar Cliente" << endl;
    cout << "4. Listar Clientes" << endl;
    cout << "5. volver al menu anterior" << endl;
    cout << "-----------------------------" << endl;
    cin >> opcion;

    if (opcion < 1 || opcion > 5)
    {
        cout << "Opcion no valida" << endl;
        menuClietes(opcion);
    }

    if (opcion == 5)
    {
        cout << "Opcion no valida" << endl;
        menuPrincipal(opcion);
    }
}

void menuProductos(int opcion1)
{
    int opcion;
    cout << "---GESTION DE PRODUCTOS---" << endl;
    cout << "Elija la opcion deseada: " << endl;
    cout << "1. Agregar Producto" << endl;
    cout << "2. Modificar Producto" << endl;
    cout << "3. Buscar Producto" << endl;
    cout << "4. Inventario" << endl;
    cout << "5. volver al menu anterior" << endl;
    cout << "-----------------------------" << endl;
    cin >> opcion;

    if (opcion < 1 || opcion > 5)
    {
        cout << "Opcion no valida" << endl;
        menuProductos(opcion);
    }

    if (opcion == 5)
    {
        cout << "Opcion no valida" << endl;
        menuPrincipal(opcion);
    }
}

void menuFacturas(int opcion1)
{
    int opcion;
    cout << "---GESTION DE FACTURAS---" << endl;
    cout << "Elija la opcion deseada: " << endl;
    cout << "1. Ingresar Factura" << endl;
    cout << "2. Modificar Factura" << endl;
    cout << "3. Anular Factura" << endl;
    cout << "4. Buscar Factura" << endl;
    cout << "5. Listar Facturas" << endl;
    cout << "6. Cierre de caja" << endl;
    cout << "7. volver al menu anterior" << endl;
    cout << "-----------------------------" << endl;
    cin >> opcion;

    if (opcion < 1 || opcion > 7)
    {
        cout << "Opcion no valida" << endl;
        menuFacturas(opcion);
    }

    if (opcion == 7)
    {
        cout << "Opcion no valida" << endl;
        menuPrincipal(opcion);
    }

}
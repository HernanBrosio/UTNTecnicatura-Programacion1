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
    string productoNombre[10];
    int productoCantidad[10];
    float precioUnitario[10];
    float precioTotalItem[10];
    int cantidadItems = 0;
    float facturaTotal = 0.0f;
};

void menuPrincipal();
void menuClientes(Cliente clientes[], int &cantidadClientes);
void menuFacturas(Factura facturas[], int &cantidadFacturas, Cliente clientes[], int cantidadClientes);
void menuCierreCaja(Factura facturas[], int &cantidadFacturas, Cliente clientes[], int cantidadClientes);
void agregarCliente(Cliente clientes[], int &cantidadClientes);
void listarCliente(Cliente clientes[], int cantidadClientes);
void ingresarFactura(Factura facturas[], int &cantidadFacturas, Cliente clientes[], int cantidadClientes);
void listarFacturas(Factura facturas[], int cantidadFacturas, Cliente clientes[], int cantidadClientes);
void cierreCaja(Factura facturas[], int cantidadFacturas, Cliente clientes[], int cantidadClientes);
void totalVentaSesion(Factura facturas[], int cantidadFacturas);
void facturaMayorImporte(Factura facturas[], int cantidadFacturas, Cliente clientes[], int cantidadClientes);
void promedioFacturacion(Factura facturas[], int cantidadFacturas);
void promedioProductos(Factura facturas[], int cantidadFacturas);

int main()
{

    menuPrincipal();
}

void menuPrincipal()
{
    static Cliente clientes[100]{};
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
            menuFacturas(facturas, cantidadFacturas, clientes, cantidadClientes);
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

void menuFacturas(Factura facturas[], int &cantidadFacturas, Cliente clientes[], int cantidadClientes)
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
            ingresarFactura(facturas, cantidadFacturas, clientes, cantidadClientes);
            break;
        case 2:
            listarFacturas(facturas, cantidadFacturas, clientes, cantidadClientes);
            break;
        case 3:
            menuCierreCaja(facturas, cantidadFacturas, clientes, cantidadClientes);
            break;
        }
    }
}

void menuCierreCaja(Factura facturas[], int &cantidadFacturas, Cliente clientes[], int cantidadClientes)
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
            menuCierreCaja(facturas, cantidadFacturas, clientes, cantidadClientes);
        }

        if (opcion == 5)
        {
            return;
        }

        switch (opcion)
        {
        case 1:
            totalVentaSesion(facturas, cantidadFacturas);
            break;
        case 2:
            facturaMayorImporte(facturas, cantidadFacturas, clientes, cantidadClientes);
            break;
        case 3:
            promedioFacturacion(facturas, cantidadFacturas);
            break;
        case 4:
            promedioProductos(facturas, cantidadFacturas);
            break;
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

void ingresarFactura(Factura facturas[], int &cantidadFacturas, Cliente clientes[], int cantidadClientes)
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

        int items;
        cout << "cuentas items desea agregar a la factura (maximo 10): " << endl;
        cin >> items;
        if (items < 1 || items > 10)
        {
            cout << "Cantidad de items no valida" << endl;
            continue;
        }

        facturas[cantidadFacturas].cantidadItems = 0;
        facturas[cantidadFacturas].facturaTotal = 0.0;

        for (int i = 0; i < items; i++)
        {
            cout << "Ingrese el sku del producto: " << endl;
            cin >> facturas[cantidadFacturas].productoSKU[i];
            cout << "Ingrese el nombre del producto: " << endl;
            cin >> facturas[cantidadFacturas].productoNombre[i];
            cout << "Ingrese la cantidad del producto: " << endl;
            cin >> facturas[cantidadFacturas].productoCantidad[i];
            cout << "Ingrese el precio unitario del producto: " << endl;
            cin >> facturas[cantidadFacturas].precioUnitario[i];
            facturas[cantidadFacturas].precioTotalItem[i] = facturas[cantidadFacturas].productoCantidad[i] * facturas[cantidadFacturas].precioUnitario[i];
            facturas[cantidadFacturas].facturaTotal += facturas[cantidadFacturas].precioTotalItem[i];
        }

        facturas[cantidadFacturas].cantidadItems = items;
        cout << "El total de la factura es: " << facturas[cantidadFacturas].facturaTotal << endl;
        cantidadFacturas++;
        cout << "Factura ingresada exitosamente" << endl;
        cout << "Desea agregar otra factura? (s/n): ";
        cin >> continuar;
    }
}

void listarFacturas(Factura facturas[], int cantidadFacturas, Cliente clientes[], int cantidadClientes)
{
    if (cantidadFacturas == 0)
    {
        cout << "No hay facturas para mostrar." << endl;
        return;
    }
    cout << "----LISTA DE FACTURAS (" << cantidadFacturas << ")----" << endl;
    for (int i = 0; i < cantidadFacturas; i++)
    {
        cout << "Factura numero: " << facturas[i].numeroFactura << endl;
        cout << "Dia: " << facturas[i].facturaDia << "/" << facturas[i].facturaMes << "/" << facturas[i].facturaAnio << endl;
        cout << "Cliente: " << facturas[i].clienteID << endl;

        for (int j = 0; j < facturas[i].cantidadItems; j++)
        {
            cout << "SKU " << facturas[i].productoSKU[j] << " - " << facturas[i].productoNombre[j] << " - " << facturas[i].productoCantidad[j] << " x $" << facturas[i].precioUnitario[j] << " = $" << facturas[i].precioTotalItem[j] << endl;
        }
        cout << "Total Factura: $" << facturas[i].facturaTotal << endl;
        cout << "-----------------------------" << endl;
    }
}

void totalVentaSesion(Factura facturas[], int cantidadFacturas)
{
    int dia, mes, anio;

    cout << "selccione el dia de la factura: " << endl;
    cin >> dia;
    cout << "selccione el mes de la factura: " << endl;
    cin >> mes;
    cout << "selccione el anio de la factura: " << endl;
    cin >> anio;

    int total = 0;
    for (int i = 0; i < cantidadFacturas; ++i)
    {
        if (facturas[i].facturaDia == dia && facturas[i].facturaMes == mes && facturas[i].facturaAnio == anio)
        {
            total += facturas[i].facturaTotal;
        }
    }
    cout << "El total de la venta del dia seleccionado es: $" << total << endl;
}

void facturaMayorImporte(Factura facturas[], int cantidadFacturas, Cliente clientes[], int cantidadClientes)
{
    if (cantidadFacturas == 0)
    {
        cout << "No hay facturas para mostrar." << endl;
        return;
    }

    int dia, mes, anio;

    cout << "selccione el dia de la factura: " << endl;
    cin >> dia;
    cout << "selccione el mes de la factura: " << endl;
    cin >> mes;
    cout << "selccione el anio de la factura: " << endl;
    cin >> anio;

    int facturaMayorID = 0;
    float facturaMayorImporte = 0;

    for (int i = 0; i < cantidadFacturas; ++i)
    {
        if (facturas[i].facturaDia == dia &&
            facturas[i].facturaMes == mes &&
            facturas[i].facturaAnio == anio)
        {
            if (facturaMayorID == -1 || facturas[i].facturaTotal > facturaMayorImporte)
            {
                facturaMayorID = i;
                facturaMayorImporte = facturas[i].facturaTotal;
            }
        }
    }

    if (facturaMayorID == -1)
    {
        cout << "No hay facturas para el " << dia << "/" << mes << "/" << anio << "." << endl;
        return;
    }

    cout << "Factura de mayor importe del " << dia << "/" << mes << "/" << anio << endl;
    cout << "  Numero: " << facturas[facturaMayorID].numeroFactura << endl;
    cout << "  Cliente: " << facturas[facturaMayorID].clienteID << " - " << endl;
    cout << "  Importe total: $" << facturaMayorImporte << endl;
}

void promedioFacturacion(Factura facturas[], int cantidadFacturas)
{
    int dia, mes, anio;

    cout << "selccione el dia de la factura: " << endl;
    cin >> dia;
    cout << "selccione el mes de la factura: " << endl;
    cin >> mes;
    cout << "selccione el anio de la factura: " << endl;
    cin >> anio;

    float promedioFacturacionDiaria = 0;

    for (int i = 0; i < cantidadFacturas; ++i)
    {
        if (facturas[i].facturaDia == dia &&
            facturas[i].facturaMes == mes &&
            facturas[i].facturaAnio == anio)
        {
            promedioFacturacionDiaria += facturas[i].facturaTotal;
        }

        promedioFacturacionDiaria /= cantidadFacturas;
        cout << "El promedio de facturacion diaria es: $" << promedioFacturacionDiaria << endl;
    }
}

void promedioProductos(Factura facturas[], int cantidadFacturas)
{
    string id;
    cout << "selccione el numero de la factura: " << endl;
    cin >> id;

    for (int i = 0; i < cantidadFacturas; i++)
    {
        if (facturas[i].numeroFactura == id)
        {
            int totalUnidades = 0;

            for (int j = 0; j < facturas[i].cantidadItems; j++)
            {
                totalUnidades += facturas[i].productoCantidad[j];
            }
            float promedio = totalUnidades / facturas[i].cantidadItems;
            cout << "El promedio de unidades vendidas de la factura es: " << promedio << endl;
        }
    }
}
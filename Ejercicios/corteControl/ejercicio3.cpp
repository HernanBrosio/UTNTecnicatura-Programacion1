#include <iostream>
using namespace std;

struct episodio
{
    int Id_Serie;
    string titulo;
    int temporada;
    int episodio;
    long descargas;
    int ultimaDescarga;
};

episodio Episodios[1000];

void procesamientoEpisodios(episodio vecA[], int n)
{
    int i = 0;
    int totalEpisodiosTemporada;
    int totalDescargasTemporada;
    int totalEpisodiosSerie;
    int totalDescargasSerie;
    int totalGeneralSerie = 0;

    while (i < n) // se mueve en el conjunto total
    {

        int keySerie = vecA[i].Id_Serie;
        totalEpisodiosSerie = 0;

        totalGeneralSerie++;

        while (i < n && vecA[i].Id_Serie == keySerie) // se mueve en el conjunto serie
        {
            int keyTemporada = vecA[i].temporada;
            totalEpisodiosTemporada = 0;
            totalDescargasTemporada = 0;

            

            while (i < n && vecA[i].Id_Serie == keySerie && vecA[i].temporada == keyTemporada) // se mueve en el conjunto Temporada
            {
                totalEpisodiosTemporada++;//cuenta episodios
                totalDescargasTemporada += vecA[i].descargas;//cuenta descargas temporada
                totalEpisodiosSerie++;//cuenta episodios serie


                i++;
            }
            // cambio de temporada
            cout << "Total episodios temporada " << keyTemporada << ": " << totalEpisodiosTemporada << endl;
            cout << "Total descargas temporada " << keyTemporada << ": " << totalDescargasTemporada << endl;
        }
        cout << "Cantidad total de episodios de la serie " << keySerie << ": " << totalEpisodiosSerie << endl;
    }

    cout << "Cantidad total de series: " << totalGeneralSerie << endl;
}

int main()
{
    int miContador = 0;
    long miVariableLong = 0;
}
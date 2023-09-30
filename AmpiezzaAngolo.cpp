// Tonsuso Michael, 3A inf, 28/09/2023
// data la misura di un angolo in gradi, primi e secondi determiniamo l'ampiezza in secondi


#include <iostream>
using namespace std;

class Angolo {
    public:
        int gradi, primi, secondi;

        // funzione per l'inserimento dei valori
        void InserimentoValori() {
            cout << "Inserisci i gradi: ";
            cin >> gradi;
            cout << "Inserisci i primi: ";
            cin >> primi;
            cout << "Inserisci i secondi: ";
            cin >> secondi;
        }

        // funzione per calcolare l'ampiezza
        int CalcoloAmpiezza() {
            return (gradi * 3600) + (primi * 60) + secondi;
        };
};


int main()
{
    // creiamo l'oggetto myAngolo della classe Angolo
    Angolo myAngolo; 

    // chiamiamo la funzione per l'inserimento dei valori
    myAngolo.InserimentoValori();

    // stampiamo l'ampiezza calcolata
    cout << "Ecco l'ampiezza dell'angolo in secondi : " << myAngolo.CalcoloAmpiezza();

    return 0;
}


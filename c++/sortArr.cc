#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>

void printTime(int seconds) {
    int minutes = seconds * 60;
    std::cout << minutes;
    if(seconds == 0) {
            std::cout << "\nFinito in meno di un secondo.";
    /* non va
    } else if(seconds > 60) {
            if (seconds/60 <= 1) {
                
                std::cout << "\nFinito in " << seconds / 60 << "minuto.";
            } else {
                std::cout << "\nFinito in " << seconds / 60 << "minuti.";
            }
    */
    } else {
            if (seconds <= 1) {
                std::cout << "\nFinito in " << seconds << " secondo.";
        }   else {
                std::cout << "\nFinito in " << seconds << " secondi.";
        }

        }
    }


int main() {
    std::string a;
    int nmbr = 0;
    int arrayLenght;
    int currentBiggestNum = 0;
    std::cout << "Scrivere la lunghezza dell'array: ";
    std::cin >> arrayLenght;
    std::cout << "\nArray generato: \n";
    std::vector<int> toSort;
    std::vector<int> sorted;
    toSort.resize(arrayLenght);
    sorted.resize(arrayLenght);
    /* riempire i vettori con numeri a caso da 1 a 100*/
    for ( ; nmbr < arrayLenght ; nmbr++) {
        toSort.at(nmbr) = rand() % 500 + 1;
    }

    /* stampare il vettore cosi com'è*/
    for (int i : toSort) {
        std::cout << i << " ";
    }
    
    std::cout << "\n\nScrivi qualsiasi cosa e premi invio per continuare.";
    std::cin >> a;

    int counter = 0;
    int x = 0;

    time_t startTime = time(&startTime);
    for(int i : sorted) {   
            for(int y = 1 ; y <= arrayLenght-1 ; ) {
                std::cout << "Confronto: " << toSort[x] << " > " << toSort[y] << std::endl;
                if(toSort[x] <= toSort[y]) { // se si vuole trovare il valore minore basta rimpiazzare >= con <=
                    currentBiggestNum = toSort[x];
                    std::cout << "era vero, non cambiare valore: " << currentBiggestNum << "\nx:" << x << std::endl;
                } else {
                     std::cout << "era falso, cambio al prossimo numero: " << currentBiggestNum << std::endl;
                    y = -1; //-1 perchè dopo viene addizionato ad uno, e il numero dovrebbe essere 0. (linea 53)
                    x++;
                }
            y++;
            }
    sorted[counter] = currentBiggestNum;
    std::cout << "set counter x to: " << currentBiggestNum << std::endl << sorted[counter] << std::endl;
    toSort.erase(toSort.begin() + x);
    arrayLenght--;
    //toSort[x] = 1000000;
    x = 0;
    counter++;
}
    time_t endTime = time(&endTime);
    std::cout << "\nresult: \n";
    for (int i : sorted) {
    std::cout << i << " ";
    }
    
    printTime(endTime - startTime);

}
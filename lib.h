//PROTOTIPI

/** Assegna ad ogni cella di un array un valore richiesto in input.
 * @param int* Riferimento al vettore da acquisire.
 * @param int Dimensione dell'Array.
 */
void manualInputArray(int _v[], int _dim);

/** Assegna ad ogni cella di un array un valore random tra 1 e 99.
 * @param int* Riferimento al vettore da riempire.
 * @param int Dimensione dell'Array.
 */
void randomInputArray(int _v[], int _dim);

/** stampa su singola riga i valori del vettore.
 * @param int* Riferimento al vettore da riempire.
 * @param int Dimensione dell'Array.
 */
void printRowArray(int _v[], int _dim);

/** Stampa i valori dell'array in colonna con indice di cella.
 * @param int* Riferimento al vettore da riempire.
 * @param int Dimensione dell'Array.
 */
void printColArray(int _v[], int _dim);



/** 
 * carica un vettore con valori 
 * random compresi tra un minimo e un massimo passati come argomenti
 * @param int* riferimento al vettore
 * @param int dimensione del vettore 
 * @param int valore minimo
 * @param int valore massimo del range
 */

void caricavettore(int _v[], int _dim, int _min, int _max);
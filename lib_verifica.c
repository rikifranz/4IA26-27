void CreaMatrice(int rows, int cols, int m[rows][cols], int min, int max){
    int i,j;
    srand(time(NULL));

    for(i=0; i < rows; i++){
        for(j=0; j < cols; j++){
            m[i][j] = min + rand()%(max - min + 1);
        }
    }
}

void PrintMatrix(int rows, int cols, int m[rows][cols]){
   for(int i=0; i < rows; i++){
        for(int j=0; j < cols; j++){
            printf("%3d", m[i][j]);
        }
        printf("\n");
    }
}

void CreaVett(int vett[], int DIM, int min, int max){
    srand(time(NULL));

    for(int i=0; i< DIM; i++){
        vett[i] = min + rand()%(max - min + 1);
    }
}

void PrintVett(int vett[], int DIM){
    for(int i = 0; i < DIM; i++){
        printf("%3d", vett[i]);
    }
}


int MediaRigheMatrice(int rows, int cols, int m[rows][cols]){
    int sum = 0;
    float media = 0;
    float mediamax;
    int indice=0;

    for(int i=0; i  < rows; i++){
        sum = 0;
        media = 0;
        for(int j=0; j < cols; j++){
            printf("%3d", m[i][j]);
            sum = sum + m[i][j];
        }
        media = (float)sum/rows;
        printf(" -> %f  ", media);
        printf("\n");
        if(media > mediamax){
            mediamax = media;
            indice = i;
        }
    }
    return(indice+1);
}

int ContaColonneMinore(int rows, int cols, int m[rows][cols], int DIM, int vett[DIM]){
    int sumvett=0;
    int sumcol;
    int cnt=0;
    for(int i = 0; i<DIM; i++){
        sumvett = sumvett + vett[i];
    }

    for(i=0; i < cols; i++){
        sumvett=0;
        for(j=0; j < rows; j++){
            sumcol = sumcol + m[i][j];
        }
        if(sumcol < sumvett){
            cnt++;
        }
    }
    return cnt;

    
}

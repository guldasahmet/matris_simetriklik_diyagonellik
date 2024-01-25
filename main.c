#include <stdio.h>
#include <stdlib.h>

void yazdir(int matris[50][50],int N);
void diyagonel_mi(int matris[50][50],int N);
void simetrik_mi(int matris[50][50],int N);

int main()
{
    int N;
    int matris[50][50];

    printf("Lutfen kare matrisin satir veya sutun sayisini girin: ");
    scanf("%d",&N);

    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("matris[%d][%d]: ",i,j);
            scanf("%d",&matris[i][j]);
        }
    }
    printf("\n");
    yazdir(matris,N);
    diyagonel_mi(matris,N);
    simetrik_mi(matris,N);

    return 0;
}

void yazdir(int matris[50][50], int N)
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
            printf("%d\t",matris[i][j]);
        printf("\n");
    }

}

void simetrik_mi(int matris[50][50],int N)
{
    int i,j;
    int sayac=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i == j)
                continue;

            else if(matris[i][j] == matris[j][i])
            sayac++;

        }
    }
    if(sayac >= (N * N)-N)
        printf("Bu matris simetriktir.\n");
    else
        printf("Bu matris simetrik degildir.\n");
}

void diyagonel_mi(int matris[50][50],int N)
{
    int i,j;
    int sayac=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(matris[i][j] == 0)
                sayac++;
        }
    }
    if(sayac >= (N * N)-N)
        printf("Bu matris diyagoneldir.\n");
    else
        printf("Bu matris diyagonel degildir.\n");
}






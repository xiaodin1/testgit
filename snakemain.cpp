#include<stdio.h>
//@Author �����
int main()
{
    int i,j,a[100][100],n,k;
    printf("����������n= ");//������n*n
    scanf("%d",&n);
    k=1;
    //���������
    for(i=0; i<n; i++)
        for(j=0; j<=i; j++)
        {
            if(i%2==0) a[i-j][j]=k;
            else a[j][i-j]=k;
            k++;
        }
    //���������
    for(i=n; i<2*n; i++)
        for(j=1; j<2*n-i; j++)
        {
            if(i%2==0) a[n-j][i-n+j]=k;
            else a[i-n+j][n-j]=k;
            k++;
        }
    for(i=0; i<n; i++)
    {
        printf("\n");
        for(j=0; j<n; j++)
            printf("%4d",a[i][j]);
    }
    printf("\n");
    return 0;
}

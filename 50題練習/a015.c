#include <stdio.h>
int main()
{
    int row,col;
    while(scanf("%d%d",&r,&c)!=EOF){
        int matrix[100][100]={0};
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                scanf("%d",&matrix[i][j]);
            }
        }
        for(int i=0;i<col;i++){
            for(int j=0;j<row;j++){
                printf("%d ",matrix[j][i]); 
            }
            printf("\n");
        }
    }
    return 0;
}

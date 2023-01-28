#include <stdio.h>
int main()
{
    int a[3][3];
    int count=0;
    printf("Enter\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
        if(a[i][j]==0)
        {
            count++;
        }
        }
    }
    printf("The no of non zero elements is %d",9-count);

    return 0;
}
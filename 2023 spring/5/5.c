#include<stdio.h>
int gomoku[9][9];

void Show(void) //함수를 미리 잘게 자르고 개발해야 중간에 맨 위에 올릴 함수가 안 생김
{
    for(int i = 0; i <= 8; i++)
    {
        for(int j = 0; j <= 8; j++)
        {
            printf("%c",gomoku[i][j]);
        }
        printf("\n");
    }
}
int gotInput(int Input) //c에는 char 밖에 없어
{
    printf("Input P%d's move",Input);
    int x,y;
    scanf("%d, %d",&y,&x);
    x -=1;
    y-=1;
    char word;
    if(Input == 1) word = 'O';
    if(Input == 2) word = 'X';
    gomoku[x][y] = word; //[y][x] 가 (x,y)임
    Show();
    for(int i = 0; i <= 8; i++)
    {
        for(int j = 0; j <= 8; j++)
        {
            if(gomoku[i][j] == word)
            {
                if(gomoku[i+1][j] == word && gomoku[i+2][j] == word && gomoku[i+3][j] == word && gomoku[i+4][j] == word)
                {
                    return Input;
                }
                if(gomoku[i+1][j+1] == word && gomoku[i+2][j+2] == word && gomoku[i+3][j+3] == word && gomoku[i+4][j+4] == word)
                {
                    return Input;
                }
                if(gomoku[i+1][j-1] == word && gomoku[i+2][j-2] == word && gomoku[i+3][j-3] == word && gomoku[i+4][j-4] == word)
                {
                    return Input;
                }
                if(gomoku[i][j+1] == word && gomoku[i][j+2] == word && gomoku[i][j+3] == word && gomoku[i][j+4] == word)
                {
                    return Input;
                }
            }
        }
    }
    return 0;
}
void getSetup(void)
{
    printf("Gomoku statrs!\n");
    for(int i = 0; i <= 8; i++)
    {
        for(int j = 0; j <= 8; j++)
        {
            gomoku[i][j] = '.';
        }
    }
    Show();
}
int main()
{
    getSetup();
    int n = 1;
    int result;
    while (1)
    {
        result = gotInput(n);
        if(result == n) printf("P%d wins!",n); 
        if(n == 1) n = 2;
        else if(n == 2) n = 1; // else 처리 놓쳤음
    }
    
}
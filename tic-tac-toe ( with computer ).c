/*

    Tic-Tac-Toe game code written in C language.

    Coded by    :  Md. Abdullah Al Maruf.
    Github Link :  https://github.com/md-abdullah-al-maruf

*/

#include<stdio.h>                               //  Globally declaration of all needed arrays and variables.
#include<stdlib.h>                              //  All 9 partition pattern will store in a,b,c,d,e,f,g,h,k 2D array.
#define getch() _getch()


char a[5][9],b[5][9],c[5][9];                   //  1st row.
char d[5][9],e[5][9],f[5][9];                   //  2nd row.
char g[5][9],h[5][9],k[5][9];                   //  3rd row.

char p1[9],p2[9];                               //  Store moves of both player.
char gm[50];                                    //  This gm array store additional characters to print win line.
int check[9],x=1,choi=1;                        //  This variables for additional necessary.
char chh=177;                                   //  Declaration of characters for pattern.
char chh2=178;                                  //  Declaration of characters for win line.
char chh3=248;                                  //  Declaration of character for cross/zero pattern.
char levelst[5];                                //  Level.
int playerscr=0,cmpscr=0,level=0;               //  Score.

/*

    Cross pattern function

*/

void * cross(char t[5][9])
{
    int i,j;
    for(i=0; i<5; i++)                          //  Cross pattern.
    {
        for(j=0; j<9; j++)                      //  *       *
        {                                       //    *   *
            if(i*2==j)                          //      *
            {                                   //    *   *
                t[i][j]=chh3;                   //  *       *
            }
            if(i==0&&j==8||i==1&&j==6||i==2&&j==4||i==3&&j==2||i==4&&j==0)
            {
                t[i][j]=chh3;
            }
        }
    }
}

/*

    Zero pattern function

*/

void * zero(char t[5][9])                       //  Zero pattern.
{
                                                //  * * * * *
    int i,j;                                    //  *       *
    for(i=0; i<5; i++)                          //  *       *
    {                                           //  *       *
        for(j=0; j<9; j++)                      //  * * * * *
        {
            if(((i==0||i==4)&&j%2==0)||(((i>0&&i<4)&&(j==0||j==8))))
            {
                t[i][j]=chh3;
            }
            else
            {
                t[i][j]=32;
            }
        }
    }
}

/*

    This is the main tic-tac-toe pattern.       Don't scare..!!! ;)

*/

void print()
{
    system("cls");
    banner();
    printf("\n\t");
    for(int i=0; i<43; i++)
    {
        printf("%c",chh);
    }
    printf("                      %c       %c\n",chh3,chh3);
    printf("\t%c             %c             %c             %c                        %c   %c\n",chh,chh,chh,chh,chh3,chh3);
    printf("\t%c  %c%c%c%c%c%c%c%c%c  %c  %c%c%c%c%c%c%c%c%c  %c  %c%c%c%c%c%c%c%c%c  %c    Player     :          %c\n",chh,a[0][0],a[0][1],a[0][2],a[0][3],a[0][4],a[0][5],a[0][6],a[0][7],a[0][8],chh,b[0][0],b[0][1],b[0][2],b[0][3],b[0][4],b[0][5],b[0][6],b[0][7],b[0][8],chh,c[0][0],c[0][1],c[0][2],c[0][3],c[0][4],c[0][5],c[0][6],c[0][7],c[0][8],chh,chh3);
    printf("\t%c  %c%c%c%c%c%c%c%c%c  %c  %c%c%c%c%c%c%c%c%c  %c  %c%c%c%c%c%c%c%c%c  %c                        %c   %c\n",chh,a[1][0],a[1][1],a[1][2],a[1][3],a[1][4],a[1][5],a[1][6],a[1][7],a[1][8],chh,b[1][0],b[1][1],b[1][2],b[1][3],b[1][4],b[1][5],b[1][6],b[1][7],b[1][8],chh,c[1][0],c[1][1],c[1][2],c[1][3],c[1][4],c[1][5],c[1][6],c[1][7],c[1][8],chh,chh3,chh3);
    printf("\t%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c                      %c       %c\n",chh,a[2][0],a[2][1],a[2][2],a[2][3],a[2][4],a[2][5],a[2][6],a[2][7],a[2][8],gm[0],gm[1],gm[38],gm[2],gm[3],b[2][0],b[2][1],b[2][2],b[2][3],b[2][4],b[2][5],b[2][6],b[2][7],b[2][8],gm[4],gm[5],gm[39],gm[6],gm[7],c[2][0],c[2][1],c[2][2],c[2][3],c[2][4],c[2][5],c[2][6],c[2][7],c[2][8],chh,chh3,chh3);
    printf("\t%c  %c%c%c%c%c%c%c%c%c  %c  %c%c%c%c%c%c%c%c%c  %c  %c%c%c%c%c%c%c%c%c  %c\n",chh,a[3][0],a[3][1],a[3][2],a[3][3],a[3][4],a[3][5],a[3][6],a[3][7],a[3][8],chh,b[3][0],b[3][1],b[3][2],b[3][3],b[3][4],b[3][5],b[3][6],b[3][7],b[3][8],chh,c[3][0],c[3][1],c[3][2],c[3][3],c[3][4],c[3][5],c[3][6],c[3][7],c[3][8],chh);
    printf("\t%c  %c%c%c%c%c%c%c%c%c  %c  %c%c%c%c%c%c%c%c%c  %c  %c%c%c%c%c%c%c%c%c  %c                      %c %c %c %c %c\n",chh,a[4][0],a[4][1],a[4][2],a[4][3],a[4][4],a[4][5],a[4][6],a[4][7],a[4][8],chh,b[4][0],b[4][1],b[4][2],b[4][3],b[4][4],b[4][5],b[4][6],b[4][7],b[4][8],chh,c[4][0],c[4][1],c[4][2],c[4][3],c[4][4],c[4][5],c[4][6],c[4][7],c[4][8],chh,chh3,chh3,chh3,chh3,chh3);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                      %c       %c\n",chh,chh,chh,chh,chh,chh,chh,gm[40],chh,chh,chh,chh,chh,gm[30],chh,chh,chh,chh,chh,chh,chh,gm[41],chh,chh,chh,chh,chh,chh,chh,gm[31],chh,chh,chh,chh,chh,gm[42],chh,chh,chh,chh,chh,chh,chh,chh3,chh3);
    printf("\t%c      %c      %c%c     %c     %c%c      %c      %c    Computer   :      %c       %c\n",chh,gm[24],chh,gm[32],gm[26],gm[33],chh,gm[28],chh,chh3,chh3);
    printf("\t%c  %c%c%c%c%c%c%c%c%c  %c  %c%c%c%c%c%c%c%c%c  %c  %c%c%c%c%c%c%c%c%c  %c                      %c       %c\n",chh,d[0][0],d[0][1],d[0][2],d[0][3],d[0][4],d[0][5],d[0][6],d[0][7],d[0][8],chh,e[0][0],e[0][1],e[0][2],e[0][3],e[0][4],e[0][5],e[0][6],e[0][7],e[0][8],chh,f[0][0],f[0][1],f[0][2],f[0][3],f[0][4],f[0][5],f[0][6],f[0][7],f[0][8],chh,chh3,chh3);
    printf("\t%c  %c%c%c%c%c%c%c%c%c  %c  %c%c%c%c%c%c%c%c%c  %c  %c%c%c%c%c%c%c%c%c  %c                      %c %c %c %c %c\n",chh,d[1][0],d[1][1],d[1][2],d[1][3],d[1][4],d[1][5],d[1][6],d[1][7],d[1][8],chh,e[1][0],e[1][1],e[1][2],e[1][3],e[1][4],e[1][5],e[1][6],e[1][7],e[1][8],chh,f[1][0],f[1][1],f[1][2],f[1][3],f[1][4],f[1][5],f[1][6],f[1][7],f[1][8],chh,chh3,chh3,chh3,chh3,chh3);
    printf("\t%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c\n",chh,d[2][0],d[2][1],d[2][2],d[2][3],d[2][4],d[2][5],d[2][6],d[2][7],d[2][8],gm[8],gm[9],gm[43],gm[10],gm[11],e[2][0],e[2][1],e[2][2],e[2][3],e[2][4],e[2][5],e[2][6],e[2][7],e[2][8],gm[12],gm[13],gm[44],gm[14],gm[15],f[2][0],f[2][1],f[2][2],f[2][3],f[2][4],f[2][5],f[2][6],f[2][7],f[2][8],chh);
    printf("\t%c  %c%c%c%c%c%c%c%c%c  %c  %c%c%c%c%c%c%c%c%c  %c  %c%c%c%c%c%c%c%c%c  %c    Score      :    Player %2d   |   Computer %2d\n",chh,d[3][0],d[3][1],d[3][2],d[3][3],d[3][4],d[3][5],d[3][6],d[3][7],d[3][8],chh,e[3][0],e[3][1],e[3][2],e[3][3],e[3][4],e[3][5],e[3][6],e[3][7],e[3][8],chh,f[3][0],f[3][1],f[3][2],f[3][3],f[3][4],f[3][5],f[3][6],f[3][7],f[3][8],chh,playerscr,cmpscr);
    printf("\t%c  %c%c%c%c%c%c%c%c%c  %c  %c%c%c%c%c%c%c%c%c  %c  %c%c%c%c%c%c%c%c%c  %c    Level      :    %s\n",chh,d[4][0],d[4][1],d[4][2],d[4][3],d[4][4],d[4][5],d[4][6],d[4][7],d[4][8],chh,e[4][0],e[4][1],e[4][2],e[4][3],e[4][4],e[4][5],e[4][6],e[4][7],e[4][8],chh,f[4][0],f[4][1],f[4][2],f[4][3],f[4][4],f[4][5],f[4][6],f[4][7],f[4][8],chh,levelst);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",chh,chh,chh,chh,chh,chh,chh,gm[45],chh,chh,chh,chh,chh,chh,chh,gm[34],chh,chh,chh,chh,chh,gm[46],chh,chh,chh,chh,chh,gm[35],chh,chh,chh,chh,chh,chh,chh,gm[47],chh,chh,chh,chh,chh,chh,chh);
    printf("\t%c      %c     %c%c      %c      %c%c     %c      %c    Instructions ------------\n",chh,gm[25],gm[36],chh,gm[27],chh,gm[37],gm[29],chh);
    printf("\t%c  %c%c%c%c%c%c%c%c%c  %c  %c%c%c%c%c%c%c%c%c  %c  %c%c%c%c%c%c%c%c%c  %c    Moves Key  :    1 to 9\n",chh,g[0][0],g[0][1],g[0][2],g[0][3],g[0][4],g[0][5],g[0][6],g[0][7],g[0][8],chh,h[0][0],h[0][1],h[0][2],h[0][3],h[0][4],h[0][5],h[0][6],h[0][7],h[0][8],chh,k[0][0],k[0][1],k[0][2],k[0][3],k[0][4],k[0][5],k[0][6],k[0][7],k[0][8],chh);
    printf("\t%c  %c%c%c%c%c%c%c%c%c  %c  %c%c%c%c%c%c%c%c%c  %c  %c%c%c%c%c%c%c%c%c  %c    Reset Game :    Press '0'\n",chh,g[1][0],g[1][1],g[1][2],g[1][3],g[1][4],g[1][5],g[1][6],g[1][7],g[1][8],chh,h[1][0],h[1][1],h[1][2],h[1][3],h[1][4],h[1][5],h[1][6],h[1][7],h[1][8],chh,k[1][0],k[1][1],k[1][2],k[1][3],k[1][4],k[1][5],k[1][6],k[1][7],k[1][8],chh);
    printf("\t%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c    Exit Game  :    Press 'E' or 'e'\n",chh,g[2][0],g[2][1],g[2][2],g[2][3],g[2][4],g[2][5],g[2][6],g[2][7],g[2][8],gm[16],gm[17],gm[48],gm[18],gm[19],h[2][0],h[2][1],h[2][2],h[2][3],h[2][4],h[2][5],h[2][6],h[2][7],h[2][8],gm[20],gm[21],gm[49],gm[22],gm[23],k[2][0],k[2][1],k[2][2],k[2][3],k[2][4],k[2][5],k[2][6],k[2][7],k[2][8],chh);
    printf("\t%c  %c%c%c%c%c%c%c%c%c  %c  %c%c%c%c%c%c%c%c%c  %c  %c%c%c%c%c%c%c%c%c  %c\n",chh,g[3][0],g[3][1],g[3][2],g[3][3],g[3][4],g[3][5],g[3][6],g[3][7],g[3][8],chh,h[3][0],h[3][1],h[3][2],h[3][3],h[3][4],h[3][5],h[3][6],h[3][7],h[3][8],chh,k[3][0],k[3][1],k[3][2],k[3][3],k[3][4],k[3][5],k[3][6],k[3][7],k[3][8],chh);
    printf("\t%c  %c%c%c%c%c%c%c%c%c  %c  %c%c%c%c%c%c%c%c%c  %c  %c%c%c%c%c%c%c%c%c  %c     Coded By: Md. Abdullah Al Maruf\n",chh,g[4][0],g[4][1],g[4][2],g[4][3],g[4][4],g[4][5],g[4][6],g[4][7],g[4][8],chh,h[4][0],h[4][1],h[4][2],h[4][3],h[4][4],h[4][5],h[4][6],h[4][7],h[4][8],chh,k[4][0],k[4][1],k[4][2],k[4][3],k[4][4],k[4][5],k[4][6],k[4][7],k[4][8],chh);
    printf("\t");
    for(int i=0; i<43; i++)
    {
        printf("%c",chh);
    }
    printf("    (github.com/md-abdullah-al-maruf)\n");

}

/*

   This function take moves and print output of corresponding player.

*/

void ch(int n)
{
    if(check[n-1]==0)                           //  Check the partition is empty or not.
    {
        if(x==2)                                //  If x=2, this one is Computer.
        {
            p2[n-1]=1;                          //  This p2 store all the moves of Computer.
            switch(n)                           //  Store pattern as corresponding partition.
            {
            case 1:
                zero(&a);
                break;
            case 2:
                zero(&b);
                break;
            case 3:
                zero(&c);
                break;
            case 4:
                zero(&d);
                break;
            case 5:
                zero(&e);
                break;
            case 6:
                zero(&f);
                break;
            case 7:
                zero(&g);
                break;
            case 8:
                zero(&h);
                break;
            case 9:
                zero(&k);
                break;
            }
        }
        else if(x==1)                           //  If x=1, this one is 1st player.
        {
            p1[n-1]=1;                          //  This p1 store all moves of 1st player.
            switch(n)                           //  Store pattern as corresponding partition.
            {
            case 1:
                cross(&a);
                break;
            case 2:
                cross(&b);
                break;
            case 3:
                cross(&c);
                break;
            case 4:
                cross(&d);
                break;
            case 5:
                cross(&e);
                break;
            case 6:
                cross(&f);
                break;
            case 7:
                cross(&g);
                break;
            case 8:
                cross(&h);
                break;
            case 9:
                cross(&k);
                break;
            }
        }
        check[n-1]=1;                           //  There are nine partition (3 x 3), store 1 as flag to confirm the N number partition is completed.
        if(x==1)                                //  Change player correspondingly.
        {
            x=2;
        }
        else if(x==2)
        {
            x=1;
        }
    }
    else
    {                                           //  If the partition is already given by previous player.
        fflush(stdin);
        print();
        printf("\n\t\t    Its given already!!\n");
        sleep(1);
    }
}

/*

    This function check the game's rules condition.

*/

int game()                                      //  It returns 1 for 1st player and 2 for Computer.
{
    int i,j;
    if(p1[0]==1&&p1[1]==1&&p1[2]==1)            //  1st row
    {
        for(i=0; i<=8; i++)
        {
            if(i<8)
            {
                gm[i]=chh2;
            }
            a[2][i]=b[2][i]=c[2][i]=chh2;
        }
        gm[38]=gm[39]=chh2;
        return 1;
    }
    else if(p1[3]==1&&p1[4]==1&&p1[5]==1)       //  2nd row
    {
        for(i=8; i<=16; i++)
        {
            if(i<=15)
            {
                gm[i]=chh2;
            }
            d[2][i-8]=e[2][i-8]=f[2][i-8]=chh2;
        }
        gm[43]=gm[44]=chh2;
        return 1;
    }
    else if(p1[6]==1&&p1[7]==1&&p1[8]==1)       //  3rd row
    {
        for(i=16; i<=24; i++)
        {
            if(i<=23)
            {
                gm[i]=chh2;
            }
            g[2][i-16]=h[2][i-16]=k[2][i-16]=chh2;
        }
        gm[48]=gm[49]=chh2;
        return 1;
    }
    else if(p1[0]==1&&p1[3]==1&&p1[6]==1)       //  1st column
    {
        for(i=0; i<5; i++)
        {
            a[i][4]=d[i][4]=g[i][4]=chh2;
        }
        gm[24]=gm[25]=gm[40]=gm[45]=chh2;
        return 1;
    }
    else if(p1[1]==1&&p1[4]==1&&p1[7]==1)       //  2nd column
    {
        for(i=0; i<5; i++)
        {
            b[i][4]=e[i][4]=h[i][4]=chh2;
        }
        gm[26]=gm[27]=gm[41]=gm[46]=chh2;
        return 1;
    }

    else if(p1[2]==1&&p1[5]==1&&p1[8]==1)       //  3rd column
    {
        for(i=0; i<5; i++)
        {
            c[i][4]=f[i][4]=k[i][4]=chh2;
        }
        gm[28]=gm[29]=gm[42]=gm[47]=chh2;
        return 1;
    }
    else if(p1[0]==1&&p1[4]==1&&p1[8]==1)       //  Primary diagonal
    {
        for(i=0; i<5; i++)
        {
            for(j=0; j<9; j++)
            {
                if(i*2==j)
                {
                    a[i][j]=e[i][j]=k[i][j]=chh2;
                }
            }
        }
        gm[30]=gm[32]=gm[35]=gm[37]=chh2;
        return 1;
    }
    else if(p1[2]==1&&p1[4]==1&&p1[6]==1)       //  Secondary diagonal
    {
        gm[31]=gm[33]=gm[34]=gm[36]=chh2;
        for(i=0; i<5; i++)
        {
            for(j=0; j<9; j++)
            {
                if(i==0&&j==8||i==1&&j==6||i==2&&j==4||i==3&&j==2||i==4&&j==0)
                {
                    c[i][j]=e[i][j]=g[i][j]=chh2;
                }
            }
        }
        return 1;
    }
    else if(p2[0]==1&&p2[1]==1&&p2[2]==1)       //  1st row
    {
        for(i=0; i<=8; i++)
        {
            if(i<8)
            {
                gm[i]=chh2;
            }
            a[2][i]=b[2][i]=c[2][i]=chh2;
        }
        gm[38]=gm[39]=chh2;
        return 2;
    }
    else if(p2[3]==1&&p2[4]==1&&p2[5]==1)       //  2nd row
    {
        for(i=8; i<=16; i++)
        {
            if(i<=15)
            {
                gm[i]=chh2;
            }
            d[2][i-8]=e[2][i-8]=f[2][i-8]=chh2;
        }
        gm[43]=gm[44]=chh2;
        return 2;
    }
    else if(p2[6]==1&&p2[7]==1&&p2[8]==1)       //  3rd row
    {
        for(i=16; i<=24; i++)
        {
            if(i<=23)
            {
                gm[i]=chh2;
            }
            g[2][i-16]=h[2][i-16]=k[2][i-16]=chh2;
        }
        gm[48]=gm[49]=chh2;
        return 2;
    }
    else if(p2[0]==1&&p2[3]==1&&p2[6]==1)       //  1st column
    {
        for(i=0; i<5; i++)
        {
            a[i][4]=d[i][4]=g[i][4]=chh2;
        }
        gm[24]=gm[25]=gm[40]=gm[45]=chh2;
        return 2;
    }
    else if(p2[1]==1&&p2[4]==1&&p2[7]==1)       //  2nd column
    {
        gm[26]=gm[27]=chh2;
        for(i=0; i<5; i++)
        {
            b[i][4]=e[i][4]=h[i][4]=chh2;
        }
        gm[26]=gm[27]=gm[41]=gm[46]=chh2;
        return 2;
    }
    else if(p2[2]==1&&p2[5]==1&&p2[8]==1)       //  3rd column
    {
        for(i=0; i<5; i++)
        {
            c[i][4]=f[i][4]=k[i][4]=chh2;
        }
        gm[28]=gm[29]=gm[42]=gm[47]=chh2;
        return 2;
    }
    else if(p2[0]==1&&p2[4]==1&&p2[8]==1)       //  Primary diagonal
    {
        for(i=0; i<5; i++)
        {
            for(j=0; j<9; j++)
            {
                if(i*2==j)
                {
                    a[i][j]=e[i][j]=k[i][j]=chh2;
                }
            }
        }
        gm[30]=gm[32]=gm[35]=gm[37]=chh2;
        return 2;
    }
    else if(p2[2]==1&&p2[4]==1&&p2[6]==1)       //  Secondary diagonal
    {
        gm[31]=gm[33]=gm[34]=gm[36]=chh2;
        for(i=0; i<5; i++)
        {
            for(j=0; j<9; j++)
            {
                if(i==0&&j==8||i==1&&j==6||i==2&&j==4||i==3&&j==2||i==4&&j==0)
                {
                    c[i][j]=e[i][j]=g[i][j]=chh2;
                }
            }
        }
        return 2;
    }
    else
        return;
}

/*

    Play again function.

*/

int playagain()
{
    char ccc;
    printf("\n    Press any key to play again OR press E/e to stop.");
    fflush(stdin);
    ccc=getch();
    if(ccc!='E'&&ccc!='e')                        //    If user press 'E'/'e' game will stop.
    {
        return 1;
    }
    else
    {
ex:                                               //     Confirmation of exit the game.
        print();
        printf("\n\t\tDo you want to exit the game?\n");
        printf("\t\t      1) YES       2)NO\n");
        char n=getch();
        if(n=='1')
        {
            print();
            printf("\n\t\t\tThank You");
            getch();
            return 0;
        }
        else if(n=='2')
        {
            return 1;
        }
        else
        {
            system("cls");
            print();
            printf("\n\t\t     Press Correctly!!\n");
            sleep(1);
            goto ex;
        }
    }
}

/*

    Banner.

*/

void banner()
{
    int i;                                      //  Tic Tac Toe banner top of the screen.
    printf("\t\t   ");
    for(i = 0; i <= 20; i++)
    {
        printf("%c",177);
    }
    printf("\n\t\t   %c%c\tTic Tac Toe   %c%c\n",177,177,177,177);
    printf("\t\t   ");
    for(i = 0; i <= 20; i++)
    {
        printf("%c",177);
    }
    printf("\n");
}

/*

    Loading ......

*/

void load()
{
    int i,r,p,q;                            //  Loading pattern.
    char c=177;
tic:
    system("cls");
    banner();
    if(level==0){
        printf("\n\n\n\n\n\n\t\tWelcome to Tic Tac Toe Game.");
        printf("\n\n\n\t\t---------- Level ----------\n\n");
        printf("\t\t1. Easy.\t    2. Hard.\n");
        fflush(stdin);
        level=getch();
        level=level-48;
        if(level==1||level==2){
            if(level==1){
                strcat(levelst,"Easy");
            }
            else if(level==2){
                strcat(levelst,"Hard");
            }
            goto tic;
        }
        else{
            level=0;
            goto tic;
        }
    }
    system("cls");
    banner();
    printf("\n\n\n\n\n\n\n\n\n\t\t\t loading...\n\n\t     ");
    for(r=1; r<=30; r++)
    {
        printf("%c",c);
        for(q=0; q<=59999999; q++);             //  To display the character slowly
    }
}

/*

    Computer move.

*/

int cmpmove()                                   //  For hard moves of computer.
{
    if(p2[0]==0&&p2[1]==1&&p2[2]==1&&check[0]==0)           //  1st row
    {
        return 1;
    }
    else if(p2[0]==1&&p2[1]==0&&p2[2]==1&&check[1]==0)      //  1st row
    {
        return 2;
    }
    else if(p2[0]==1&&p2[1]==1&&p2[2]==0&&check[2]==0)      //  1st row
    {
        return 3;
    }
    else if(p2[3]==0&&p2[4]==1&&p2[5]==1&&check[3]==0)      //  2nd row
    {
        return 4;
    }
    else if(p2[3]==1&&p2[4]==0&&p2[5]==1&&check[4]==0)      //  2nd row
    {
        return 5;
    }
    else if(p2[3]==1&&p2[4]==1&&p2[5]==0&&check[5]==0)      //  2nd row
    {
        return 6;
    }
    else if(p2[6]==0&&p2[7]==1&&p2[8]==1&&check[6]==0)      //  3rd row
    {
        return 7;
    }
    else if(p2[6]==1&&p2[7]==0&&p2[8]==1&&check[7]==0)      //  3rd row
    {
        return 8;
    }
    else if(p2[6]==1&&p2[7]==1&&p2[8]==0&&check[8]==0)      //  3rd row
    {
        return 9;
    }
    else if(p2[0]==0&&p2[3]==1&&p2[6]==1&&check[0]==0)      //  1st column
    {
        return 1;
    }
    else if(p2[0]==1&&p2[3]==0&&p2[6]==1&&check[3]==0)      //  1st column
    {
        return 4;
    }
    else if(p2[0]==1&&p2[3]==1&&p2[6]==0&&check[6]==0)      //  1st column
    {
        return 7;
    }
    else if(p2[1]==0&&p2[4]==1&&p2[7]==1&&check[1]==0)      //  2nd column
    {
        return 2;
    }
    else if(p2[1]==1&&p2[4]==0&&p2[7]==1&&check[4]==0)      //  2nd column
    {
        return 5;
    }
    else if(p2[1]==1&&p2[4]==1&&p2[7]==0&&check[7]==0)      //  2nd column
    {
        return 8;
    }
    else if(p2[2]==0&&p2[5]==1&&p2[8]==1&&check[2]==0)      //  3rd column
    {
        return 3;
    }
    else if(p2[2]==1&&p2[5]==0&&p2[8]==1&&check[5]==0)      //  3rd column
    {
        return 6;
    }
    else if(p2[2]==1&&p2[5]==1&&p2[8]==0&&check[8]==0)      //  3rd column
    {
        return 9;
    }
    else if(p2[0]==0&&p2[4]==1&&p2[8]==1&&check[0]==0)      //  Primary diagonal
    {
        return 1;
    }
    else if(p2[0]==1&&p2[4]==0&&p2[8]==1&&check[4]==0)      //  Primary diagonal
    {
        return 5;
    }
    else if(p2[0]==1&&p2[4]==1&&p2[8]==0&&check[8]==0)      //  Primary diagonal
    {
        return 9;
    }
    else if(p2[2]==0&&p2[4]==1&&p2[6]==1&&check[2]==0)      //  Secondary diagonal
    {
        return 3;
    }
    else if(p2[2]==1&&p2[4]==0&&p2[6]==1&&check[4]==0)      //  Secondary diagonal
    {
        return 5;
    }
    else if(p2[2]==1&&p2[4]==1&&p2[6]==0&&check[6]==0)      //  Secondary diagonal
    {
        return 7;
    }
    else if(p1[0]==0&&p1[1]==1&&p1[2]==1&&check[0]==0)      //  1st row
    {
        return 1;
    }
    else if(p1[0]==1&&p1[1]==0&&p1[2]==1&&check[1]==0)      //  1st row
    {
        return 2;
    }
    else if(p1[0]==1&&p1[1]==1&&p1[2]==0&&check[2]==0)      //  1st row
    {
        return 3;
    }
    else if(p1[3]==0&&p1[4]==1&&p1[5]==1&&check[3]==0)      //  2nd row
    {
        return 4;
    }
    else if(p1[3]==1&&p1[4]==0&&p1[5]==1&&check[4]==0)      //  2nd row
    {
        return 5;
    }
    else if(p1[3]==1&&p1[4]==1&&p1[5]==0&&check[5]==0)      //  2nd row
    {
        return 6;
    }
    else if(p1[6]==0&&p1[7]==1&&p1[8]==1&&check[6]==0)      //  3rd row
    {
        return 7;
    }
    else if(p1[6]==1&&p1[7]==0&&p1[8]==1&&check[7]==0)      //  3rd row
    {
        return 8;
    }
    else if(p1[6]==1&&p1[7]==1&&p1[8]==0&&check[8]==0)      //  3rd row
    {
        return 9;
    }
    else if(p1[0]==0&&p1[3]==1&&p1[6]==1&&check[0]==0)      //  1st column
    {
        return 1;
    }
    else if(p1[0]==1&&p1[3]==0&&p1[6]==1&&check[3]==0)      //  1st column
    {
        return 4;
    }
    else if(p1[0]==1&&p1[3]==1&&p1[6]==0&&check[6]==0)      //  1st column
    {
        return 7;
    }
    else if(p1[1]==0&&p1[4]==1&&p1[7]==1&&check[1]==0)      //  2nd column
    {
        return 2;
    }
    else if(p1[1]==1&&p1[4]==0&&p1[7]==1&&check[4]==0)       //  2nd column
    {
        return 5;
    }
    else if(p1[1]==1&&p1[4]==1&&p1[7]==0&&check[7]==0)       //  2nd column
    {
        return 8;
    }
    else if(p1[2]==0&&p1[5]==1&&p1[8]==1&&check[2]==0)       //  3rd column
    {
        return 3;
    }
    else if(p1[2]==1&&p1[5]==0&&p1[8]==1&&check[5]==0)       //  3rd column
    {
        return 6;
    }
    else if(p1[2]==1&&p1[5]==1&&p1[8]==0&&check[8]==0)       //  3rd column
    {
        return 9;
    }
    else if(p1[0]==0&&p1[4]==1&&p1[8]==1&&check[0]==0)       //  Primary diagonal
    {
        return 1;
    }
    else if(p1[0]==1&&p1[4]==0&&p1[8]==1&&check[4]==0)       //  Primary diagonal
    {
        return 5;
    }
    else if(p1[0]==1&&p1[4]==1&&p1[8]==0&&check[8]==0)       //  Primary diagonal
    {
        return 9;
    }
    else if(p1[2]==0&&p1[4]==1&&p1[6]==1&&check[2]==0)       //  Secondary diagonal
    {
        return 3;
    }
    else if(p1[2]==1&&p1[4]==0&&p1[6]==1&&check[4]==0)       //  Secondary diagonal
    {
        return 5;
    }
    else if(p1[2]==1&&p1[4]==1&&p1[6]==0&&check[6]==0)       //  Secondary diagonal
    {
        return 7;
    }
    else{                                                    //  Random move.
        if(check[4]==0){
            return 5;
        }
        else if(check[8]==0){
            return 9;
        }
        else if(check[0]==0){
            return 1;
        }
        else if(check[6]==0){
            return 7;
        }
        else if(check[2]==0){
            return 3;
        }
        int n=rand()%9+1;
        while(check[n-1]!=0){
            n=rand()%9+1;
        }
        return n;
    }
}

/*

    Main function.

*/

int main()
{
    banner();
    load();
main:
    fflush(stdin);
    x=1;
    int i,j,n;
    for(i=0; i<50; i++)                         //  Storing space(ASCII value : 32) in gm array.
    {
        gm[i]=32;
    }                                           //  Storing chh character in particular index to print main pattern perfectly.
    gm[30]=gm[31]=gm[34]=gm[35]=gm[40]=gm[41]=gm[42]=gm[45]=gm[46]=gm[47]=chh;
    gm[38]=gm[39]=gm[43]=gm[44]=gm[48]=gm[49]=chh;
    for(i=0; i<5; i++)
    {
        for(j=0; j<9; j++)
        {
            if(i==2&&j==4)
            {
                a[i][j]='1';
                b[i][j]='2';
                c[i][j]='3';
                d[i][j]='4';
                e[i][j]='5';                    //  Storing partition number
                f[i][j]='6';
                g[i][j]='7';
                h[i][j]='8';
                k[i][j]='9';
            }
            else                                //  Storing space(ASCII value : 32) in all partition array.
            {
                a[i][j]=b[i][j]=c[i][j]=d[i][j]=e[i][j]=f[i][j]=g[i][j]=h[i][j]=k[i][j]=32;

            }
            check[j]=p1[j]=p2[j]=0;             //  Firstly both players have zero move.
        }
    }
    while(1)                                    //  While loop until game end.
    {
        for(i=0; i<9; i++)
        {
            if(check[i]==0)                     //  If any partition is empty it will break this loop and i not equal to 9.
                break;
        }
        if(i==9)                                //  If all partition are done before anyone win it will draw.
        {
            print();
            printf("\n\t\t\tGame Draw.\n");
            if(playagain()==1)
            {
                goto main;                      //  Play again.
            }
            else
            {
                return 0;
            }
        }
enter:
        fflush(stdin);
        print();
        char nn;
        if(x==1)                                //  To print whose move now.
        {
            printf("\n\n\tYour turn - ");
            fflush(stdin);
            nn=getch();
            n=nn-48;
            printf("%c",nn);
        }
        else if(x==2)
        {
            printf("\n\n\tComputer turn - ");
            if(level==1){
                n=rand()%9+1;
                while(check[n-1]!=0){
                    n=rand()%9+1;
                }
            }
            else{
                n=cmpmove();
            }
            printf("%d",n);
            sleep(1);
        }
        if(nn=='e'||nn=='E'){
ex:                                             //     Confirmation of exit the game.
        print();
        printf("\n\t\tDo you want to exit the game?\n");
        printf("\t\t      1) YES       2)NO\n");
        char n=getch();
        if(n=='1')
        {
            print();
            printf("\n\t\t\tThank You");
            getch();
            return 0;
        }
        else if(n=='2')
        {
            goto enter;
        }
        else
        {
            system("cls");
            print();
            printf("\n\t\t     Press Correctly!!\n");
            sleep(1);
            goto ex;
        }
        }

        if(n==0)
        {
reset:
            fflush(stdin);                      //  Confirmation of reset the game.
            print();
            printf("\n\t\tDo you want to reset the game?\n");
            printf("\t\t      1) YES       2)NO\n");
            n=getch();
            if(n=='1')
            {
                playerscr=cmpscr=0;
                goto main;
            }
            else if(n=='2')
            {
                goto enter;
            }
            else
            {
                system("cls");
                print();
                printf("\n\t\t     Press Correctly!!\n");
                sleep(1);
                goto reset;
            }

        }
        else if(nn==13)
        {
            fflush(stdin);
            print();
            printf("\n\t\t No need to press Enter key!\n");
            printf("\t\t  Press between 1 to 9 key.\n");
            sleep(3);
            goto enter;

        }
        else if(n>0&&n<10)
        {
            ch(n);
        }
        else
        {                                       //  If inputed value not in between 1 to 9.
            fflush(stdin);
            print();
            printf("\n\t\t     Press Correctly!!\n");
            sleep(1);
        }
        print();
        if(game()==1)                           //  If game function returns 1, 1st player win.
        {
            Sleep(100);
            playerscr=playerscr+1;
            print();
            printf("\n\t\t      1st Player Win.\n");
            fflush(stdin);
            if(playagain()==1)
            {
                goto main;                      //  Play again.
            }
            else
            {
                return 0;
            }
        }
        else if(game()==2)                      //  If game function returns 2, Computer win.
        {
            Sleep(100);
            cmpscr=cmpscr+1;
            print();
            printf("\n\t\t      Computer Win.\n");
            fflush(stdin);
            if(playagain()==1)
            {
                goto main;                      //  Play again.
            }
            else
            {
                return 0;
            }
        }
    }
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
char a[5][9],b[5][9],c[5][9],d[5][9],e[5][9],f[5][9],g[5][9],h[5][9],k[5][9],p1[9],p2[9],gm[38];
int check[9],x=1,y=0,z=0;
void * cross(char t[5][9])
{
    int i,j;
    for(i=0; i<5; i++)
    {
        for(j=0; j<9; j++)
        {
            if(i*2==j)
            {
                t[i][j]='*';
            }
            if(i==0&&j==8||i==1&&j==6||i==2&&j==4||i==3&&j==2||i==4&&j==0)
            {
                t[i][j]='*';
            }
        }
    }
}
void * zero(char t[5][9])
{
    int i,j;
    for(i=0; i<5; i++)
    {
        for(j=0; j<9; j++)
        {
            if(((i==0||i==4)&&j%2==0)||(((i>0&&i<4)&&(j==0||j==8))))
            {
                t[i][j]='*';
            }
            else
            {
                t[i][j]=32;
            }
        }
    }
}
void ch(int n)
{
    if(check[n-1]==0)
    {
        if(x==2)
        {
            p2[n-1]=1;
            switch(n)
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
        else if(x==1)
        {
            p1[n-1]=1;
            switch(n)
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
        check[n-1]=1;
        if(x==1)
        {
            x=2;
        }
        else if(x==2)
        {
            x=1;
        }
    }
    else
    {
        fflush(stdin);
        printf("\t\t\tIts given already!!\n");
        sleep(1);
        print();
    }
}
void print()
{
    char cx='*';
    system("cls");
    printf("\n\n");
    printf("\t _________________________________________\n");
    printf("\t|             |             |             |\n");
    printf("\t|  %c%c%c%c%c%c%c%c%c  |  %c%c%c%c%c%c%c%c%c  |  %c%c%c%c%c%c%c%c%c  |\n",a[0][0],a[0][1],a[0][2],a[0][3],a[0][4],a[0][5],a[0][6],a[0][7],a[0][8],b[0][0],b[0][1],b[0][2],b[0][3],b[0][4],b[0][5],b[0][6],b[0][7],b[0][8],c[0][0],c[0][1],c[0][2],c[0][3],c[0][4],c[0][5],c[0][6],c[0][7],c[0][8]);
    printf("\t|  %c%c%c%c%c%c%c%c%c  |  %c%c%c%c%c%c%c%c%c  |  %c%c%c%c%c%c%c%c%c  |\n",a[1][0],a[1][1],a[1][2],a[1][3],a[1][4],a[1][5],a[1][6],a[1][7],a[1][8],b[1][0],b[1][1],b[1][2],b[1][3],b[1][4],b[1][5],b[1][6],b[1][7],b[1][8],c[1][0],c[1][1],c[1][2],c[1][3],c[1][4],c[1][5],c[1][6],c[1][7],c[1][8]);
    printf("\t|  %c%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c%c  |\n",a[2][0],a[2][1],a[2][2],a[2][3],a[2][4],a[2][5],a[2][6],a[2][7],a[2][8],gm[0],gm[1],gm[2],gm[3],b[2][0],b[2][1],b[2][2],b[2][3],b[2][4],b[2][5],b[2][6],b[2][7],b[2][8],gm[4],gm[5],gm[6],gm[7],c[2][0],c[2][1],c[2][2],c[2][3],c[2][4],c[2][5],c[2][6],c[2][7],c[2][8]);
    printf("\t|  %c%c%c%c%c%c%c%c%c  |  %c%c%c%c%c%c%c%c%c  |  %c%c%c%c%c%c%c%c%c  |                      *       *\n",a[3][0],a[3][1],a[3][2],a[3][3],a[3][4],a[3][5],a[3][6],a[3][7],a[3][8],b[3][0],b[3][1],b[3][2],b[3][3],b[3][4],b[3][5],b[3][6],b[3][7],b[3][8],c[3][0],c[3][1],c[3][2],c[3][3],c[3][4],c[3][5],c[3][6],c[3][7],c[3][8]);
    printf("\t|  %c%c%c%c%c%c%c%c%c  |  %c%c%c%c%c%c%c%c%c  |  %c%c%c%c%c%c%c%c%c  |                        *   *\n",a[4][0],a[4][1],a[4][2],a[4][3],a[4][4],a[4][5],a[4][6],a[4][7],a[4][8],b[4][0],b[4][1],b[4][2],b[4][3],b[4][4],b[4][5],b[4][6],b[4][7],b[4][8],c[4][0],c[4][1],c[4][2],c[4][3],c[4][4],c[4][5],c[4][6],c[4][7],c[4][8]);
    printf("\t|------------%c|-------------|%c------------|    1st Player :          *\n",gm[30],gm[31]);
    printf("\t|      %c      |%c     %c     %c|      %c      |                        *   *\n",gm[24],gm[32],gm[26],gm[33],gm[28]);
    printf("\t|  %c%c%c%c%c%c%c%c%c  |  %c%c%c%c%c%c%c%c%c  |  %c%c%c%c%c%c%c%c%c  |                      *       *\n",d[0][0],d[0][1],d[0][2],d[0][3],d[0][4],d[0][5],d[0][6],d[0][7],d[0][8],e[0][0],e[0][1],e[0][2],e[0][3],e[0][4],e[0][5],e[0][6],e[0][7],e[0][8],f[0][0],f[0][1],f[0][2],f[0][3],f[0][4],f[0][5],f[0][6],f[0][7],f[0][8]);
    printf("\t|  %c%c%c%c%c%c%c%c%c  |  %c%c%c%c%c%c%c%c%c  |  %c%c%c%c%c%c%c%c%c  |\n",d[1][0],d[1][1],d[1][2],d[1][3],d[1][4],d[1][5],d[1][6],d[1][7],d[1][8],e[1][0],e[1][1],e[1][2],e[1][3],e[1][4],e[1][5],e[1][6],e[1][7],e[1][8],f[1][0],f[1][1],f[1][2],f[1][3],f[1][4],f[1][5],f[1][6],f[1][7],f[1][8]);
    printf("\t|  %c%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c%c  |\n",d[2][0],d[2][1],d[2][2],d[2][3],d[2][4],d[2][5],d[2][6],d[2][7],d[2][8],gm[8],gm[9],gm[10],gm[11],e[2][0],e[2][1],e[2][2],e[2][3],e[2][4],e[2][5],e[2][6],e[2][7],e[2][8],gm[12],gm[13],gm[14],gm[15],f[2][0],f[2][1],f[2][2],f[2][3],f[2][4],f[2][5],f[2][6],f[2][7],f[2][8]);
    printf("\t|  %c%c%c%c%c%c%c%c%c  |  %c%c%c%c%c%c%c%c%c  |  %c%c%c%c%c%c%c%c%c  |                      * * * * *\n",d[3][0],d[3][1],d[3][2],d[3][3],d[3][4],d[3][5],d[3][6],d[3][7],d[3][8],e[3][0],e[3][1],e[3][2],e[3][3],e[3][4],e[3][5],e[3][6],e[3][7],e[3][8],f[3][0],f[3][1],f[3][2],f[3][3],f[3][4],f[3][5],f[3][6],f[3][7],f[3][8]);
    printf("\t|  %c%c%c%c%c%c%c%c%c  |  %c%c%c%c%c%c%c%c%c  |  %c%c%c%c%c%c%c%c%c  |                      *       *          \n",d[4][0],d[4][1],d[4][2],d[4][3],d[4][4],d[4][5],d[4][6],d[4][7],d[4][8],e[4][0],e[4][1],e[4][2],e[4][3],e[4][4],e[4][5],e[4][6],e[4][7],e[4][8],f[4][0],f[4][1],f[4][2],f[4][3],f[4][4],f[4][5],f[4][6],f[4][7],f[4][8]);
    printf("\t|-------------|%c-----------%c|-------------|    2nd Player :      *       *         \n",gm[34],gm[35]);
    printf("\t|      %c     %c|     %c       |%c     %c      |                      *       *      \n",gm[25],gm[36],gm[27],gm[37],gm[29]);
    printf("\t|  %c%c%c%c%c%c%c%c%c  |  %c%c%c%c%c%c%c%c%c  |  %c%c%c%c%c%c%c%c%c  |                      * * * * *\n",g[0][0],g[0][1],g[0][2],g[0][3],g[0][4],g[0][5],g[0][6],g[0][7],g[0][8],h[0][0],h[0][1],h[0][2],h[0][3],h[0][4],h[0][5],h[0][6],h[0][7],h[0][8],k[0][0],k[0][1],k[0][2],k[0][3],k[0][4],k[0][5],k[0][6],k[0][7],k[0][8]);
    printf("\t|  %c%c%c%c%c%c%c%c%c  |  %c%c%c%c%c%c%c%c%c  |  %c%c%c%c%c%c%c%c%c  |\n",g[1][0],g[1][1],g[1][2],g[1][3],g[1][4],g[1][5],g[1][6],g[1][7],g[1][8],h[1][0],h[1][1],h[1][2],h[1][3],h[1][4],h[1][5],h[1][6],h[1][7],h[1][8],k[1][0],k[1][1],k[1][2],k[1][3],k[1][4],k[1][5],k[1][6],k[1][7],k[1][8]);
    printf("\t|  %c%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c%c  |\n",g[2][0],g[2][1],g[2][2],g[2][3],g[2][4],g[2][5],g[2][6],g[2][7],g[2][8],gm[16],gm[17],gm[18],gm[19],h[2][0],h[2][1],h[2][2],h[2][3],h[2][4],h[2][5],h[2][6],h[2][7],h[2][8],gm[20],gm[21],gm[22],gm[23],k[2][0],k[2][1],k[2][2],k[2][3],k[2][4],k[2][5],k[2][6],k[2][7],k[2][8]);
    printf("\t|  %c%c%c%c%c%c%c%c%c  |  %c%c%c%c%c%c%c%c%c  |  %c%c%c%c%c%c%c%c%c  |\n",g[3][0],g[3][1],g[3][2],g[3][3],g[3][4],g[3][5],g[3][6],g[3][7],g[3][8],h[3][0],h[3][1],h[3][2],h[3][3],h[3][4],h[3][5],h[3][6],h[3][7],h[3][8],k[3][0],k[3][1],k[3][2],k[3][3],k[3][4],k[3][5],k[3][6],k[3][7],k[3][8]);
    printf("\t|  %c%c%c%c%c%c%c%c%c  |  %c%c%c%c%c%c%c%c%c  |  %c%c%c%c%c%c%c%c%c  |\n",g[4][0],g[4][1],g[4][2],g[4][3],g[4][4],g[4][5],g[4][6],g[4][7],g[4][8],h[4][0],h[4][1],h[4][2],h[4][3],h[4][4],h[4][5],h[4][6],h[4][7],h[4][8],k[4][0],k[4][1],k[4][2],k[4][3],k[4][4],k[4][5],k[4][6],k[4][7],k[4][8]);
    printf("\t|_____________|_____________|_____________|\n");
    printf("\n");
}
int game()
{
    int i,j;
    if(p1[0]==1&&p1[1]==1&&p1[2]==1)
    {
        for(i=0;i<=8;i++){
            if(i<8){
                gm[i]='#';
            }
            a[2][i]=b[2][i]=c[2][i]='#';
        }
        return 1;
    }
    else if(p1[0]==1&&p1[4]==1&&p1[8]==1)
    {
        for(i=0;i<5;i++){
            for(j=0;j<9;j++){
                if(i*2==j){
                    a[i][j]=e[i][j]=k[i][j]='#';
                }
            }
        }
        gm[30]=gm[32]=gm[35]=gm[37]='#';
        return 1;
    }
    else if(p1[0]==1&&p1[3]==1&&p1[6]==1)
    {
        gm[24]=gm[25]='#';
        for(i=0;i<5;i++){
            a[i][4]=d[i][4]=g[i][4]='#';
        }
        return 1;
    }
    else if(p1[1]==1&&p1[4]==1&&p1[7]==1)
    {
        gm[26]=gm[27]='#';
        for(i=0;i<5;i++){
            b[i][4]=e[i][4]=h[i][4]='#';
        }
        return 1;
    }
    else if(p1[2]==1&&p1[4]==1&&p1[6]==1)
    {
        gm[31]=gm[33]=gm[34]=gm[36]='#';
        for(i=0;i<5;i++){
            for(j=0;j<9;j++){
                if(i==0&&j==8||i==1&&j==6||i==2&&j==4||i==3&&j==2||i==4&&j==0){
                    c[i][j]=e[i][j]=g[i][j]='#';
                }
            }
        }
        return 1;
    }
    else if(p1[2]==1&&p1[5]==1&&p1[8]==1)
    {
        gm[28]=gm[29]='#';
        for(i=0;i<5;i++){
            c[i][4]=f[i][4]=k[i][4]='#';
        }
        return 1;
    }
    else if(p1[3]==1&&p1[4]==1&&p1[5]==1)
    {
        for(i=8;i<=16;i++){
            if(i<=15){
                gm[i]='#';
            }
            d[2][i-8]=e[2][i-8]=f[2][i-8]='#';
        }
        return 1;
    }
    else if(p1[6]==1&&p1[7]==1&&p1[8]==1)
    {
        for(i=16;i<=24;i++){
            if(i<=23){
                gm[i]='#';
            }
            g[2][i-16]=h[2][i-16]=k[2][i-16]='#';
        }
        return 1;
    }
    else if(p2[0]==1&&p2[1]==1&&p2[2]==1)
    {
        for(i=0;i<=8;i++){
            if(i<8){
                gm[i]='#';
            }
            a[2][i]=b[2][i]=c[2][i]='#';
        }
        return 2;
    }
    else if(p2[0]==1&&p2[4]==1&&p2[8]==1)
    {
        for(i=0;i<5;i++){
            for(j=0;j<9;j++){
                if(i*2==j){
                    a[i][j]=e[i][j]=k[i][j]='#';
                }
            }
        }
        gm[30]=gm[32]=gm[35]=gm[37]='#';
        return 2;
    }
    else if(p2[0]==1&&p2[3]==1&&p2[6]==1)
    {
        gm[24]=gm[25]='#';
        for(i=0;i<5;i++){
            a[i][4]=d[i][4]=g[i][4]='#';
        }
        return 2;
    }
    else if(p2[1]==1&&p2[4]==1&&p2[7]==1)
    {
        gm[26]=gm[27]='#';
        for(i=0;i<5;i++){
            b[i][4]=e[i][4]=h[i][4]='#';
        }
        return 2;
    }
    else if(p2[2]==1&&p2[4]==1&&p2[6]==1)
    {
        gm[31]=gm[33]=gm[34]=gm[36]='#';
        for(i=0;i<5;i++){
            for(j=0;j<9;j++){
                if(i==0&&j==8||i==1&&j==6||i==2&&j==4||i==3&&j==2||i==4&&j==0){
                    c[i][j]=e[i][j]=g[i][j]='#';
                }
            }
        }
        return 2;
    }
    else if(p2[2]==1&&p2[5]==1&&p2[8]==1)
    {
        gm[28]=gm[29]='#';
        for(i=0;i<5;i++){
            c[i][4]=f[i][4]=k[i][4]='#';
        }
        return 2;
    }
    else if(p2[3]==1&&p2[4]==1&&p2[5]==1)
    {
        for(i=8;i<=16;i++){
            if(i<=15){
                gm[i]='#';
            }
            d[2][i-8]=e[2][i-8]=f[2][i-8]='#';
        }
        return 2;
    }
    else if(p2[6]==1&&p2[7]==1&&p2[8]==1)
    {
        for(i=16;i<=24;i++){
            if(i<=23){
                gm[i]='#';
            }
            g[2][i-16]=h[2][i-16]=k[2][i-16]='#';
        }
        return 2;
    }
    else
        return 3;
}
int main()
{
    x=1;
    int i,j,n;
    for(i=0;i<38;i++){
        gm[i]=32;
    }
    gm[30]=gm[31]=gm[34]=gm[35]='-';
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
                e[i][j]='5';
                f[i][j]='6';
                g[i][j]='7';
                h[i][j]='8';
                k[i][j]='9';
            }
            else
            {
                a[i][j]=b[i][j]=c[i][j]=d[i][j]=e[i][j]=f[i][j]=g[i][j]=h[i][j]=k[i][j]=32;

            }
            check[j]=p1[j]=p2[j]=0;
        }
    }
    while(1)
    {
        int choi;
        for(i=0; i<9; i++)
        {
            if(check[i]==0)
                break;
        }
        if(i==9)
        {
            print();
            printf("\t\t\tGame Draw.\n");
            printf("\n\t\tEnter 1 to try again.");
            fflush(stdin);
            scanf("%d",&choi);
            if(choi==1)
            {
                main();
            }
            else
            {
                print();
                printf("\t\t\tThank You\n");
                return 0;
            }
        }
        print();
        if(x==1)
        {
            printf("\n\n\t1st Player : ");
        }
        else if(x==2)
        {
            printf("\n\n\t2nd Player : ");
        }
        scanf("%d",&n);
        if(n>0&&n<10)
        {
            ch(n);
        }
        else
        {
            fflush(stdin);
            printf("\t\t\tEnter Correctly!!\n");
            sleep(1);
        }
        if(game()==1)
        {
            print();
            printf("\t\t\t1st Player Win.\n");
            fflush(stdin);
            printf("\n\t\tEnter 1 to try again.");
            scanf("%d",&choi);
            if(choi==1)
            {
                main();
            }
            else
            {
                print();
                printf("\t\t\tThank You\n");
                return 0;
            }
        }
        else if(game()==2)
        {
            print();
            printf("\t\t\t2nd Player Win.\n");
            fflush(stdin);
            printf("\n\t\tEnter 1 to try again.");
            scanf("%d",&choi);
            if(choi==1)
            {
                main();
            }
            else
            {
                print();
                printf("\t\t\tThank You\n");
                return 0;
            }
        }
    }
    return 0;
}

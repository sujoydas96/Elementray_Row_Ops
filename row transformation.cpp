#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int check1(char c)                                                                             //checks the matrix entered
{
    switch (c){
        case 'N':
            return 0;
            break;
        case 'n':
            return 0;
            break;
      default:
            return 1;
    }
}

/*int getY(int x,int n,int a[][n])
{
    int y=a[x][x];
    return y;
}

int getX(int x, int y,int n, int a[n][n])
{
     int r=a[x][y];oloololololololodfpjsadf oasfcsfcnoi
     return r;
}

int middlestp(int p, int q ,int i,int n, int a[n][n], int c[n][n])
{


}*/

int transform(int n>0, int a[n][n], int c[n][n])
{
    for(int j=1;j<=n;j++)
    {
        int y=a[j][j];
        for(int i=1;i<=n;i++)
        {
            int x = a[i][j];
            if(i!=j)
            {
               /* middlestp(x,y,i,n,a,c);*/
                for(int k=1;k<=n;k++)
                {
                    a[i][k]=x*a[k][k]-y*a[i][k];
                    c[i][k]=x*c[k][k]-y*a[i][k];

            }
        }

        }
        return a[n][n];
        return c[n][n];
    }
}

int main()
{
    cout<<"Enter the order of the square matrix: ";
    int n;                                              // takes the order of the matrix
    cin>>n;
    int a[n][n];
    int c[n][n];

    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)                                                                    // takes the values of the matrix
        {
            cout<<"enter the value of ("<<i<<","<<j<<")th element:";
            cin>>a[i][j];

        }
    system("CLS");

    cout<<"The entered matrix is: \n\n"<<endl;                                                       // shows the entered matrix

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        cout<<"\t"<<a[i][j];
        cout<<"\n";
    }



    cout<<"Press any key to continue, press 'N' to rewrite the matrix: ";                             //askes user to check matrix
    char b;
    cin>>b;
    if(check1(b)==0){main();}
    system("CLS");

    cout<<"The matrix can be written as: \n";

    for(int i=1;i<=n;i++)for(int j=1;j<=n;j++){
    if(i==j)
        c[i][j]=1;
    else
        c[i][j]=0;
}

if(n%2==0){
    for(int i=1;i<=n;i++){                                                    //output the initialization step order is even
        for(int j=1;j<=n;j++)
        {                                                                    //outputs the = portion
            cout<<"\t"<<a[i][j];
            if(i==(n/2) && j==n)
                cout<<"\t=";
        }
        cout<<"\n";
    }
    cout<<"\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)                                                //outputs the identity matrix portion
        {
           cout<<c[i][j]<<"\t";
        }
        cout<<"\n";
    }

 }

if(n%2==1){
    for(int i=1;i<=n;i++){                                                  //output the initialization step when order is odd
        for(int j=1;j<=n;j++)
        {
            cout<<"\t"<<a[i][j];
            if(j==n && i==(((n-1)/2)+1))
            cout<<"\t=";
        }
        cout<<"\n";
    }
    cout<<"\n";

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)                                                    //outputs the identity matrix portion
        {
           cout<<c[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
a[n][n]=a[n][n];
transform(n,a,c);

cout<<"The required inverse of the matrix is: ";
for(int i=0;i<=n;i++)
    for(int j=0;j<=n;j++)
        cout<<a[i][j];
cout<<"And the identity matrix is: ";
for(int i=0;i<=n;i++)
    for(int j=0;j<=n;j++)
        cout<<c[i][j];

getch();
}



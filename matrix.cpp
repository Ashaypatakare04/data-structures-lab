#include<iostream>
using namespace std;
int main(){
    int a[10][10];
    int b[10][10];
    int c[10][10];
    int d,i,j,n;
    cout<<"enter the degree of matrix:"<<endl;
    cin>>n;
    cout<<"Enter the elements of  matrix1 "<<endl;
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements of  matrix2 "<<endl;
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            cin>>b[i][j];
        }
    }

    cout<<"1.add  2.sub "<<endl;
    cin>>d;
    if (d==1){
        for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    }
    else{
        for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    }
    cout<<"Elements of matrix 3:"<<endl;
     for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;    
}
return 0;
}
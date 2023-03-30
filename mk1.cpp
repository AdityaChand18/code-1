#include <iostream>
#include <math.h>

using namespace std;

float exponential(float x, int n){//this is function for taylors expansion of e^x
    float sum=1;
    int factorial=1;
    for(int i=1;i<n;i++){
        factorial=factorial*i;
        sum=sum+pow(x,i)/factorial;
    }
    return sum;

}

float sin(float x, int n){//  write ith term in mathematics form then make code accordingly 
    float sum=0;
    int factorial=1;
    for (int i=1;i<=n;i++){//this loop will add each term in variable sum
        for (int j=1;j<=2*i-1;j++){//this loop is used to calculate factorial
            factorial=factorial*j;
        }
        sum=sum+(pow(-1,i+1)*pow(x,(2*i-1)))/factorial;//here we have done pow for using positive and negative value of 1
    }
    return sum;
}

float cos(float x, int n){//  write ith term in mathematics form then make code accordingly
    float sum=0;
    int factorial=1;
    for (int i=1;i<=n;i++){//this loop will add each term in variable sum
        for (int j=1;j<=2*i-2;j++){//this loop is used to calculate factorial
            factorial=factorial*j;
        }
        sum=sum+(pow(-1,i+1)*pow(x,(2*i-2)))/factorial;//here we have done pow for using positive and negative value of 1
    }
    return sum;
}

int main(){
    int n_in;
    float x_in,answer1,answer2,answer3;
    cout<<"Enter the value of x:";
    cin>>x_in;
    cout<<"Enter the value of n:";
    cin>>n_in;
    answer1=exponential(x_in,n_in);
    answer2=sin(x_in,n_in);
    answer3=cos(x_in,n_in);
    cout<<"The value of taylor's expansion of e^x is: "<<answer1<<endl;
    cout<<"The value of taylor's expansion of sinx is: "<<answer2<<endl;
    cout<<"The value of taylor's expansion of cosx is: "<<answer3<<endl;
    return 0;
}

//============================================================================
// Name        : Try.cpp
// Author      : AAA
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <math.h>
#include <memory>
#include <MyLinearAlgebra.h>


using namespace MyLinearAlgebra;


int main() {

	TVector A(4);

for(int i=0;i<4;i++)
{
	A[i]=i;
}

TVector B=-A;
TVector QQQ=A.norm();
QQQ.Print();

long double *a=new long double[3]{4 , 2 , 1 };

TVector D(a, 3);

TVector C=A+B;

C.Print();

D.Print();

TMatrix Q(3,3);

for (int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		Q(i,j)=i+j+2;
	}
}
Q(0,0)=1;
std::cout <<Q.det() <<std::endl;

long double **q=new long double *[3];
for(int i=0;i<3;i++)
{
	q[i]=new long double[3]{1,2,3};
}

q[1][2]=0;
TMatrix O(q,3,3);
//O.Print();

std::cout<<std::endl;
Q.Print();

std::cout << "--------------------"<<std::endl;
TVector T=Q*D;
T.Print();
std::cout << "--------------------"<<std::endl;

long double aaa=T*D;
std::cout << aaa<<std::endl;
std::cout  <<std::endl;



TMatrix BB=O*10;
BB.Print();
std::cout <<std::endl;
BB=BB.t();
BB.Print();


BB=BB.swapCols(1,0);
std::cout <<std::endl;
BB.Print();
BB(2,2)=1;
BB(0,1)=5;
std::cout <<std::endl;
BB.Print();

BB=!BB;

BB.Print();

TVector Y=BB.inVector();
Y.Print();
Y.inMatrix().Print();

TVector Arg(3);
for (int i=0;i<3;i++)
{
	Arg[i]=i;
}
TQuaternion  BBB(M_PI/2,Arg);
TQuaternion  CCC(M_PI/3,D);

auto VVV=4*BBB;
VVV.Print();
VVV.norm().Print();
auto mmm=!VVV;
mmm.Print();
TQuaternion * Test1=new TQuaternion(M_PI/2,Arg);
TQuaternion * Test2=new TQuaternion(M_PI/3,D);

std::unique_ptr<TQuaternion> Test4(new TQuaternion(M_PI/2,Arg));


TQuaternion  Test3=(*Test4+*Test2);


long double c= BB.det();
std::cout <<c<<std::endl;

    std::cout << "Hello World!!!" << std::endl; // prints Hello World!!!

	return 0;
}

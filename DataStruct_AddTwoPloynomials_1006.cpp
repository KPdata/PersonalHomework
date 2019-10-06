#include <iostream>
#include<cstdlib>
#include <cstring>
#include<stdlib.h>
#include <string>

using namespace std;
/*
Q:
Write a function to add two polynomials. Don't destroy the input. Use a linked list implementation.
if the polynomials have M and N terms respectively, what is the time complexity of your program?
*/
typedef struct Pfunction
{
    double An;//系数
    double n;//x的次方
    Pfunction* next;

}Pfunction;

Pfunction* Creat(int num)//num为多项式项的个数。)
{
    Pfunction* head;
    Pfunction* mid;
    Pfunction* endd;

    head=(Pfunction*)malloc(sizeof(Pfunction));
    endd=head;//头结点创建。

    for(int i=0;i<num;i++)
    {
        mid=(Pfunction*)malloc(sizeof(Pfunction));
        cin>>mid->An;
        cin>>mid->n;
        mid->next=NULL;
        endd->next=mid;
        endd=mid;
        cout<<"多项式第"<<i+1<<"项创建成功"<<endl;
    }
    cout<<endl<<"多项式创建成功"<<endl;

    return head;
}

void display(Pfunction* head)
{
    Pfunction* p;
    p=head->next;
    while(p!=NULL)
    {
        cout<<p->An<<"x^"<<p->n<<"+";
        p=p->next;
    }
}

int main()
{
    int n,m;//第一个多项式项数为N，第二个多项式项数为M。
    Pfunction* PF1;
    Pfunction* PF2;

    cout<<"Enter the number of two polynomials terms: "<<endl;
    cin>>n>>m;
    cout<<"Create the first polynomial"<<endl;
    PF1=Creat(n);
    cout<<endl<<"Create the second polynomial"<<endl;
    PF2=Creat(m);

    cout<<"f(x)=";
    display(PF1);
    cout<<endl<<"g(x)=";
    display(PF2);

    return 0;
}

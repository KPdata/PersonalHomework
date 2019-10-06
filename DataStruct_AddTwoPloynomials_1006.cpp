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
    double An;//ϵ��
    double n;//x�Ĵη�
    Pfunction* next;

}Pfunction;

Pfunction* Creat(int num)//numΪ����ʽ��ĸ�����)
{
    Pfunction* head;
    Pfunction* mid;
    Pfunction* endd;

    head=(Pfunction*)malloc(sizeof(Pfunction));
    endd=head;//ͷ��㴴����

    for(int i=0;i<num;i++)
    {
        mid=(Pfunction*)malloc(sizeof(Pfunction));
        cin>>mid->An;
        cin>>mid->n;
        mid->next=NULL;
        endd->next=mid;
        endd=mid;
        cout<<"����ʽ��"<<i+1<<"����ɹ�"<<endl;
    }
    cout<<endl<<"����ʽ�����ɹ�"<<endl;

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
    int n,m;//��һ������ʽ����ΪN���ڶ�������ʽ����ΪM��
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

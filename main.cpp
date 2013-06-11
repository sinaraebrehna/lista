#include <iostream>

using namespace std;


class no
{
private:
public:
    int info;
    no* prox;
};

no*concatenalistacs(no* lcs1, no* lcs2)
{
    no*aux1,*aux2;
    aux1=lcs1->prox;
    aux2=lcs2->prox;
    lcs1->prox=aux2;
    return lcs2;
}


int main()
{
    no*lcs2;
    lcs2->info=(2*4);
    cout<<lcs2->info<<endl;
    return 0;
}
//git@github.com:sinaraebrehna/lista.git
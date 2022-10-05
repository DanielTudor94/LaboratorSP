#include<iostream>
using namespace std;

struct book
{
    char book_name[20];
    char paragraf;
    float coloana;
    int bookid;

};

int main()
{
    struct book b[3];
    int i;

    for(i=0; i<3; i++)
    {
        cout<<"\n Introdu detaliile cartii #"<< i+1;
        cout<<"\Introdu carte id: ";
        cin>> b[i].bookid;
        cout<<"Introdu paragraful: ";
        cin>> b[i].paragraf;
        cout<<"introdu coloana: ";
        cin>> b[i].coloana;
    }

    for(i=0; i<3; i++)
    {
        cout<<"\n\n*** Book  "<< i+1 << " ***";
        cout<<"\nBook Id: " << b[i].bookid;
        cout<<"\nBook Name: " << b[i].book_name;
        cout<<"\nBook paragraf: " << b[i].paragraf;
        cout<<"\nBook coloana: " << b[i].coloana;
    }
    return 0;
}

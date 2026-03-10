#include <iostream>
using namespace std;


struct husky{
    double arf_total;
    string treats;
    string bathroom;
    int dogtag;
}
/*struct wolfdog{
    double arf_total;
    string treats;
    string bathroom;
    int dogtag;
}
struct mutts{
    double arf_total;
    string treats;
    string bathroom;
    int dogtag;
}*/

int main(void){
    husky d1;
    husky d2;
    husky d3;

    d1.arf_total = 30;
    d1.treats = "kibble";
    d1.bathroom = "3 times";
    d1.dogtag = 45678;

    d2.arf_total = 10;
    d2.treats = "bones";
    d2.bathroom = "5 times";
    d2.dogtag = 49028;

    d3.arf_total = 1;
    d3.treats = "candy";
    d3.bathroom = "2 times";
    d3.dogtag = 92345;

    cout << d1.arf_total << "," << d1.treats << "," << d1.bathroom << "," << d1.dogtag << endl;
    cout << d2.arf_total << "," << d2.treats << "," << d2.bathroom << "," << d2.dogtag << endl;
    cout << d3.arf_total << "," << d3.treats << "," << d3.bathroom << "," << d3.dogtag << endl;

}
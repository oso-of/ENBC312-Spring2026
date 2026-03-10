#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream fout
    fout.open("example.txt");

    if (fout.is_open()){
        fout << "Hello World";
        fout.close();
        cout << "File written successfully." << endl;
    } else {
        cout << "Failed to open the file." << endl;
    }

    return 0; // Return from main
    
}


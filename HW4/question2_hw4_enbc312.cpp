#include <iostream>
#include <string>
using namespace std;

class Book{
    private:
        string title;
        int pages;
    
    public: 
        Book(string t, int p){
            title = t;
            pages = p;
        }
        void setTitle(string t){
            title = t;
        }

        void setPages(int p){
                pages = p;
        }
    
        string getTitle(){
                return title;
        }
        int getPages(){
            return pages;
        }

};

int main(){
    Book bookchosen("The Alchemist", 288);
        cout<< "Title: " << bookchosen.getTitle() << endl; 
        cout<< "Pages: " << bookchosen.getPages() << endl;

        return 0;
    }
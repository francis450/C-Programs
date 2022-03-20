#include <iostream>
using namespace std;

 class Book
 {
 public:
    string title;
    string author;
    int pages;
    Book(string atitle,string aauthor,int apages){
        title = atitle;
        author = aauthor;
        pages = apages;
    }
 };
int main()
{
    Book book("kigogo","Pauline Kea",156);
    //cout<<book<<endl;
    cout<<book.author<<endl<<book.title<<endl;
    return 0;
}

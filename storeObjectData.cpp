#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
class Book{
private:
    int bookid;
    char title[50];
    float price;
public :
    Book(){
    bookid=0;
    strcpy(title,"no title");
    price=0;
    }
    void getBookData(){
    cout<<"enter the Bookid, title and price"<<endl;
    cin>>bookid;
    cin.ignore();
    cin.getline(title,49);
    cin>>price;
    }
    void showdata(){
    cout<<"\n"<<bookid<< " "<<title<< " "<<price;
    }
    int storebook();
    void viewAllBooks();
    void searchBook(char *);
    void deleteBook(char *t);
};
void Book::deleteBook(char *t){
ifstream fin;
ofstream fout;
fin.open( "myfile.txt",ios::in|ios::binary);
if(!fin)
    cout<< "\n File not found";
else{
    fout.open( "tempfile.txt",ios::out|ios::binary);
    fin.read((char*)this,sizeof(*this));
    while(!fin.eof()){
        if(strcmp(title,t))
            fout.write((char*)this,sizeof(*this));
        fin.read((char*)this,sizeof(*this));;
    }
    fin.close();
    fout.close();
    remove("myfile.txt");
    getch();
    rename("tempfile.txt", "myfile.txt");
}
}
void Book::searchBook(char *t){
int counter=0;
ifstream fin;
fin.open("bookdata.txt",ios::in|ios::binary);
if(!fin)
    cout<<"file is not found";
fin.read((char*)this,sizeof(*this));
while(!fin.eof()){
if(!strcmp(title,t)){
    showdata();
    counter++;
}
fin.read((char*)this,sizeof(*this));
}
if(counter==0)
    cout<<"\n record not found"<<endl;
fin.close();
}

void Book::viewAllBooks(){
ifstream fin;
fin.open("bookdata.txt",ios::in | ios::binary);
if(!fin)
    cout<< "file not found"<<endl;
else{
   fin.read((char*)this,sizeof(*this));
  while(!fin.eof()){
    showdata();
    fin.read((char*)this,sizeof(*this));
  }
 fin.close();
}
}
int Book::storebook(){
if(bookid==0 && price ==0){
    cout<<"Book data are not initialized"<<endl;
return 0;
}
ofstream fout;
fout.open("bookdata.txt",ios::app | ios::binary);
fout.write((char*)this,sizeof(*this));
fout.close();
return 1;
}
int main(){
/*for storeBookdata
Book b1,b2,b3;
b1.getBookData();
b1.storebook();
b1.showdata();
b2.showdata();
cout<<endl;
b2.storebook();
b3.getBookData();
b3.storebook();
b3.showdata();*/
Book b1,b2;
/*for deleting book data*/
b1.viewAllBooks();
b1.deleteBook( "php");
cout<< "\n After Deletion";
b1.viewAllBooks();
//b1.viewAllBooks();
/*for searching bookdata
b1.searchBook("java");
b2.searchBook( "php");*/
return 0;
}

//multiple try,throws and catch
#include<iostream>
#include<cstring>
using namespace std;
class ageException : public exception{
public :
    const char* what() const throw(){
    return  "you are not eligible to cast your vote";
    }
};

class NationalityException :public exception{
public :
    const char* what() const throw(){
    return  "you have to be INDIAN to cast your vote";
    }
};
using namespace std;
void f1(){
int vote,age;
char nationality[20];
try{
cout<< "enter your age : "<<endl;
cin>>age;
if(age<18)
    throw ageException();
cout<<"enter your nationality : ";
cin.ignore();
cin.getline(nationality,20);
if(strcmp(strupr(nationality), "INDIAN"))
    throw NationalityException();
cout<< "\n vote for your favourite actor "<<endl;
cout<< "\n 1. Amir Khan ";
cout<< "\n 2. Shahrukh khan ";
cout<< "\n 3. Akshya Kumar "<<endl;
cin>>vote;
if(vote>3 || vote<1){
    cout<<"invalid vote "<<endl;
    return;
}
cout<< "\n Thank for your vote";
}
catch(const ageException &e){
cout<< e.what()<<endl;
}
catch(const NationalityException &a){
cout<< a.what()<<endl;
}

cout<< "\n End";
}
int main(){
f1();
return 0;
}

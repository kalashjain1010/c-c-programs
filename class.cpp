#include <iostream>

 using namespace std;

class Book{               
    public:
            string title;
            string author;
            int pages;
            
};


int main(){

    Book book1;         
     book1.title ="hue hue";
     book1.author="kalash";
     book1.pages=69;
     cout<<book1.title<<endl;
     cout<<book1.author <<endl;
     cout<<book1.pages;
  
  

   
    return 0;
}
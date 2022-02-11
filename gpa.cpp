#include <iostream>

using namespace std;

int main()
{
    double gpa;
    std::cout << "what is your gpa: "<< std::endl;
    std::cin >> gpa;
    std::cout <<"you have a "<< gpa << " gpa" << endl;
    if (gpa > 4){
        std::cout << "that isn't true! \nyou are a liar!" << std::endl;
    }   
    
    if (gpa > 3.8 && gpa <= 4){
        cout << "you are very intelligent!" << endl;
    }
    
    if (gpa < 3.8 && gpa > 2){
        cout << "your gpa is low, but you can make it up! \nkeep trying!" << endl;
    }
    if (gpa <= 2){
        cout << "your gpa is very low!" << endl;
    }
    return ;
}
   
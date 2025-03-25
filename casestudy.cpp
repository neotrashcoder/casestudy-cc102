#include <iostream>
#include <cstdlib>
#include <unistd.h>

using namespace std;
/*create a c++ program that will record the students recitations, projects, activities, seatworks, laboratory exercises, quizzes, and exam scores and compute the average for each. Use Nested if else, Loops, Arrays, and Functions.*/
void options()
{
  cout<<"Choose what you want to record: "<<endl<<"(R) Recitations"<<endl<<"(P) Projects"<<endl<<"(A) Activities"<<endl<<"(S) Seatworks"<<endl<<"(L) Laboratory Exercises"<<endl<<"(Q) Quizzes"<<endl<<"(E) Exams"<<endl<<"(X) Exit"<<endl<<endl;
}

int main()
{
  char letterChoice; // initialization
 
  while(letterChoice != 'X')
  {
    options();

    cout<<"Type the letter of your choice: "; // ask for input
    cin>>letterChoice;
    
    letterChoice = toupper(letterChoice); // if user types lowecase letter convert it caps lock
    
    switch (letterChoice)
    {
      case 'R':
        sleep(1);
        cout<<"Recitations"<<endl<<endl;
        break;
      case 'P':
        cout<<"Projects"<<endl<<endl;
        break;
      case 'A':
        cout<<"Activities"<<endl<<endl;
        break;
      case 'S':
        cout<<"Seatworks"<<endl<<endl;
        break;
      case 'L':
        cout<<"Laboratory"<<endl<<endl;
        break;
      case 'Q':
        cout<<"Quizzes"<<endl<<endl;
        break;
      case 'E':
        cout<<"Exam"<<endl<<endl;
        break;
      case 'X':
        cout<<"Thank you for using [name haha]"<<endl<<endl;
        break;
      default:
        cout<<"INVALID INPUT"<<endl<<endl;
        break;
    }
  }
}
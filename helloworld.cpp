#include <iostream>
#include <string>

using namespace std;

//Compiler version g++ 6.3.0

// I am just adding to comment to do a push for my today's commit. nothing else

int main()
{
    // Declare some nice variables
    string message = "",
           tempType = "°F",
           goToCollegeText = "temp",
           gpaLetterText = "temp";
    int favNum, age, fage, fNum, sNum;
    double idealTemp;
    bool goToCollege;
    char gpaLetter; // only fill if you select true to goToCollege
    
    // set up constants
    const float PI = 3.1415926535897932384626433832795028841971;
    const int cNum = 25,
              minsPerHour = 60,
              secsPerMin = 60,
              hoursPerDay = 24,
              minsPerDay = hoursPerDay * 60,
              secsPerDay = minsPerDay * 60;
    
    // UPDATE: Version 2.0.0 - ask user for input
    // set up message
    //message = "Hello world\n"; //manual
    cout << "Welcome to HelloWorld! This is an app that is basic in it's self.\n";
    cout << "It can do alot of things. But first, tell me what you want me to remember: ";
    
    // NOTE: This will not work properly
    //cin >> message;
    // as it won't be able to take whitespace.
    // You must use something like this:
    getline(cin, message);
    // and it will work nicely
    
    cout << "\nGreat! Now I will ask you some questions." << endl;

    // set up ideal temp
    //idealTemp = 75.6; //manual
    cout << "What temperature (in " << tempType << ") outside do you like? ";
    cin >> idealTemp;
    
    // set up favNum
    //favNum = 420; // manual input
    cout << "What is your favorite number? ";
    cin >> favNum;
    
    // set up age
    //age = 29; //manual
    cout << "How old are you? ";
    cin >> age;
    
    // set up fage (fake age)
    //fage = 907; //manual
    cout << "Really, how old are you? ";
    cin >> fage;
    
    // set up goToCollege
    //goToCollege = true; 
    
    do 
    {
      string s = goToCollegeText;
      
      cout << "\nDid you go to college? ";
      getline(cin, s);
      
      if (s == "temp")
      {
        // no input yet
        s = "1";
      }
      else
      {
       
        if (s == "yes" || s == "Yes" || s == "YES")
        {
          goToCollege = true;
          break;
        }
        else if (s == "no" || s == "No" || s == "NO")
        { 
          goToCollege = false;
          break;
        } 
        else
        {
          //return 0;
          cout << "\nERROR: You must reply 'yes' or 'no'!\n";
        }  
      }
    } while (true);
    
    // set up gpaLetter
    //gpaLetter = 'B'; // manual
    
    if (goToCollege)
    {
    do 
    {
      string s = gpaLetterText;
      
      cout << "\nWhat was your GPA (in letter form) ";
      getline(cin, s);
      
      if (s == "temp")
      {
        // no input yet
        s = "1";
      }
      else
      {
       
        if (s == "A" || s == "a")
        {
          gpaLetter = 'A';
          break;
        }
        else if (s == "B" || s == "b")
        { 
          gpaLetter = 'B';
          break;
        } 
        else if (s == "C" || s == "c")
        { 
          gpaLetter = 'C';
          break;
        } 
        else if (s == "D" || s == "d")
        { 
          gpaLetter = 'D';
          break;
        } 
        else if (s == "F" || s == "f")
        { 
          gpaLetter = 'F';
          break;
        } 
        else
        {
          //return 0;
          cout << "\nERROR: That is not a valid entry.\n";
        }  
      }
    } while (true);
    }
    
    // set up some numbers for later
    fNum = 69;
    sNum = 420; 
    
    cout << "\n=== Results ===========================\n\n";
    
    // Add to message with some stuff
    message += "\n\n";
    message += "I am learning to code C++ (again)!\n";
    message += "I am using a tiny keyboard writing\n";
    message += "this code on my Android Note 9 Phone.\n";    
    
    // Display the result
    cout << message << endl;
    
    // Display another sentence
    cout << "This sentence ends with endl" << endl << endl;
    cout << "There are " << secsPerDay << " seconds in a day.\n";
    
    cout << "============== About Me ===============\n\n";
    cout << "I am " << age << " years old but really\n";
    cout << "I am " << fage << " years old; shh...\n";
    cout << "I like it when it is " << idealTemp << tempType << " degrees outside.\n";
    
    // do a conditional check for college
    if (goToCollege)
      cout << "In college, my GPA was a solid: " << gpaLetter << "\n";
    
    cout << "\nI can do some math:\n";
    cout << fNum << " + " << sNum << " = " << fNum+sNum << endl;
    cout << "-- This is how many digits of PI I know --\n";
    
    // BUG: This doesn't display the long list and only displays the
    // first 6 digits
    cout << PI << endl;
    cout << "------------------------------------------\n";
    
    cout << "\n=======================================";
    
    // Let's see if we can change cNum
    // If you uncomment the line below, it will
    // throw an error.
    
    //cNum += 25;
    //cout << "The constant number: " << cNum << endl;    

    system("pause");
    
    return 0;
}

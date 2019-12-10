// Workout Coach
// This program will help track your workouts and deduct the amount that you have to hit in a day
// Will McFadden
// 12/4/19

#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int main ()

{
    int choice=0, num1, num2, num3, num4, userinput, amount;
    cout <<"Welcome to Workout Coach \n";

    do
    {
     num1= 2;
     num2= 100;
     num3= 150;
     num4= 9;

     cout << "Workout Coach Menu\n";
     cout <<"-------------------------" << endl;
     cout<<"1. Miles ran\n";
     cout<<"2. Pushups done\n";
     cout<<"3. Situps done\n";
     cout<<"4. Hours slept\n";
     cout<<"5. Quit this program\n";
     cout <<"-------------------------" << endl;
    do
    {
      cout <<"Enter your choice (1-5): ";
      cin >> choice;
    }while((choice<1) || (choice>5));

    switch (choice)
    {
        case 1:
        {
            //Please enter the amount of miles you have ran today
            
            num1 = 2;
            cout << "Your goal for the day is 2 miles, how many have you ran so far?\n";
            cin >> userinput;
            amount= num1 -userinput;
            if (amount<num1)
                cout << "Great job! You are on track for this day. Miles remaining: \n" << amount << endl;
            else
                 cout <<"Oh no! You need to get runnin to reach the goal of this day. Miles Left: \n" << amount << endl;       
            break;
    }
        case 2:
        {
            //Please enter the amount of pushups you have done today
            
            num2 = 100;
            cout << "Your goal for the day is 100 pushups, how many have you done so far?\n";
            cin >> userinput;
            amount= num2 -userinput;
            if (amount<num2)
                cout << "Great job! You are on track for this day. Pushups remaining: \n" << amount << endl;
            else
                 cout <<"Oh no! You need to get goin to reach the goal of this day. Pushups Left: \n" << amount << endl;       
            break;
        }
        case 3:
        {
            //Please enter the amount of situps you have done

            num3 = 150;
            cout << "Your goal for the day is 150 situps, how many have you done so far?\n";
            cin >> userinput;
            amount= num3 -userinput;
            if (amount<num3)
                cout << "Great job! You are on track for this day. Situps remaining: \n" << amount << endl;
            else
                 cout <<"Oh no! You need to get goin to reach the goal of this day. Situps Left: \n" << amount << endl;       
            break;
        }
        case 4:
        {
            //Please enter the amount of hours you have slept today
            num4 = 9;
            cout << "Your goal for the day is 9 hours of sleep, how many have you done so far?\n";
            cin >> userinput;
            amount= num4 -userinput;
            if (amount<num4)
                cout << "Great job! You are on track for this day. Hours remaining: \n" << amount << endl;
            else
                 cout <<"Oh no! You need to get goin to reach the goal of this day. Hours Left: \n" << amount << endl;       
            break;
        }
         case 5:
        {
            cout << "Thank you for using Workout Coach. Press any key to end the program! \n" << endl;
        }

        default:
            cout << "Invalid inputs. Please try agaon." << endl;
    }
    }
    while(choice!=5);
}
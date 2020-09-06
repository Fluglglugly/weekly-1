

#include <iostream>
#include <string>
#include <conio.h>

std::string forname = "";
std::string surname = "";
std::string birthday = "";
int age = 0;
long phone = 0;
int day = 0;
int month = 0;

void function() 
{
    std::cout << "What is your name?\n";
    std::cin >> forname >> surname;
    std::cout << "ok, so your name is: " << forname << " " << surname << ".\n";
    std::cout << "That means your initials are " << forname[0] << "." << surname[0];
    std::cout << "\nSo, how old are you " << forname << "?\n";
    std::cin >> age;
    std::cout << "Ah, so you're " << age << " years old. And do you have a phone number I can reach you on?\n";
    std::cin >> phone;
    std::cout << "Ok, " << phone << ". You wouldn't mind telling me your birthday, so I can add that to my phone while I'm at it?\n";
    std::cin >> birthday;
    std::cout << "ok, " << birthday << ". Well, it was cool meeting you, but I have to go now. See you later!";

}
int main()
{

    
    function();

   

}


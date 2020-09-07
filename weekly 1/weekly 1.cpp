

#include <iostream>
#include <string>
#include <conio.h>

std::string forname = "";
std::string surname = "";
std::string birthday = "";
std::string answer = "";
std::string fav_drink = "";
int age = 0;
long phone = 0;
int day = 0;
int month = 0;
void func_name() 
{
    std::cout << "What is your name?\n";
    std::cin >> forname >> surname;
    std::cout << "ok, so your name is: " << forname << " " << surname << ".\n";
    std::cout << "That means your initials are " << forname[0] << "." << surname[0] <<"\n";
}

void func_age()
{
    std::cout << "So, how old are you " << forname << "?\n";
    std::cin >> age;
    if (age < 20) {
        std::cout << "Wait...you're a little kid???\n";
    }
    else if (age < 41) {
        std::cout << "Yeah, I expected something like that.\n";
    }
    else if (age < 60) {
        std::cout << "Man, you're starting to get old!\n";
    }
    else {
        std::cout << "Dude, you're ancient!\n";
    }
    //std::cout << "Ah, so you're " << age << " years old.";
}

void func_phone() 
{
    std::cout << "Do you have a phone number I can reach you on?\n";
    std::cin >> phone;
    std::cout << "Ok, " << phone << ".\n";
    

}

void func_birthday()
{
    std::cout << "You wouldn't mind telling me your birthday, so I can add that to my phone while I'm at it? \n";
    std::cin >> birthday;
    std::cout << "ok, " << birthday << ".\n";
}

void func_coffee()
{

    std::cout << "Do you want to grab a coffe?\n";
    std::cin >> answer;
    if (answer == "Yes") {

        std::cout << "Ugh, you disgust me! What kind of person likes coffee?\n";

    }
    else if (answer == "No") {

        std::cout << "Good choice! What kind of loser likes coffee?\n";

    }


}

//Couldn't get getline to work inside the function :(
void func_drink()
{
    #include <iostream>
    #include <string>
    #include <conio.h>
    std::cout << "What's your favourite drink?\n";
    std::cin >> fav_drink;
    if (fav_drink == "Coffee") {
        if (answer == "Yes") {
            std::cout << "You still want a coffee? Wow, you really are an idiot.\n";
        }
        else if (answer == "No") {
            std::cout << "I'm confused. I thought you said you didn't want coffee.\n";
        }
    }
    else if (fav_drink == "Tea") {

        if (answer == "Yes") {
            std::cout << "Hah! And you call yourself brithish, drinking both tea and coffee? You disgust me!\n";
        }
        else if (answer == "No") {

            std::cout << "A fine choice, my british friend!\n";
        }
        
    }
    else if (fav_drink == "Coca Cola") {
        std::cout << "Oh God, that's even worse than coffee! Wtf is wrong with you?!";
    }
    else if (fav_drink == "Pepsi_Max") {
        std::cout << "That's what I'm talking about! Best drink in the world!";
    }
}

void func_pattern()
{
    //Tried using unicode, but the terminal just gave me a ? so I couldn't get some of the things like overscores
    std::cout << "   1   2   3   4   5   6\n";
    std::cout << "  -----------------------\n";
    std::cout << "A| * | * | * | * | * | * |A\n";
    std::cout << "  -----------------------\n";
    std::cout << "B| * | * | * | * | * | * |B\n";
    std::cout << "  -----------------------\n";
    std::cout << "C| * | * | * | * | * | * |C\n";
    std::cout << "  -----------------------\n";
    std::cout << "D| * | * | * | * | * | * |D\n";
    std::cout << "  -----------------------\n";
}

int main()
{
    func_name();
    func_age();
    func_phone();
    func_birthday();
    func_coffee();
    func_drink();
    std::cout << "Well, it was cool meeting you, but I have to go now. Enjoy this pattern while you wait for my return!";
    func_pattern();
    //std::getline(std::cin, fav_drink);
    //std::cout << fav_drink;
    //Turns out you can only use getline outside of a function
    

}


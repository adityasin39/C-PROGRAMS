#include <iostream>
class Printer
{
private:
    std::string Printername;
    int availablePaper;

public:
    Printer(std::string s, int a)
    {
        Printername = s;
        availablePaper = a;
    }
    void Print(std::string content)
    {
        std::cout << content.length() << std::endl;
        int requiredPaper = content.length() / 10; // this means ki ek paper pe 10 characters aayenge.
        if (requiredPaper > availablePaper)
        {
            throw "NOT ENOUGH PAPERS";
        }
        std::cout << "HP printer jet" << std::endl;
        std::cout << "Printing......." << content << std::endl;
        availablePaper = availablePaper - requiredPaper;
    }
};
int main()
{
    Printer p("HP printer jet", 10);
    try
    {

        p.Print("HI, I am Aditya Singh and I am trying my best to improve myself");
        p.Print("HI, I am Aditya Singh and I am trying my best to improve myself");
        p.Print("HI, I am Aditya Singh and I am trying my best to improve myself");
    }
    catch (const char *str) // string ko receive karne ke liye const char* hi likhna padega nahi toh error aayega.
    {
        std::cout << str << std::endl;
    }

    return 0;
}
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{

}

PhoneBook::~PhoneBook()
{

}

void PhoneBook::add_contact()
{
    if(_index == 8)
        this->liste_contact[7].new_contact();
    else
    {
       this->liste_contact[_index].new_contact();
        _index++;
    }
}

void PhoneBook::search_contact() const
{
    int temp;
    std::string str;

    if (_index == 0)
    {
        std::cout << "0 contact register " << std::endl;
        return;
    }
    for(int i = 0; i < _index; i++)
    {
        this->liste_contact[i].view(i);
        std::cout << "----------------------------------------" << std::endl;
    }
    std::cout << "wich index : ";
    std::getline(std::cin, str);
    while (str.empty())
    {
        std::cout << "wich index : ";
        std::getline(std::cin, str);
    }
    try
    {
        temp = std::stoi(str);
    } 
    catch (const std::invalid_argument& e)
    {
        std::cout << "Conversion failed: invalid argument" << std::endl;
    }
    catch (const std::out_of_range& e)
    {
        std::cout << "Conversion failed: out of range" << std::endl;
    }

    if (temp < _index)
        this->liste_contact[temp].printf_contact();
    else
        std::cout << "cant find this index " << std::endl;
}

int PhoneBook::_index = 0;
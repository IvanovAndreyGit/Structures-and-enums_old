// Задание 3
//


#include <iostream>

struct location
{
    std::string country;
    std::string city;
    std::string street;
    int home_num;
    int room_num;
    int index;

};

void address_info(location* addr)
{
    std::cout << "Город: " << addr->city << std::endl;
    std::cout << "Улица: " << addr->street << std::endl;
    std::cout << "Номер дома: " << addr->home_num << std::endl;
    std::cout << "Номер квартиры: " << addr->room_num << std::endl;
    std::cout << "Индекс: " << addr->index << std::endl;
}

int main()
{
    location address = { "Россия", "Москва", "Арбат", 12, 8, 123456 };
    address_info(&address);
}



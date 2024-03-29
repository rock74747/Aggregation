#include <iostream>
#include <vector>
#include<string>
#include<iterator>
#include "Person.hpp"
#include "Backpack.hpp"




int main()
{
    system("chcp 1251>null");

    Boot T("Botas", 2.9, 1.5);
    Helmet F("Шлем боевой", 2.3, 3.6);
    Person P("Сокол", 80.5, "Мужcкой");


    
    P.SetFeet(T.Name(), T.Мorelife(), T.Weight());
    P.SetHead(F.Name(), F.Мorelife(), F.Weight());
    
    
    std::cout << "Имя игрока: " << P.Name() << " Пол: " << P.Gender() << " Масса игрока: " << P.Weight() << " кг. Масса снаряжения: " <<
        P.MaxWeight() << " кг. Название ботинок: " << P.NameFeet () << " Название шлема: " << P.NameHead() << 
        " Здоровье игрока: " << P.Мorelife() << std::endl;
   
    P.CloseHead();

    std::cout << "Имя игрока: " << P.Name() << " Пол: " << P.Gender() << " Масса игрока: " << P.Weight() << " кг. Масса снаряжения: " <<
        P.MaxWeight() << " кг. Название ботинок: " << P.NameFeet() << " Название шлема: " << P.NameHead() <<
        " Здоровье игрока: " << P.Мorelife() << std::endl;

    Backpack R ("Рюкзак туристический", 3.5);
    std::vector<Backpack*> vec; //Вектор создаётся 

    vec.push_back(new Aid_kit("Аптечка первой помощи", 2.5, 0.8)); //Добавляем объекты в рюкзак
    vec.push_back(new Tent("Брезентовый тент", 1.3, 3.5));
    vec.push_back(new Preserves("Консерва рыбная", 0.2, 0.5));
    vec.push_back(new Preserves("Консерва мясная", 0.3, 0.8));


    Aid_kit* t1 = (Aid_kit*)vec[0];
    Tent* t2 = (Tent*)vec[1];
    Preserves* t3 = (Preserves*)vec[2];
    Preserves* t4 = (Preserves*)vec[3];

    std::cout << "Название рюкзака: " << R.Name() << " Масса рюкзака: " << R.Weight() << " кг. Масса девайсов: " << (t1->Weight()
        + t2->Weight() + t3->Weight() + t4->Weight()) << " кг. Увеличение жизни: " << (t1->Мorelife() + t2->Мorelife() 
            + t3->Мorelife() + t4->Мorelife()) << std::endl;
    return 0;
}



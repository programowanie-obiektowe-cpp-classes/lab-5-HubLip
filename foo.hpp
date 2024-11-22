#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

using namespace std;

//Funkcja foo jest zadeklarowana jako funkcja ktora przyjmuje referencje do listy obiektow Human i zwraca wektro char
vector<char> foo(list< Human >& people)
{
    vector<char> result; //ten wektor bedzie zwracany

    // Inkrementuje pole `age` wszystkich obiektów w podanej liście poprzez zawołanie metody `birthday`.
    for (auto& person : people) {
        person.birthday();  // Zwiększenie wieku
    }

    // Iteracja w odwrotnej kolejności
    for (auto it = people.rbegin(); it != people.rend(); ++it) {
        if (it -> isMonster()) {
            result.push_back('n');  // Nie lubi psów lub kotów
        } else {
            result.push_back('y');  // Lubi przynajmniej jedno ze zwierząt
        }
    }

    return result; //Zwraca wektor obiektów typu `char` z dopisanym y or n
}


// Компиляция:
// g++ -Wall -Wextra -o lesson1 lesson1.cpp

// Подключение библиотек:
// iostream - ввод-вывод
#include <iostream>

// Функции:
// тип имя(параметры)
int collatz(int start) {
  // объявление переменной с инициализацией
  int n = 0;
  // циклы (есть for, while, do-while)
  while (start != 1) {
    // условия, арифметика
    if (start % 2 == 0) {
      start /= 2;
    } else {
      start *= 3;
      start++;
    }
    n++;
  }
  return n;
}

// Напишите функцию
// для перевода температуры в Фаренгейтах
// в температуру в Кельвинах

// Точка входа:
int main() {
  // Код возврата - 0
  int start;
  // ввод с клавиатуры
  std::cin >> start;
  // вывод на экран (endl - перевод строки)
  std::cout << collatz(start) << std::endl;
  // если надоело писать std::
  // в начале программы написать
  // using namespace std;
  return 0;
}

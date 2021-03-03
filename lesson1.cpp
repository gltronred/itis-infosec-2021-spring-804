
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
double ftok(int f) {
  // преобразование типов
  return (double)f;
}

// Массивы
int sumPascal(int level) {
  int row[100];
  row[0] = 1;
  for (int i=1; i<level; i++) {
    for (int j=level; j>0; j--) {
      row[j] = row[j-1] + row[j];
    }
  }
  int sum = 0;
  for (int i=0; i<level; i++) {
    sum += row[i];
  }
  return sum;
}

void printRow(int n) {
  int* a = new int[n];
  a[0] = 1;
  for (int i=1; i<n; i++) {
    *(a+i) = 2*i + *(a+(i-1));
    std::cout << a[i] << " ";
  }
  std::cout << std::endl;
  char* b = (char*)a;
  for (int i=0; i<4*n; i++) {
    std::cout << (int)b[i] << " ";
  }
  std::cout << std::endl;
  // освобождение памяти
  delete[] a;
  // не делайте так!
  // работать с памятью после освобождения нельзя
  // std::cout << b << std::endl;
}

// Строки
void printStr(int cnt) {
  char* s = "abcdef";
  char* t = "ghij";
  std::cout << s << std::endl << t << std::endl;
  char* u = new char[11];
  for (int i=0; i<6; i++) {
    u[i] = s[i];
  }
  for (int i=0; i<4; i++) {
    u[i+6] = t[i];
  }
  u[10] = '\0';
  std::cout << u << std::endl;
  // освобождение памяти
  delete[] u;
}

// Напишите функцию
// для вывода строки в hex-формате
void printHex(char* s){

}

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
  std::cout << sumPascal(10) << std::endl;
  printRow(15);
  printStr(0);
  // printHex("hello world\n");
  int8_t x = 128;
  uint8_t y = 128;
  std::cout << (int)x << " " << (int)y << std::endl;
  return 0;
}

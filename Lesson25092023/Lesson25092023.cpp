// Lesson25092023.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iostream>
#include <string>
#include <math.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include <typeinfo>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <cstdlib>
#include <ctype.h>

using namespace std;

class Progress
{
private:
    double x;
    double y;

public:
    void Print() {
        cout << "Координат x:" << "\nКоординат y:" << y;
    }

    void Set(const double x, double y) {
        this->x = x;
        this->y = y;
    }

    double Sum() {
        return x + y;
    }
    double Max() {
        return std::max(x, y);
    }
    double Max() {
        return std::min(x, y);
    }
};
int main()
{
    setlocale(LC_ALL, "RUS");


}

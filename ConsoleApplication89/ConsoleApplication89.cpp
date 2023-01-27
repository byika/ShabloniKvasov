#include <iostream>

/*
template <typename T>
double mean(const T* MAss, const size_t size)
{
    double sum = 0;
    for (int i = 0; i < size; i++) {

        sum += MAss[i];
    }
    return sum / size;
}

int main(void)
{
    const int size = 10;
    int MAss[size] = { 1,2,3,4,5,6,7,8,9,10 };

    std::cout << "Average: " << mean(MAss, size);

}
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
template<typename T>
void linear(const T& a, const T& b, T& x, bool& result)
{
    if (a == 0)
    {
        result = false;
        return;
    }

    result = true;
    x = -b / a;
}

template<typename T>
void quadratic(const T& a, const T& b, const T& c, T& x1, T& x2, bool& result)
{
    const T disc = b * b - 4 * a * c;

    if (a == 0)
    {
        linear(b, c, x1, result);
        x1 = x2;
        return;
    }

    if (disc < 0)
    {
        result = false;
        return;
    }

    result = true;
    x1 = (-b - sqrtf(disc)) / (2 * a);
    x2 = (-b + sqrtf(disc)) / (2 * a);
}

int main()
{
    double a = 1.0, b = 2.0, c = 3.0, x1, x2;
    bool result;

    quadratic(a, b, c, x1, x2, result);
    if (result) {
        std::cout << "x1=" << x1 << " x2=" << x2 << std::endl;
    }
    else {
        std::cout << "KOPHEU HET" << std::endl;
    }
}

*/

template<typename T>
T maxOFtwo(T num1, T num2)
{
    if (num1 > num2) {
        return num1;
    }
    else if (num1 < num2) {
        return num2;
    }
    else {
        return 0;
    }
}

template<typename T>
T minOFtwo(T num1, T num2)
{
    if (num1 < num2) {
        return num1;
    }
    else if (num1 > num2) {
        return num2;
    }
    else {
        return 0;
    }
}

int main() {
    std::cout << maxOFtwo(2, 3) << std::endl;
    std::cout << minOFtwo(2, 3) << std::endl;
}
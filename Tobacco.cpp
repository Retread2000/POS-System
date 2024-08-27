#include "Tobacco.h"

Tobacco::Tobacco() : Product("001", "Nicotine", "Cigarettes", 5.79, 2025, 1, 1, 1)
{
}

Tobacco::Tobacco(string i, string c, string n, float p, int year, int month, int day, int q)
    : Product(i, n, c, p, year, month, day, q)
{
}

float Tobacco::computePrice()
{
    return (price + specialTax) * quantity;
}

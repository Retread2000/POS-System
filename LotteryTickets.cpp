#include "LotteryTickets.h"

float LotteryTickets::getCityTax()
{
    return cityTax;
}

float LotteryTickets::getCountyTax()
{
    return countyTax;
}

LotteryTickets::LotteryTickets() : Product("002", "Gambling", "Lottery", 6.99, 2025, 1, 1, 1)
{
}

LotteryTickets::LotteryTickets(string i, string c, string n, float p, int year, int month, int day, int q)
    : Product(i, n, c, p, year, month, day, q)
{
}

float LotteryTickets::computePrice()
{
    return price + cityTax + countyTax;
}

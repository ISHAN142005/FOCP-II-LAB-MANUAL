#include <iostream>
#include <string>
using namespace std;

class Hotel
{
private:
    string RestaurantName;
    int AvailableMeals;
    int AvailableDrinks;

public:
    Hotel(string Name, int meals, int drinks)
    {
        RestaurantName = Name;
        AvailableMeals = meals;
        AvailableDrinks = drinks;
    }

    void order()
    {
        if (AvailableMeals >= 10 && AvailableDrinks >= 20)
        {
            AvailableMeals -= 10;
            AvailableDrinks -= 20;
            cout << "Ordered Successfully placed from " << RestaurantName << " !" << endl;
        }
        else
        {
            cout << "Insufficient stock to process the order!";
        }
    }

    void stockDisplay()
    {
        cout << "-----STOCK DETAILS-----" << endl;
        cout << "Available Meals: " << AvailableMeals << endl;
        cout << "Available Drinks: " << AvailableDrinks << endl;
    }
};

int main()
{
    Hotel ApnaHotel("PADHARO", 40, 80);

    ApnaHotel.stockDisplay();

    cout << "ORDER" << endl;

    ApnaHotel.order();
    ApnaHotel.stockDisplay();

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int w, b, e;
    int water = 3, bread = 4, egg = 2;

    cout << "Enter number of water bottles donated : ";
    cin >> w;
    cout << "Enter number of bread donated : ";
    cin >> b;
    cout << "Enter number of boiled egg donated : ";
    cin >> e;

    //คำนวณหาค่าที่น้อยที่สุดโดยใช้ min
    int max_packs = min(w / water, min(b / bread, e / egg));

    //คำนวณของที่เหลือ
    int remaining_water = w - (max_packs * water);
    int remaining_bread = b - (max_packs * bread);
    int remaining_egg = e - (max_packs * egg);

    cout << "Result of Donation bag : " << max_packs << endl;
    cout << "The remaining amount of donated water bottles : " << remaining_water << endl;
    cout << "The remaining amount of donated bread : " << remaining_bread << endl;
    cout << "The remaining amount of donated boiled eggs : " << remaining_egg << endl;

    return 0;
}
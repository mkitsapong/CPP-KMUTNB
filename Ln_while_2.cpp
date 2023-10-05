#include <iostream>

using namespace std;

int main()
{
  int order;
  int total = 0;

  do
  {
    cout << "     รายการอาหาร      " << endl;
    cout << "1. ธรรมดา ราคา 50 บาท" << endl;
    cout << "2. พิเศษ ราคา 60 บาท" << endl;
    cout << "3. เกาเหลา ราคา 60 บาท" << endl;
    cout << "4. ข้าวเปล่า ราคา 10 บาท" << endl;
    cout << "5. น้ำเปล่า ราคา 10 บาท" << endl;
    cout << "6. น้ำอัดลม ราคา 15 บาท" << endl;
    cout << "0. ออกโปรแกรม" << endl;
    cout << "กรุณาเลือกรายการอาหาร: ";
    cin >> order;

    switch (order)
    {
    case 1:
      total += 50;
      break;
    case 2:
      total += 60;
      break;
    case 3:
      total += 60;
      break;
    case 4:
      total += 10;
      break;
    case 5:
      total += 10;
      break;
    case 6:
      total += 15;
      break;
    }
  } while (order != 0);

  cout << "รวมราคา : " << total << " บาท" << endl;


  return 0;
}
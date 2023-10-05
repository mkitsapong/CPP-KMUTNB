#include <iostream>

using namespace std;

int main() {
  // กำหนดราคาขายเครื่องเขียน
  int price_pen = 5,price_pencil = 2,price_ruler = 8;

  // ถามผู้ใช้ถึงจำนวนปากกา ดินสอ และไม้บรรทัดที่ต้องการจะสั่งซื้อ
  int number_of_pens;
  cout << "Please enter the number of pens you want to order: ";
  cin >> number_of_pens;

  int number_of_pencils;
  cout << "Please enter the number of pencils you want to order: ";
  cin >> number_of_pencils;

  int number_of_rulers;
  cout << "Please enter the number of rulers you want to order: ";
  cin >> number_of_rulers;

  // คำนวณราคารวม
  int total_price = number_of_pens * price_pen + number_of_pencils * price_pencil + number_of_rulers * price_ruler;

  // ตรวจสอบคำสั่งซื้อว่าเป็นไปตามเงื่อนไขหรือไม่
  if (total_price > 300 && !(number_of_pens % 2 == 0 && number_of_pencils % 2 == 0 && number_of_rulers % 2 == 0)) {
    cout << "Invalid Order" << endl;
  } else if (total_price > 200 && !(number_of_rulers % 2 == 0 && number_of_pencils % 2 == 0)) {
    cout << "Invalid Order" << endl;
  } else if (total_price > 100 && !(number_of_rulers % 2 == 0)) {
    cout << "Invalid Order" << endl;
  } else {
    cout << "Order is OK" << endl;
    cout << "Total price: " << total_price << endl;
  }

  return 0;
}
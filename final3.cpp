#include <iostream>
#include <vector>

using namespace std;

// สร้างโครงสร้างข้อมูลโต๊ะ
struct Table {
    char size;  // A, B, C
    bool isAvailable;
};

// สร้างเมนูเริ่มต้น
void createMenu() {
    cout << "โปรแกรมจองโต๊ะร้านสุกี้" << endl;
    cout << "1. ดูสถานะของโต๊ะ" << endl;
    cout << "2. จองโต๊ะ" << endl;
    cout << "3. ยกเลิกการจอง" << endl;
    cout << "4. เช็คบิล" << endl;
    cout << "5. ออกจากโปรแกรม" << endl;
    cout << "-------------------------" << endl;
}

int main() {
    vector<Table> tables = {{'A', true}, {'A', true}, {'B', true}, {'B', true}, {'C', true}};

    while (true) {
        createMenu();
        int choice;
        cin >> choice;

        if (choice == 1) {
            // ดูสถานะของโต๊ะ
            cout << "สถานะของโต๊ะ:" << endl;
            for (int i = 0; i < tables.size(); ++i) {
                cout << "โต๊ะ " << i + 1 << " (Size " << tables[i].size << "): ";
                if (tables[i].isAvailable) {
                    cout << "ว่าง" << endl;
                } else {
                    cout << "ไม่ว่าง" << endl;
                }
            }
        } else if (choice == 2) {
            // จองโต๊ะ
            int tableNumber;
            cout << "เลือกโต๊ะที่ต้องการจอง (1-" << tables.size() << "): ";
            cin >> tableNumber;
            tableNumber--;

            if (tableNumber >= 0 && tableNumber < tables.size()) {
                if (tables[tableNumber].isAvailable) {
                    tables[tableNumber].isAvailable = false;
                    cout << "จองโต๊ะเรียบร้อยแล้ว" << endl;
                } else {
                    cout << "โต๊ะนี้มีคนจองแล้ว" << endl;
                }
            } else {
                cout << "โต๊ะที่เลือกไม่ถูกต้อง" << endl;
            }
        } else if (choice == 3) {
            // ยกเลิกการจอง
            int tableNumber;
            cout << "เลือกโต๊ะที่ต้องการยกเลิกการจอง (1-" << tables.size() << "): ";
            cin >> tableNumber;
            tableNumber--;

            if (tableNumber >= 0 && tableNumber < tables.size()) {
                if (!tables[tableNumber].isAvailable) {
                    tables[tableNumber].isAvailable = true;
                    cout << "ยกเลิกการจองโต๊ะเรียบร้อยแล้ว" << endl;
                } else {
                    cout << "โต๊ะนี้ยังไม่ถูกจอง" << endl;
                }
            } else {
                cout << "โต๊ะที่เลือกไม่ถูกต้อง" << endl;
            }
        } else if (choice == 4) {
            // เช็คบิล 
            int totalcustomer ,totalrefillwater,totalprice;
            cout << "จำนวนคนที่มาทาน :";
            cin >> totalcustomer;
              cout << "จำนวนคนที่สั่งน้ำรีฟิล :";
            cin >> totalrefillwater;

            totalprice = (totalcustomer * 219) + (totalrefillwater * 39);

            cout << "Total Price = " << totalprice ;

        } else if (choice == 5) {
            // ออกจากโปรแกรม
            cout << "ออกจากโปรแกรม" << endl;
            break;
        } else {
            cout << "โปรดเลือกเมนูที่ถูกต้อง" << endl;
        }
    }

    return 0;
}
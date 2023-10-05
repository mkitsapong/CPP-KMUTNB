#include <iostream>
#include <vector>
#include <string>

using namespace std;

// สถานะของโต๊ะอาหาร
enum TableStatus {
    AVAILABLE,
    OCCUPIED
};

// โต๊ะอาหาร
struct DiningTable {
    int tableNumber;
    TableStatus status;
};

int main() {
    // สร้างรายการโต๊ะอาหาร
    vector<DiningTable> tables;
    for (int i = 1; i <= 20; ++i) {
        DiningTable table;
        table.tableNumber = i;
        table.status = AVAILABLE;
        tables.push_back(table);
    }

    while (true) {
        // แสดงเมนู
        cout << "โปรแกรมจองที่นั่งในร้านอาหาร" << endl;
        cout << "1. แสดงสถานะโต๊ะ" << endl;
        cout << "2. จองโต๊ะ" << endl;
        cout << "3. ยกเลิกการจอง" << endl;
        cout << "0. ออกจากโปรแกรม" << endl;

        int choice;
        cout << "กรุณาเลือกทำรายการ: ";
        cin >> choice;

        switch (choice) {
            case 1:
                // แสดงสถานะโต๊ะ
                cout << "สถานะโต๊ะ:" << endl;
                for (const DiningTable& table : tables) {
                    cout << "โต๊ะที่ " << table.tableNumber << ": ";
                    if (table.status == AVAILABLE) {
                        cout << "ว่าง" << endl;
                    } else {
                        cout << "ไม่ว่าง" << endl;
                    }
                }
                break;
            case 2:
                // จองโต๊ะ
                int tableNumberToReserve;
                cout << "กรุณากรอกหมายเลขโต๊ะที่ต้องการจอง: ";
                cin >> tableNumberToReserve;

                if (tableNumberToReserve >= 1 && tableNumberToReserve <= 20) {
                    if (tables[tableNumberToReserve - 1].status == AVAILABLE) {
                        tables[tableNumberToReserve - 1].status = OCCUPIED;
                        cout << "จองโต๊ะที่ " << tableNumberToReserve << " เรียบร้อยแล้ว" << endl;
                    } else {
                        cout << "โต๊ะที่ " << tableNumberToReserve << " ไม่ว่าง" << endl;
                    }
                } else {
                    cout << "หมายเลขโต๊ะไม่ถูกต้อง" << endl;
                }
                break;
            case 3:
                // ยกเลิกการจองโต๊ะ
                int tableNumberToCancel;
                cout << "กรุณากรอกหมายเลขโต๊ะที่ต้องการยกเลิกการจอง: ";
                cin >> tableNumberToCancel;

                if (tableNumberToCancel >= 1 && tableNumberToCancel <= 20) {
                    if (tables[tableNumberToCancel - 1].status == OCCUPIED) {
                        tables[tableNumberToCancel - 1].status = AVAILABLE;
                        cout << "ยกเลิกการจองโต๊ะที่ " << tableNumberToCancel << " เรียบร้อยแล้ว" << endl;
                    } else {
                        cout << "โต๊ะที่ " << tableNumberToCancel << " ไม่ได้ถูกจอง" << endl;
                    }
                } else {
                    cout << "หมายเลขโต๊ะไม่ถูกต้อง" << endl;
                }
                break;
            case 0:
                // ออกจากโปรแกรม
                cout << "ออกจากโปรแกรม" << endl;
                return 0;
            default:
                cout << "กรุณาเลือกทำรายการให้ถูกต้อง" << endl;
        }
    }

    return 0;
}
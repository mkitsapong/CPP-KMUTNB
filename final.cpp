#include <iostream>
#include <vector>
#include <string>

using namespace std;

// กำหนดคลาส Table สำหรับเก็บข้อมูลของโต๊ะ
class Table {
public:
    Table(int id) : tableId(id), isOccupied(false) {}

    int getTableId() const {
        return tableId;
    }

    bool isTableOccupied() const {
        return isOccupied;
    }

    void reserveTable() {
        isOccupied = true;
    }

    void releaseTable() {
        isOccupied = false;
    }

private:
    int tableId;
    bool isOccupied;
};

// ฟังก์ชันเพิ่มโต๊ะเข้าสู่รายการโต๊ะ
void addTable(vector<Table>& tables, int tableId) {
    tables.push_back(Table(tableId));
}

// ฟังก์ชันจองโต๊ะ
void reserveTable(vector<Table>& tables, int tableId) {
    for (Table& table : tables) {
        if (table.getTableId() == tableId) {
            if (!table.isTableOccupied()) {
                table.reserveTable();
                cout << "จองโต๊ะ " << tableId << " สำเร็จ" << endl;
            } else {
                cout << "โต๊ะ " << tableId << " ถูกจองแล้ว" << endl;
            }
            return;
        }
    }
    cout << "ไม่พบโต๊ะที่คุณต้องการจอง" << endl;
}

// ฟังก์ชันยกเลิกการจองโต๊ะ
void cancelReservation(vector<Table>& tables, int tableId) {
    for (Table& table : tables) {
        if (table.getTableId() == tableId) {
            if (table.isTableOccupied()) {
                table.releaseTable();
                cout << "ยกเลิกการจองโต๊ะ " << tableId << " สำเร็จ" << endl;
            } else {
                cout << "โต๊ะ " << tableId << " ไม่ได้ถูกจอง" << endl;
            }
            return;
        }
    }
    cout << "ไม่พบโต๊ะที่คุณต้องการยกเลิกการจอง" << endl;
}

// ฟังก์ชันแสดงสถานะของโต๊ะทั้งหมด
void showTableStatus(const vector<Table>& tables) {
    cout << "สถานะของโต๊ะ:" << endl;
    for (const Table& table : tables) {
        cout << "โต๊ะ " << table.getTableId() << ": ";
        if (table.isTableOccupied()) {
            cout << "ถูกจอง" << endl;
        } else {
            cout << "ว่าง" << endl;
        }
    }
}

int main() {
    vector<Table> tables;
    int choice;
    
    while (true) {
        cout << "เมนู:" << endl;
        cout << "1. เพิ่มโต๊ะ" << endl;
        cout << "2. จองโต๊ะ" << endl;
        cout << "3. ยกเลิกการจองโต๊ะ" << endl;
        cout << "4. แสดงสถานะโต๊ะ" << endl;
        cout << "5. ออกจากโปรแกรม" << endl;
        cout << "โปรดเลือก: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                int tableId;
                cout << "กรอกหมายเลขโต๊ะที่ต้องการเพิ่ม: ";
                cin >> tableId;
                addTable(tables, tableId);
                break;
            case 2:
                cout << "กรอกหมายเลขโต๊ะที่ต้องการจอง: ";
                cin >> tableId;
                reserveTable(tables, tableId);
                break;
            case 3:
                cout << "กรอกหมายเลขโต๊ะที่ต้องการยกเลิกการจอง: ";
                cin >> tableId;
                cancelReservation(tables, tableId);
                break;
            case 4:
                showTableStatus(tables);
                break;
            case 5:
                cout << "ออกจากโปรแกรม" << endl;
                return 0;
            default:
                cout << "เลือกทางเลือกไม่ถูกต้อง" << endl;
        }
    }

    return 0;
}
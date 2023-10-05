#include <iostream>
#include <string>
using namespace std;

int main()
{
start:
    string noodle[] = {"1.เส้นเล็ก", "2.เส้นใหญ่", "3.เส้นหมี่", "4.วุ้นเส้น", "0.สำเร็จการสั่ง"};
    int selectwater;
    int selectspecial;
    int totalprice = 0;
    int totalamount;

    while (true)
    {
        int selectnoodle;
        cout << "\nกรุณาเลือกเส้น : ";

        for (int i = 0; i < 5; i++)
        {
            cout << noodle[i] << " ";
        }

        cout << endl
             << "ชั้นเลือกนายเส้นที่ : ",
            cin >> selectnoodle;

        while (true)
        {
            if (selectnoodle >= 1 && selectnoodle <= 4)
            {
                char selectmp;
                cout << "ก๋วยเตี๋ยวเนื้อหรือก๋วยเตี๋ยวหมู ก๋วยเตี๋ยวเนื้อ(M) ก๋วยเตี๋ยวหมู(P)"
                     << endl
                     << "ชั้นเลือกนายเจ้า : ",
                    cin >> selectmp;

                if (selectmp == 'M' || selectmp == 'm')
                {
                    while (true)
                    {
                        cout << "กรุณาเลือกน้ำซุป 1.น้ำใส 2.ต้มยำ\nเลือก : ";
                        cin >> selectwater;

                        if (selectwater == 1)
                        {

                            while (true)
                            {
                                cout << "ธรรมดาหรือพิเศษ 1.ธรรมดา 40 บาท 2.พิเศษ 45 บาท\nชั้นเลือก : ";
                                cin >> selectspecial;

                                if (selectspecial == 1 || selectspecial == 2)
                                {
                                    cout << "กรุณาระบุจำนวนที่ต้องการ : ";
                                    cin >> totalamount;

                                    if (selectspecial == 1)
                                    {
                                        totalprice = totalamount * 40;
                                        cout << "\n---------------------------------------------------------" << endl
                                             << "สรุปรายการเมนู" << endl
                                             << "ก๋วยเตี๋ยวเนื้อ " << noodle[selectnoodle - 1].erase(0, 2) << " น้ำใส ธรรมดา"
                                             << "         " << totalamount << "  ชาม"
                                             << "         " << totalprice << " บาท"
                                             << "\n---------------------------------------------------------" << endl;
                                        goto start;
                                    }
                                    else if (selectspecial == 2)
                                    {
                                        totalprice = totalamount * 45;
                                        cout << "\n---------------------------------------------------------" << endl
                                             << "สรุปรายการเมนู" << endl
                                             << "ก๋วยเตี๋ยวเนื้อ " << noodle[selectnoodle - 1].erase(0, 2) << " น้ำใส พิเศษ"
                                             << "         " << totalamount << "  ชาม"
                                             << "         " << totalprice << " บาท"
                                             << "\n---------------------------------------------------------" << endl;
                                        goto start;
                                    }
                                    else
                                    {
                                        cout << "\nไม่มีในเมนู\n";
                                    }
                                }
                                else
                                {
                                    cout << "\nไม่มีในเมนู\n";
                                }
                            }
                        }
                        else if (selectwater == 2)
                        {
                            while (true)
                            {
                                cout << "ธรรมดาหรือพิเศษ 1.ธรรมดา 45 บาท 2.พิเศษ 50 บาท\nชั้นเลือก : ";
                                cin >> selectspecial;

                                if (selectspecial == 1 || selectspecial == 2)
                                {
                                    cout << "กรุณาระบุจำนวนที่ต้องการ : ";
                                    cin >> totalamount;

                                    if (selectspecial == 1)
                                    {
                                        totalprice = totalamount * 45;
                                        cout << "\n---------------------------------------------------------" << endl
                                             << "สรุปรายการเมนู" << endl
                                             << "ก๋วยเตี๋ยวเนื้อ " << noodle[selectnoodle - 1].erase(0, 2) << " ต้มยำ ธรรมดา"
                                             << "         " << totalamount << "  ชาม"
                                             << "         " << totalprice << " บาท"
                                             << "\n---------------------------------------------------------" << endl;
                                        goto start;
                                    }
                                    else if (selectspecial == 2)
                                    {
                                        totalprice = totalamount * 50;
                                        cout << "\n---------------------------------------------------------" << endl
                                             << "สรุปรายการเมนู" << endl
                                             << "ก๋วยเตี๋ยวเนื้อ " << noodle[selectnoodle - 1].erase(0, 2) << " ต้มยำ พิเศษ"
                                             << "         " << totalamount << "  ชาม"
                                             << "         " << totalprice << " บาท"
                                             << "\n---------------------------------------------------------" << endl;
                                        goto start;
                                    }
                                    else
                                    {
                                        cout << "\nไม่มีในเมนู\n";
                                    }
                                }
                                else
                                {
                                    cout << "\nไม่มีในเมนู\n";
                                }
                            }
                        }
                        else
                        {
                            cout << "\nไม่มีในเมนู\n";
                        }
                    }
                }
                else if (selectmp == 'P' || selectmp == 'p')
                {
                    while (true)
                    {
                        cout << "กรุณาเลือกน้ำซุป 1.น้ำตก 2.ต้มยำ\nเลือก : ";
                        cin >> selectwater;

                        if (selectwater == 1)
                        {

                            while (true)
                            {
                                cout << "ธรรมดาหรือพิเศษ 1.ธรรมดา 50 บาท 2.พิเศษ 55 บาท\nชั้นเลือก : ";
                                cin >> selectspecial;

                                if (selectspecial == 1 || selectspecial == 2)
                                {
                                    cout << "กรุณาระบุจำนวนที่ต้องการ : ";
                                    cin >> totalamount;

                                    if (selectspecial == 1)
                                    {
                                        totalprice = totalamount * 50;
                                        cout << "\n---------------------------------------------------------" << endl
                                             << "สรุปรายการเมนู" << endl
                                             << "ก๋วยเตี๋ยวหมู " << noodle[selectnoodle - 1].erase(0, 2) << " น้ำตก ธรรมดา"
                                             << "         " << totalamount << "  ชาม"
                                             << "         " << totalprice << " บาท"
                                             << "\n---------------------------------------------------------" << endl;
                                        goto start;
                                    }
                                    else if (selectspecial == 2)
                                    {
                                        totalprice = totalamount * 55;
                                        cout << "\n---------------------------------------------------------" << endl
                                             << "สรุปรายการเมนู" << endl
                                             << "ก๋วยเตี๋ยวหมู " << noodle[selectnoodle - 1].erase(0, 2) << " น้ำตก พิเศษ"
                                             << "         " << totalamount << "  ชาม"
                                             << "         " << totalprice << " บาท"
                                             << "\n---------------------------------------------------------" << endl;
                                        goto start;
                                    }
                                    else
                                    {
                                        cout << "\nไม่มีในเมนู\n";
                                    }
                                }
                                else
                                {
                                    cout << "\nไม่มีในเมนู\n";
                                }
                            }
                        }
                        else if (selectwater == 2)
                        {
                            while (true)
                            {
                                cout << "ธรรมดาหรือพิเศษ 1.ธรรมดา 55 บาท 2.พิเศษ 60 บาท\nชั้นเลือก : ";
                                cin >> selectspecial;

                                if (selectspecial == 1 || selectspecial == 2)
                                {
                                    cout << "กรุณาระบุจำนวนที่ต้องการ : ";
                                    cin >> totalamount;

                                    if (selectspecial == 1)
                                    {
                                        totalprice = totalamount * 55;
                                        cout << "\n---------------------------------------------------------" << endl
                                             << "สรุปรายการเมนู" << endl
                                             << "ก๋วยเตี๋ยวหมู " << noodle[selectnoodle - 1].erase(0, 2) << " ต้มยำ ธรรมดา"
                                             << "         " << totalamount << "  ชาม"
                                             << "         " << totalprice << " บาท"
                                             << "\n---------------------------------------------------------" << endl;
                                        goto start;
                                    }
                                    else if (selectspecial == 2)
                                    {
                                        totalprice = totalamount * 60;
                                        cout << "\n---------------------------------------------------------" << endl
                                             << "สรุปรายการเมนู" << endl
                                             << "ก๋วยเตี๋ยวหมู " << noodle[selectnoodle - 1].erase(0, 2) << " ต้มยำ พิเศษ"
                                             << "         " << totalamount << "  ชาม"
                                             << "         " << totalprice << " บาท"
                                             << "\n---------------------------------------------------------" << endl;
                                        goto start;
                                    }
                                    else
                                    {
                                        cout << "\nไม่มีในเมนู\n";
                                    }
                                }
                                else
                                {
                                    cout << "\nไม่มีในเมนู\n";
                                }
                            }
                        }
                        else
                        {
                            cout << "\nไม่มีในเมนู\n";
                        }
                    }
                }
                else
                {
                    cout << "\nไม่มีในเมนู\n";
                }
            }
            else if (selectnoodle == 0)
            {
                cout << "สำเร็จการสั่ง";
                return 0;
            }
            else
            {
                cout << "\nไม่มีในเมนู\n";
                break;
            }
        }
    }
}
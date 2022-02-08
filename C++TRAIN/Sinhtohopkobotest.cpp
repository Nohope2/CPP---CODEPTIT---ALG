#include<bits/stdc++.h> 
using namespace std;
#define endl "\n"
class Peoples
{
protected:
    string Name , Hometown , Gender;
    int Age ;
public:
    Peoples(string name, string hometown , string gender , int age)
        : Name(name), Hometown(hometown), Gender(gender), Age(age)
    {}
};
class Employees : protected Peoples
{
private:
    int TimeWork;
public:
    Employees(string name, string hometown , string gender , int age , int timework)
        : Peoples(name,hometown,gender,age), TimeWork(timework)
    {}
    int Level()
    {
        if(TimeWork > 20)return 2;
        else return 1;
    }
    int GetSalary()
    {
        return TimeWork * 100000 + Level() * 100000;
    }
    void GetInfo()
    {
        cout << "Thong Tin Cong Nhan" << endl;
        cout << "Ho Ten: " << Name << endl;
        cout << "Que Quan: " << Hometown << endl; 
        cout << "Gioi Tinh: " << Gender << endl;
        cout << "Tuoi: " << Age << endl;
        cout << "So Ngay Lam Viec: " << TimeWork << endl;
        cout << "Luong: " << GetSalary() << endl;
    }
};
class Supervisors : protected Peoples
{
private:
    int Level;
public:
    int GetSalary()
    {
        return Level * 3000000;
    }
    Supervisors(string name, string hometown , string gender , int age , int level)
        : Peoples(name,hometown,gender,age), Level(level)
    {}
    void GetInfo()
    {
        cout << "Thong Tin Can Bo" << endl;
        cout << "Ho Ten: " << Name << endl;
        cout << "Que Quan: " << Hometown << endl; 
        cout << "Gioi Tinh: " << Gender << endl;
        cout << "Tuoi: " << Age << endl;
        cout << "He So Luong: " << Level << endl;
        cout << "Luong: " << GetSalary() << endl;
    }
};
bool cmp(Employees a , Employees b)
{
    return a.GetSalary() > b.GetSalary();
}
class Factories
{
private:
    vector<Supervisors> Supervisor;
    vector<Employees> Employee;
public:
    void GetSupervisor()
    {
        if(Supervisor.empty())cout << "Chua Co Can Bo" << endl;
        else Supervisor[0].GetInfo();
    }
    void GetEmployee()
    {
        if(Employee.empty())cout << "Chua Co Cong Nhan" << endl;
        else
        {
            for(int i = 0 ; i < Employee.size() ; i ++)
            {
                Employee[i].GetInfo();
            }
        }
    }
    int GetTotalSalaryOfEmployee()
    {
        int s = 0;
        for(int i = 0 ; i < Employee.size() ; i ++)
        {
            s += Employee[i].GetSalary();
        }
        return s;
    }
    void SetSupervisor()
    {
        string name;
        string hometown;
        string gender;
        int age , level;
        cout << "Nhap Thong Tin Can Bo" << endl;
        cout << "Nhap Ho Ten:";
        cin.ignore();
        getline(cin,name);
        cout << "\n" << "Nhap Que Quan:";
        getline(cin,hometown);
        cout << "\n" << "Nhap Gioi Tinh:";
        getline(cin,gender);
        cout << "\n" << "Nhap Tuoi:";
        cin >> age;
        cout << "\n" << "Nhap He So Luong";
        cin >> level; 
        cout << endl;
        Supervisor.push_back({name,hometown,gender,age,level});
    }
    void SetEmployee()
    {
        string name;
        string hometown;
        string gender;
        int age , timework;
        cout << "Nhap Thong Tin Cong Nhan" << endl;
        cout << "Nhap Ho Ten: ";
        cin.ignore();
        getline(cin,name);
        cout << "\n" << "Nhap Que Quan: ";
        getline(cin,hometown);
        cout << "\n" << "Nhap Gioi Tinh: ";
        getline(cin,gender);
        cout << "\n" << "Nhap Tuoi: ";
        cin >> age;
        cout << "\n" << "Nhap So Ngay Lam: ";
        cin >> timework; 
        cout << endl;
        Employee.push_back({name,hometown,gender,age,timework});
    }
    void SortEmployees()
    {
        sort(Employee.begin(),Employee.end(),cmp);
    }
};

void solve()
{
    cout << "=================MENU================" << endl;
    cout << "1_Nhap Thong Tin Can Bo" << endl;
    cout << "2_Them Moi Mot Cong Nhan" << endl;
    cout << "3_Tinh Tong Tien Luong Cua Cong Nhan" << endl;
    cout << "4_Sap Xep Lai Thu Tu Cong Nhan Theo Luong Giam Dan" << endl;
    cout << "5_Sap Xep Lai Thu Tu Cong Nhan Theo Ngay Lam Giam Dan" << endl;
    cout << "6_In Thong Tin Can Bo" << endl;
    cout << "7_In Thong Tin Tat Ca Cong Nhan" << endl;
    int x;
    Factories Fac;
    while(cin >> x)
    {
        if(x == 1)
        {
            Fac.SetSupervisor();
        }
        else if(x == 2)
        {
            Fac.SetEmployee();
        }
        else if(x == 3)
        {
            cout << "Tong Tien Luong Cua Cong Nhan La: " << Fac.GetTotalSalaryOfEmployee() << endl;
        }
        else if(x == 4)
        {
            Fac.SortEmployees();
        }
        else if(x == 5)
        {
            Fac.SortEmployees();
        }
        else if(x == 6)
        {
            Fac.GetSupervisor();
        }
        else if(x == 7)
        {
            Fac.GetEmployee();
        }
        else break;
    }
}

int main()
{
    solve();
}
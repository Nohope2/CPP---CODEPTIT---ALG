#include <bits/stdc++.h>
using namespace std;
 
class Team
{
public:
    static int NUM_TEAM;
    string id;
    string name;
    string school;
 
    Team() {
        string s = to_string(NUM_TEAM++);
        while (s.length() < 2) {
            s = '0' + s;
        }
        id = "Team" + s;
    }
 
    void enter() {
        getline(cin, name);
        getline(cin, school);
    }
};
 
class Student
{
public:
    static int NUM_STUDENT;
    string id;
    string name;
    string idTeam;
    string teamName;
    string schoolName;
 
    Student() {
        string s = to_string(NUM_STUDENT++);
        while (s.length() < 3) {
            s = '0' + s;
        }
        id = "C" + s;
    }
 
    void enter() {
        getline(cin, name);
        getline(cin, idTeam);
    }
 
    void show() {
        cout << id << " " << name << " " << teamName << " " << schoolName << "\n";
    }
};
 
bool cmp(Student a, Student b) {
    return a.name < b.name;
}
 
int Team::NUM_TEAM = 1;
int Student::NUM_STUDENT = 1;
 
int main() {
    int nTeam;
    cin >> nTeam;
    cin.ignore();
    vector<Team> a;
    for (int i = 0; i < nTeam; ++i) {
        Team x = Team();
        x.enter();
        a.push_back(x);
    }
 
    int nStudent;
    cin >> nStudent;
    cin.ignore();
    vector<Student> b;
    for (int i = 0; i < nStudent; ++i) {
        Student x = Student();
        x.enter();
        for (int j = 0; j < nTeam; ++j) {
            if (x.idTeam == a[j].id) {
                x.teamName = a[j].name;
                x.schoolName = a[j].school;
                break;
            }
        }
        b.push_back(x);
    }
 
    sort(b.begin(), b.end(), cmp);
    for (auto x : b) {
        x.show();
    }
    return 0;
}
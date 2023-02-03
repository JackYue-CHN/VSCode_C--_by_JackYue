#include <bits/stdc++.h>
using namespace std;
class Student
{
    protected:
        string name;
        unsigned int score;
        string school,Class;
        char sex;
        unsigned int age;
    public:
        void set_data()
        {
            cin >> name >> age >> school >> Class >> sex >> score;
        }
        void display()
        {
            cout << name << " " << age << " " << school << " " << Class
            << " " << sex << " " << score;
        }
};
class U_S : public Student
{
    private:
        string collage;
    public:
        void set_data_Col()
        {
            cin >> name >> age >> school >> Class >> sex >> score
            >> collage;
        }
        void display()
        {
            cout << name << " " << age << " " << school << " " << Class
            << " " << sex << " " << score << " " << collage;
        }
        void birthday();
};
void U_S::birthday()
{
    age++;
    display();
}
int main()
{
    Student s1;
    U_S s2;
    s1.set_data();
    s1.display();
    s2.set_data_Col();
    s2.display();
    s2.birthday();
    s2.display();
    system("pause");
    return 0;
}

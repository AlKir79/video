// video.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

struct video
{
    char name[30];
    char director[30];
    char genre[30];
    float rating;
    float price;
};

void info(video* v, int i)
{
    cout << "Enter name of film ";
    cin >> v[i].name;
    cout << "Enter director of film ";
    cin >> v[i].director;
    cout << "Enter genre of film ";
    cin >> v[i].genre;
    cout << "Enter rating of film ";
    cin >> v[i].rating;
    cout << "Enter price of film ";
    cin >> v[i].price;
}
int enterF(video* v)
{
    char d = 'y'; int i = 1;
    while (d == 'Y' || d == 'y')
    {
        info(v, i);
        cout << endl;
        cout << "Continue? (y/n)";
        cin >> d;
        i++;
    }
    return i;
}
void prnt(video* v, int count)
{
    for (size_t i = 1; i < count; i++)
    {
        cout << i << "." << " " << v[i].name << " " << v[i].genre << " " << v[i].director << " " << v[i].rating << " " << v[i].price << endl;
    }
}
void find(video* v, int count)
{
    char f;
    cout << "Enter word ";
    cin >> f;
    for (size_t i = 1; i < count; i++)
    {
        if (f==v[i].name) 
        {
            cout << i << "." << " " << v[i].name << " " << v[i].genre << " " << v[i].director << " " << v[i].rating << " " << v[i].price << endl;
        }
    }
}

int main()
{
    int count = 0;
    video* film = new video[100];
    count = enterF(film);
    prnt(film, count);
}
 

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

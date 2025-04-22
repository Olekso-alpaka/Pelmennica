#include <iostream>

using namespace std;

int main()
{
    int t, M, qp, qf, qt;
    double af;
    cout << "Введите продолжительность смены: ";
    if (!cin >> t && t <= 0)
    {
        cout << "ERROR";
        return 0;
    }
    cout << "Введите кол-во пельменей изготовленных за смену: ";
    if (!cin >> M && M <= 0)
    {
        cout << "ERROR";
        return 0;
    }
    cout << "Введите сколько машина производит пельменей за рабочий период: ";
    if (!cin >> qp && qp <= 0)
    {
        cout << "ERROR";
        return 0;
    }
    cout << "Введите сколько машина производит фарша за рабочий период: ";
    if (!cin >> qf && qf <= 0)
    {
        cout << "ERROR";
        return 0;
    }
    cout << "Введите сколько машина производит теста за рабочий период: ";
    if (!cin >> qt && qt <= 0)
    {
        cout << "ERROR";
        return 0;
    }
    cout << "Введите процент содержания фарша: ";
    if (!cin >> af && af <= 0)
    {
        cout << "ERROR";
        return 0;
    }
}

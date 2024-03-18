#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {

    setlocale(LC_ALL, "Rus");
    using namespace std;

    float protein;
    float carbohydrate;
    float weightNetto;

    cout << "Здравствуйте Лена! Это программа похудейка.\nВведите пожалуйст колличество белков на 100 грамм продукта: ";
    cin >> protein;
    cout << "А теперь введит колличество углеводов на 100 грамм продукта: ";
    cin >> carbohydrate;
    cout << "А теперь введите общую массу нетто: ";
    cin >> weightNetto;

    cout << "В этом продукте содержится " << weightNetto / 100 * protein << " грамм белка, а также " << weightNetto / 100 * carbohydrate << " грамм углеводов!";
}

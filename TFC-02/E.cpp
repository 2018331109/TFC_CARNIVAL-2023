 #include <bits/stdc++.h>
using namespace std;

int main()
{

    string symbols;
    cin >> symbols;


    int integer_value = 0;


    for (char symbol : symbols)
    {
        if (symbol == '+')
        {
            integer_value += 1;
        }
        else if (symbol == '-')
        {
            integer_value -= 1;
        }
    }


    cout << integer_value << endl;

    return 0;
}


#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
     int rozmiarKwadratu;

     cout << "Podaj rozmiar kwadratu: ";
     cin >> rozmiarKwadratu;
    
    for(int i = 1; i <= rozmiarKwadratu; i++)
    {
                
        for(int j = 1; j <= rozmiarKwadratu; j++)
        {
            if(j <= i)
            {
                if(i%2)
                {
                    cout << 'X' ;
                    
                }
                else
                {
                    cout << 'O';
                }
                
            }
            else
            {
                cout << '-';
            }
            
        }
        

        cout << endl;
        
    }
    
    return 0;
}

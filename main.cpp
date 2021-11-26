#include <iostream>
#include <ctime>


using namespace std;

int masiva_funkcija(int x, int y, int z, int v);

int main()
    {
int rin, kol, sak, bei;
cout << "Ievadiet 2 skaitlus, kas noteiks masiva izmeru" << endl;
cout << endl;
cout << "Sis skaitlis noradis rindu skaitu (nedrikst but lielaks par 10): ";
cin >> rin;
cout << "Sis skaitlis noradis kollonu skaitune (nedrikst but lielaks par 10): ";
cin >> kol;
   if (rin,kol > 10)
   {
       cout << "Skaitlis nedrikst but lielaks par 10!" << endl;
       return 0;
    }
    else
    {

    }

cout << endl;
cout << "Ievadiet skaitli, kas noteiks skaitla beigu diapozonu " << endl;
cout << endl;
sak = 0;
cout << "Sis skaitlis noradis beigu diapozonu ";
cin >> bei;

masiva_funkcija(rin, kol, sak, bei);

}

int masiva_funkcija(int x,int y, int z, int v)
{
   if (z > v)
   {
       cout << "Sakuma diapazona nedrikst but lielaka par beigam! " << endl;
       return 0;
   }
   else
   {

   }
    int mas [x][y];
    srand(time(0));

   for (int i = 0; i < x; i++)
   {
       for (int j = 0; j < y; j++)
        {
             mas[i][j];

             mas[i][j] = rand()%((v+1)-z)+z;

             cout << mas[i][j] << " ";
        }
    cout << endl;
   }


    return 0;
}

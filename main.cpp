// Karlis Kocans, 11g, 17 gadus vecs, parbaudes darbs 26. novembri
#include <iostream>
#include <ctime>


using namespace std;

int masiva_funkcija(int x, int y, int z, int v, int p);

int main()
    {
int rin, kol, sak, bei,d;
cout << "Ievadiet 2 skaitlus, kas noteiks masiva izmeru" << endl;
cout << endl;
 cout << "Sis skaitlis noradis rindu skaitu (nedrikst but lielaks vai vienads ar 10, mazaks vai vienads ar 1): ";
cin >> rin;
cout << "Sis skaitlis noradis kollonu skaitune (nedrikst but lielaks vai vienads ar 10, mazaks vai vienads ar 1): ";
cin >> kol;
d = 0;


   if (rin,kol > 9 && rin, kol < 2)
   {
       cout << "Skaitli nedrikst but lielaki vai vienadi ar 10, mazaki vai vienadi ar 1! Skaitli parveidots par 9!" << endl;
       rin = 10;
       kol = 10;



        {

        }
    }
    else
    {

    }


cout << endl;
cout << "Ievadiet skaitli, kas noteiks skaitla beigu diapozonu (nedrikst but lielaks par 10 vai vienads vai mazaks par 2!) " << endl;
cout << endl;
cin >> bei;
sak = 0;

if (bei > 10 && bei < 3)
{
    cout << "Skaitlis nedrikst but lielaks par 10 vai vienads vai mazaks par 2! Skaitlis parveidots par 10" << endl;
    bei = 10;
}
else
{

}

  cout << endl;
masiva_funkcija(rin, kol, sak, bei, d);

}

int masiva_funkcija(int x,int y, int z, int v, int p)
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
             p = p + mas[i][j];
             cout << mas[i][j] << " ";

        }
    cout << endl;
   }
cout << "Malacis!" << endl;

cout << "Visu masivu elementu summa ir: " << p << endl;


    return 0;
}

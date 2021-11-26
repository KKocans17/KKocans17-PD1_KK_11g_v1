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


   if (rin,kol > 9)
   {
       cout << "Skaitlis nedrikst but lielaks vai vienads ar 10, mazaks vai vienads ar 1!" << endl;
       return 0;

        {

        }
    }
    else
    {

    }
    if (rin, kol < 2)
    {
          cout << "Skaitlis nedrikst but lielaks vai vienads ar 10, mazaks vai vienads ar 1!" << endl;
       return 0;

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

if (bei > 10)
{
    cout << "Skaitlis nedrikst but lielaks par 10 vai vienads vai mazaks par 2!" << endl;
    return 0;
}
else
{

}
if (bei < 3)
{
    cout << "Skaitlis nedrikst but lielaks par 10 vai vienads vai mazaks par 2!" << endl;
    return 0;
}
else
{

}


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

             cout << mas[i][j] << " ";
             p = p + mas[i][j];

        }
    cout << endl;
   }
cout << "Malacis!" << endl;

cout << "Visu masivu elementu summa ir: " << p<< endl;


    return 0;
}

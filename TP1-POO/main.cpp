#include <iostream>

using namespace std;

namespace  {


    class Duree {

        private:
            int myDuree;
            int mySeconds;
            int myMinutes;
            int myHours;
            int myDays;

            void normaliser();



        public:
            // get et les set
            int getMyDuree() {
                return this->myDuree;
            }
            void setMyDuree(const int & newVal) {
                this->myDuree = newVal;
                this->normaliser();
            }

            Duree(const int & duree) {
                this->myDuree = duree;

                // Calculer les autres attributs
                this->myMinutes = myDuree / 60;
                this->mySeconds = myDuree % 60;

                this->myHours = myMinutes / 60;
                this->myMinutes = myMinutes % 60;

                this->myDays = myHours / 24;
                this->myHours = myHours % 24;
            }

            void display() {
                cout << " La durée totale est de : " << this->myDuree << endl
                     << " Nombre de jours : " << this->myDays << endl
                     << " Nombre d'heures : " << this->myHours << endl
                     << " Nombre de minutes : " << this->myMinutes << endl
                     << " Nombre de secondes : " << this->mySeconds << endl;
            }
    };
}







int main()
{
    Duree maDuree = Duree(15200);

    maDuree.display();






    cout << "Hello World!" << endl;
    return 0;
}

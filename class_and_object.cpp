#include <iostream>
using namespace std;

// class car{
//     public:
//         string brand;

//         void display(){
//             cout<<"Car Brand: "<<brand;
//         }
// };

// int main(){
//     car car1;

//     car1.brand="Toyota";

//     car1.display();
// }

class Dog{
    public:
        string name;
        string breed;

        void display(){
            cout<<"Dogs name: "<<name<<endl;
            cout<<"Dogs breed: "<<breed;
        }
};

int main(){
    Dog dog1;

    dog1.name="Tuffy";
    dog1.breed="German Sheperd";

    dog1.display();
}
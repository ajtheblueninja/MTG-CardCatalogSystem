#include <iostream>
using namespace std;

class MTGCard{
    private: //declarations
        string cardName;
        double price = 0;
        int quantity = 0;
        int condition; //1 - mint, 2 - near mint, 3 - rough edges, 4 - damaged

        //these could be used for a filtering method later on
/*
        int color; //1 - blue, 2 - green,  3 - white 4 - black, 5 - red, 6 - multi colored;
        int rarity; //1 = common, 2 - uncommon, 3 - rare, 4 - mythic rare
        int CMC; // cards total converted mana cost
        string setName; // this would be an appreviation for the sets or the number that the number was set
        int setNumber; // the card number in the set
*/

    public:
         MTGCard() { //constructor

           }
        //setters
         void setfName(string n) {
            cardName = n;
          }
        void setlPrice(double n) {
            price = n;
          }
        void setQuantity(int n){
            quantity = n;
        }
        void setCondition(int n){
            condition = n;
        }
        //getters
        string getCardName(){
            return cardName;
        }
        double getPrice(){
            return price;
        }
        int getQuantity(){
            return quantity;
        }
        int getCondition(){
            return condition;
        }

};

int main()
{
    //declarations
    MTGCard CardtoInput;
    string cardName;
    int quantity;
    int condition;


    //option settings to do later
    /*
    int color;
    int rarity;
    int CMC;
    string setName;
    int setNumber;
    */

    cout << "enter card name : ";
    getline(cin, cardName);

    cout << cardName;



    //future to do
    /*
     * 1. get variables in
     * 2. set them in the card class
     * 3. put the card class into array
     * 4. set up filter methods?
     *
     *
    */

}

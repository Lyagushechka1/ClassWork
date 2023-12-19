#include <iostream>
#include <vector>
using namespace std;

class Product{
private:
    string name;
    int ID;
    double price;
    int NumberOfProduct;
public:
    Product(string n, int id, double p, int nop) : name(n), ID(id), price(p), NumberOfProduct(nop) {}
    string GetName() const{ return this->name; }
    int GetID() const{ return this->ID; }
    double GetPrice() const {return this->price; }
    int GetNumberOfProducts() const{ return this->NumberOfProduct; }

    void SetName(string name){ name = this->name; }
    void SetID(int ID){ ID = this->ID; }
    void SetPrice(double price){ price = this->price; }
    void SetNumberOfProducts(int NOP){ NOP = this->NumberOfProduct; }

    void display() const {
        cout << "ID: " << GetID() << ", Name: " << GetName()<< "Price: " << GetPrice() << "Quantity: " << GetNumberOfProducts() << endl;
    }
};

class Warehouse{
private:
    vector <Product> products;
public:
    void addProduct(const Product& product) {
        products.push_back(product);
    }
    void RemoveByID(int productID) {
        for (auto it = products.begin(); it != products.end(); ++it) {
            if (it->GetID() == productID) {
                products.erase(it);
                break;
            }
        }
    }    
    void ShowAllProduct(){
        for (const auto& product : products) {
            product.display();
        }
    }
};
int main()
{
    Warehouse WH;
    Product ps4("PS4", 1, 999.99, 12);
    WH.addProduct(ps4);
    WH.ShowAllProduct();
    int idtoremove = 1;
    WH.RemoveByID(idtoremove);
    WH.ShowAllProduct();
}
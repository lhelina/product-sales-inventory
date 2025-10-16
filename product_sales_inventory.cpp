#include <iostream>
#include <iomanip>
#include <string>
#define TAX_RATE_MACRO 0.20
using namespace std;

int main() {
    cout << "This is the Product Sales and Inventory Analysis Program!\n";
    cout << " C++ is a compiled language.\n\n";
    string Pname;
    int Pcategory;
    int initialInventory;
    float Pprice;
    int Psold;
    int newInventory;
    float totalSalesAmount;
    string inventoryStatus;
    int sampleInt1 = 10;  
    int sampleInt2; 
    sampleInt2 = 20;      
    int sampleInt3 {30};  
    const float TAX_RATE_CONST = 0.20f;
    cout << "Enter product name : ";
    cin >> Pname;
    cout << "Enter product category : ";
    cin >> Pcategory;
    cout << "Enter initial inventory quantity: ";
    cin >> initialInventory;
    cout << "Enter product price per unit: ";
    cin >> Pprice;
    cout << "Enter number of items sold: ";
    cin >> Psold;
    newInventory = initialInventory;
    newInventory -= Psold;  
    totalSalesAmount = Psold * Pprice;
    inventoryStatus = (newInventory < 10) ? "Low Inventory" : "Sufficient Inventory";
    auto salesCopy = totalSalesAmount;
    decltype(initialInventory) helperInventory = 50;
    
    if (Pcategory < 1 || Pcategory > 5) {
        cout << "Invalid product category!\n";
    } else {
        switch (Pcategory) {
            case 1: cout << "Category 1: Electronics\n"; break;
            case 2: cout << "Category 2: Groceries\n"; break;
            case 3: cout << "Category 3: Clothing\n"; break;
            case 4: cout << "Category 4: Stationery\n"; break;
            case 5: cout << "Category 5: Miscellaneous\n"; break;
        }
    }
    cout << "\nReceipt:\n";
    for (int i = 1; i <= Psold; ++i) {
        cout << "Item " << i << ": " << fixed << setprecision(2) << Pprice << "\n";
    }
    cout << "\nTax Rate (Preprocessor): " << TAX_RATE_MACRO * 100 << "%\n";
    cout << "Tax Rate (Const Variable): " << TAX_RATE_CONST * 100 << "%\n";
    
    cout << "\nProduct Summary:\n";
    cout << "Product Name: " << Pname << "\n";
    cout << "Initial Inventory: " << initialInventory << "\n";
    cout << "Price per Unit: $" << fixed << setprecision(2) << Pprice << "\n";
    cout << "Items Sold: " << Psold << "\n";
    cout << "New Inventory: " << newInventory << "\n";
    cout << "Total Sales Amount: $" << totalSalesAmount << "\n";
    cout << "Inventory Status: " << inventoryStatus << "\n";
    cout << "Helper Variable (Sales Copy): $" << salesCopy << "\n";
    cout << "Helper Variable (Helper Inventory): " << helperInventory << "\n";
    
    return 0;
    }

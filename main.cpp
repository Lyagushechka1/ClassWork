#include <iostream>
using namespace std;
class Image {
private:
    unsigned short int width;
    unsigned short int height;
    string name;
    string extension;
    unsigned short int imageWightInByte;
public:
    string format;
    string comment;
    string tags[100];
    string newNameWithoutNumbers = "";
    unsigned short int rating;
    Image(unsigned short int inputWidth = 1000, unsigned short int inputHeight = 1000, string newName = "") {
        width = inputWidth;
        height = inputHeight;
        name = newName;
        name = "Image_01" + extension;
        extension = ".jpg";
        format = "";
        comment = "";
        tags;
        rating = 0;
        imageWightInByte = width * height * 3;
    }
    //GET
    unsigned short int getWidth() {return width;}
    unsigned short int getImageWightInByte() { return imageWightInByte; }
    string getName() { return name; }
    //SET
    void setName(string newName) { if (newName < '0' && newName > '9' ) {name = newName ; } }
    void setWidth(unsigned short int inputWidth) { if (inputWidth > 500 && inputWidth < 10000) { width = inputWidth; } }
};
int main()
{
    Image first{640, 1280, "Image_01"};
    cout << first.getName() << endl;
}

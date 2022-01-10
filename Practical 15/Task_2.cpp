#include <iostream>
#include <fstream>
using namespace std;

int main ()
 {
    // a. 
    string str;
    fstream ain("reading.txt");
    str=ain.get();
    cout<<"Reading from a File:"<<endl;
    while(!ain.eof())
    {
        cout<<str;
        str=ain.get();
    }
    ain.close();


    // b.
    fstream bout("writing.txt");
    bout<<"Hlo you are writing in file....!";
    bout.close();


    // c.
    fstream fout("writing.txt",ios::app);
    fout<<"\nNow appending the file...";
    fout.close();


    // d.
    cout<<endl<<endl<<"Counting content of reading.txt file:";
    char ch;
    int character=0,word=0,line=0;
    fstream din("reading.txt");
    
    while(din>>noskipws>>ch)
    {
        if(ch != ' ' && ch != '\n')
            character++;
        else if(ch==' ')
            word++;
        else if(ch== '\n')
        {
            line++;
            word++;
        }
        else;
    }
    cout<<"\nCharacter count is: "<<character;
    cout<<"\nWord count is: "<<word;
    cout<<"\nLine count is: "<<line;
    din.close();
    
    return 0;
}

#include <QApplication>

#include<string>
#include"table.h"
#include<vector>

using namespace std;

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

//    vector<tableRows> roows;
//    roows.push_back(tableRows("student",type::CHAR,20));
//    roows.push_back(tableRows("age",type::INT));
    Table c ("student");
//    c.instertTOTable("29|'bdn'","age|student");
    if(c.translateFromConstrainMessageAndCheck("1\n*\nin|99|300|200|400|500",type::INT,300))
        cout<<666<<endl;
              else
              cerr<<"nsa"<<endl;
    return a.exec();
}

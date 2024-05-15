#include <QApplication>

#include<string>
#include"table.h"
#include<vector>


#include <QDir>
#include <QString>
#include <QDebug>
#include <cstring> // 用于c_str()方法

using namespace std;

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
//创建表示例代码
//    vector<tableRows> roows;
//    roows.push_back(tableRows("name",type::CHAR,false,"","","'no name'",false));
//    roows.push_back(tableRows("grade",type::INT,false,"","","0",true));
//    Table c (roows,"sc");
//    c.setContrain("grade","1\n*\nbetween|10|100");
////    c.setContrain("name","1\n*\nin|'dali'|'xiaowang'");
//    c.test();

//        vector<tableRows> roows;
//        roows.push_back(tableRows("name",type::CHAR,false,"","","'no name'",false));
//        roows.push_back(tableRows("grade",type::INT,false,"","","0",true));
//        Table c (roows,"student");
//        c.setContrain("age","1\n*\nbetween|0|100");
//        //c.setContrain("name","1\n*\nin|'dali'|'xiaowang'");
//        c.test();


//删除指定内容示例代码
//    Table c ("sc1");
//    vector<string>name;
//    name.push_back("grade");
//    name.push_back("name");
//    vector<string>co;
//    co.push_back("1\n*\ndengYu|92");
//    co.push_back("1\n*\ndengYu|'jppd'");
//    c.instertTOTable("'jpp'|92");
//    c.show();
//    c.deleteFromTable(Table::delete_mode::SELECT,name,co,"*A*");
//    c.show();
//    c.test();


    //update内容示例代码
//            Table c ("sc1");
//            vector<string>cname;
//            cname.push_back("grade");
//            cname.push_back("grade");
//            vector<string>name;
//            name.push_back("name");
//            vector<string>goal;
//            goal.push_back("'mars'");
//            vector<string>co;
//            co.push_back("1\n*\ndengYu|92");
//            co.push_back("1\n*\ndaYu|80");
//            //co.push_back("1\n*\ndengYu|92");
//            c.deleteFromTable();
//            c.instertTOTable("'apu'|82");
//            c.instertTOTable("'dpu'|92");
//            c.show();
//           c.updateTable(name,goal,cname,co,"*O*");
//           c.show();



     //update内容示例代码
//             Table c ("student");
//             c.alterTable(Table::alter_mode::RENAME,Table::alter_class::TABLE,"sc");


//Table c ("sc");
//c.alterTable(Table::alter_mode::RENAME,Table::alter_class::TABLE,"sc1");
//c.show();

//   Table c ("student");
//c.instertTOTable("'dali'|19");
//    string p="'dali'";
//    if(c.translateFromConstrainMessageAndCheck_c("1\n*\nin|'dali'|'xiaowang'",type::CHAR,p))
//        cout<<"yes";
//              else cout<<"no";



//"3\n*O*A*\nin|99|300|900|1699\ndaYu|777\nxiaoYu|779"
    string la="'ttom'";
//    if(c.translateFromConstrainMessageAndCheck_C("4\n*O*A*O*\nin|'Dam'\ndaYu|'777'\nxiaoYu|'779'\ndengYu|'ttom'",type::CHAR,la))
//        cout<<666<<endl;
//              else
//              cerr<<"nsa"<<endl;
//    if(c.translateFromConstrainMessageAndCheck_i("3\n*O*A*\nin|99|300|900|1699\ndaYu|777\nxiaoYu|779",type::INT,778))
//        cout<<666<<endl;
//              else
//              cerr<<"nsa"<<endl;
//    if(c.checkConstrains("3\n*O*A*\nin|99|300|900|1699\ndaYu|777\nxiaoYu|779",type::INT,""))
//        cout<<666<<endl;
//              else
//              cerr<<"nsa"<<endl;
//        if(c.checkConstrains("1\n*\nnotNull",type::DOUBLE,"9.66"))
//            cout<<666<<endl;
//                  else
//                  cerr<<"nsa"<<endl;
//    if(c.translateFromConstrainMessageAndCheck_d("4\n*O*A*O*\ndaYu|19.9\ndaYu|'15.3'\nxiaoYu|'15.2'\ndengYu|19.6",type::DOUBLE,15.6))
//        cout<<666<<endl;
//              else
//              cerr<<"nsa"<<endl;
//    if(c.checkType(type::DOUBLE,"15.6"))
//        cout<<666<<endl;
//              else
//              cerr<<"nsa"<<endl;
//    if(c.translateFromConstrainMessageAndCheck_d("2\n*O*\ndaYu|19.9\nin|16.3|17.2",type::DOUBLE,17.2))
//        cout<<666<<endl;
//              else
//              cerr<<"nsa"<<endl;
//    if(c.checkConstrains("2\n*O*\ndaYu|19.9\nin|16.3|17.2",type::DOUBLE,"17.2"))
//        cout<<666<<endl;
//              else
//              cerr<<"nsa"<<endl;
    Table c("sc1");
    c.updateForeignKenyMessages();

//        vector<tableRows> roows;
//        roows.push_back(tableRows("name",type::CHAR,false,"","","'no name'",false));
//        roows.push_back(tableRows("grade",type::INT,false,"grade","sc1","0",true));
//        Table d2 (roows,"sc4");
        Table d2("sc4");
        //d2.setContrain("grade","1\n*\nbetween|10|100");
        d2.updateForeignKenyMessages();
//if(d2.checkForeignKenyMessages("sc1","name"))
//{

//    cerr << "6941594519451945194: "  << endl;
//}
//          else cerr << "Unable to open file: "  << endl;
//d2.updateTable("'wvan'|86");
//d1.deleteFromTable(Table::delete_mode::ALL);
//d1.dropTable();
//d1.updateForeignKenyMessages();


    return a.exec();
}

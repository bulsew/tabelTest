﻿#include <QApplication>

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
//    Table c ("sc");
//    vector<string>name;
//    name.push_back("grade");
//    vector<string>co;
//    co.push_back("1\n*\ndengYu|92");
//    c.instertTOTable("'jpp'|92");
//    c.deleteFromTable(Table::delete_mode::SELECT,name,co);
    //c.test();


    //update内容示例代码
//            Table c ("sc");
//            vector<string>name;
//            name.push_back("name");
//            vector<string>goal;
//            goal.push_back("'mars'");
//            vector<string>co;
//            co.push_back("1\n*\ndengYu|'apu'");
//            c.deleteFromTable();
//            c.instertTOTable("'apu'|82");
//            c.instertTOTable("'dpu'|92");
//            c.show();
//           c.updateTable(name,goal,co);



     //update内容示例代码
//             Table c ("student");
//             c.alterTable(Table::alter_mode::RENAME,Table::alter_class::TABLE,"sc");




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
    Table c("sc");
    string add=c.add;
    QString oldDirPath = QString::fromStdString(add);
    qDebug() <<oldDirPath ;
    QString newDirName = QString::fromStdString("content"); // 注意：这里只是新的目录名，不包含路径

    QDir oldDir(oldDirPath);
    if (!oldDir.exists()) {
        qDebug() << "Directory does not exist:" << oldDirPath;
        return false;
    }

    QString parentDirPath = oldDir.absolutePath();
    qDebug() << "Directory does not exist:" << parentDirPath;

    QString newDirPath = QDir(parentDirPath).filePath(newDirName); // 构建新的目录路径

    QDir newDirParent = QDir(parentDirPath); // 确保父目录存在
    if (!newDirParent.exists()) {
        qDebug() << "Parent directory does not exist:" << parentDirPath;
        return false;
    }

    // 检查新目录名是否已存在（作为文件或目录）
    QFileInfo fileInfo(newDirPath);
    if (fileInfo.exists()) {
        qDebug() << "New directory name already exists:" << newDirPath;
        return false;
    }

    // 尝试重命名目录
    bool success = QDir().rename(oldDirPath, newDirPath);
    if (!success) {
        qDebug() << "Failed to rename directory from" << oldDirPath << "to" << newDirPath;
    }

    return success;



    return a.exec();
}

#include <bits/types/time_t.h>
#include <ios>
#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <ctime>
#include <sstream>
#include <tools/info.h>
#include <tools/hints.h>


using namespace std;

// 以CMakeLists.txt作为项目根目录开始查找
static const std::string filepath ="data.txt";

/**
 * @brief 
 * 
 * @param dest 用来存储所生成id的变量
 * @param type 
 */
void genID(std::string& dest,id_type type){
    int uid=0,gid=0,oid=0;
    int id=0;

    ifstream ifs(filepath);

    if(ifs){
        ifs>>uid>>gid>>oid;
        ifs.close();
    }
    else {
        failMessage("file open fail!");
    }

    //写入和读取的数据流不能够同时初始化，需要输入流关闭后才可以使能输出流 
    ofstream ofs(filepath);
    switch(type){
        case user: id=uid++;break;
        case good: id=gid++;break;
        case order: id=oid++;break;
            break;
    }
    
    dest = std::string(1, type) + std::to_string(id);
    ofs << uid << " " << gid << " " << oid << "\n";
    ofs.close();
}

void getDate(string& dest)
{
    string year;
    string mon;
    string day;
    time_t now=time(0);
    tm *ltm=localtime(&now);
    year=to_string(1900+ltm->tm_year);
    mon=to_string(ltm->tm_mon+1);
    day=to_string(ltm->tm_mday);
    dest=year+"-"+mon+"-"+day;
}
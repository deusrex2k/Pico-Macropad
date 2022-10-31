#include <string.h>

class File{
private:
    char* file;

public:
    File(String filename){
        
    }

    int parseInt(){
        return 1;
    }

    void close(){}

    String readStringUntil(char delim){
        return "";
    }

    int length(){return strlen(file);}
};


class Little_FS{
    public:
    bool begin(){
        return 1;
    }

    File open(String filename,const char readwrite[]){
        return File(filename);
    }

    bool exists (String filename){return 1;}


};

Little_FS LittleFS;
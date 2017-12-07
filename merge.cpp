#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;
int main () {
    string line;
    int count = 0;
    
    typedef map<string, int> line_record;
    line_record lines;
    int line_number = 1;
    
    ifstream myfile ("/Users/swe_mini/Desktop/a.txt");

        ofstream newfile;
        newfile.open ("/Users/swe_mini/Desktop/merge.txt");
    
    if (myfile.is_open())
        
    {
        while(getline(myfile, line)){
                    line_record::iterator existing = lines.find(line);

                    if(existing != lines.end())
                    {
                        existing->second = (-1);
                     
                    }
                    else
                    {
                        lines.insert(make_pair(line,line_number));
                        ++line_number;
                        
                        newfile<<line<<endl;
                        cout<<line<<endl;
                       
                        count++;
                    }
        
                }
        
                cout << "its -- > "<<count <<" record"<< endl;
    
        myfile.close();
        newfile.close();
    }
    
    else cout << "Unable to open file";
    return 0;
    
}

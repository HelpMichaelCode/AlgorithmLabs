#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <queue>
#include "HuffeManTreeNode.h"
#include "HuffManTree.h"
#include "Compare.h"
using namespace std;

void writeToFile(string fileName, string content)
{
    ofstream myfile;
    myfile.open(fileName);
    myfile << content << endl;
    myfile.close();
}

// Code referenced from -> https://www.guru99.com/cpp-file-read-write-open.html
map<int,int> readFromFile(string fileName)
{
    fstream my_file;
    my_file.open(fileName);
    if (!my_file)
    {
        cout << "File not created!" << endl;
    }
    else
    {
        // Where the data of the file will be stored
        string data;

        // Code referenced from -> https://www.geeksforgeeks.org/getline-string-c/
        // function to read a text line
        getline(my_file, data);
        cout << data << endl;
      
        map<int, int> my_map = {};

        for (int i = 0; data[i]; i++)
        {
            if (my_map.find(data[i]) == my_map.end())
            {
                my_map.insert(make_pair(data[i], 1));
            }

            // Else update the frequency
            else
            {
                my_map[data[i]]++;
            }
        }

        cout << "KEY\tELEMENT\n";
        for (auto itr = my_map.begin(); itr != my_map.end(); itr++) {
            cout << itr->first << '\t' << itr->second << '\n';
        }
        my_file.close();
        return my_map;
    }
}
int main()
{
    writeToFile("test.txt", "Hello World");
    
    map<int, int> my_mapV2 = readFromFile("test.txt"); // returns a map

    priority_queue<HuffeManTreeNode*, vector<HuffeManTreeNode*>, Compare> queue;
    for (auto itr = my_mapV2.begin(); itr != my_mapV2.end(); itr++) {
        queue.push(new HuffeManTreeNode(itr->first, itr->second));
    }
    HuffManTree tree = HuffManTree(queue);

        
    return 0;
}



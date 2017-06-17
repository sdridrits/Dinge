#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int howManyLines(string &fileName) {
	int nLines = 0;
	int *p = &nLines;
	string line;
	ifstream file(fileName.c_str());
    if(file.is_open()){
        while(!file.eof()){
            getline(file,line);
            nLines++;
        }
        file.close();
    }
    return *p-1;
}

void what(string & fileName) {
	ifstream file(fileName.c_str());//READ:
	int x = 3; 
	int y = howManyLines(fileName);
	int data[x][y];
	for(int row = 0; row < y; row ++) {
		for(int col = 0; col < x-1; col++) {
			file >> data[col][row];
		}		
	}//------------------------------END READ.
	int numberOfUsers = 0;
	for(int i = 0; i < y; i++){
		if(data[0][i] > numberOfUsers)
			numberOfUsers = data[0][i];
	}
	int timeOn[numberOfUsers];
	int logged[numberOfUsers];
	for(int i = 0; i < numberOfUsers; i++) {
		logged[i] = -1;
		timeOn[i] = -1;
	}
	for(int i = 0; i < y; i++) {
		data[2][i] = 0;
	}
	int a = 0;
	for(int i = 1; i <= numberOfUsers; i++) {
		for (int j = 0; j < y; j++) {
			if(data[0][j] == i) {
				logged[i] = ++a;
				/*timeOn[i]*/data[2][i] += data[1][j];
				//cout<<data[2][i]<<endl; //debugger
			}
		}a=0;
	}
	
	ofstream fo("output.txt");
	for(int i = 1; i <= numberOfUsers; i++) {
		if(logged[i] < 0) continue;
		else fo << i << "\t" << logged[i] << "\t" << data[2][i] << endl;
	}fo.close();
	ofstream out("writeOut.txt");
	for(int i = 1; i <= numberOfUsers; i++) {
		if(logged[i] < 0) continue;
		else out << i << "\t" << data[2][i] << endl;
	}out.close();

	string toDelete = "output.txt";
	string *p = &toDelete;
	y = howManyLines(*p);
	ifstream temp("output.txt");
	int newData[x][y];
	for(int row = 0; row < y; row ++) {
		for(int col = 0; col < x; col++) {
			temp >> newData[col][row];
		}		
	}temp.close();
	remove("output.txt");
	int sessions = 0; //To find largest session
	int mostLoggedUser = 0;
	//If there is at least one number repeated then, do the following:
	for(int i = 0; i < y; i++) { 
		if (newData[1][i] > sessions){
			sessions = newData[1][i];
			mostLoggedUser = newData[0][i];
		}
	}cout << "Most logged user is: " << mostLoggedUser <<" with " << sessions <<" sessions.\n";
	sessions = 0;
	for(int i = 0; i < y; i++) { 
		if (newData[2][i] > sessions){
			sessions = newData[2][i];
			mostLoggedUser = newData[0][i];
		}
	}cout<<"User "<<mostLoggedUser<<" wasted the most time online: "<<sessions<<" sec."<<endl;
	cout<<"Generated writeOut file.\n";
}

int main(void) {
	string fileName;// = "tx.txt";
	cin>>fileName;
	string *p = &fileName;
	what(*p);
	return 0;
}






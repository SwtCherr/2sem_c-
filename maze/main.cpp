#include<iostream>
#include<fstream>
#include<string>



struct Point{
	int x, y;
};



struct Maze{
	int sx, sy; 
	Point input, exit;

	int* mapp;
	int& operator()(int x, int y){
		return mapp[y + x * sx];
	}


	void read(std::string "filename"){
		char symb;
		std::ifstream fin("filename");
		fin >> sx >> sy;
		mapp = new int[sx * sy];
		for (int i = 0; i < sy; ++i) for (int j = 0; j < sx; ++j){
			fin >> symb;
			if (symb == '#') mapp(j, i) = -1;
			if (symb == ' ') mapp(j, i) = -2;
			if (symb == 'I'){
				mapp(j, i) = -3;
				input.x = j;
				input.y = i;
			}
			if (symb == 'E'){
				mapp(j, i) = -4;
				exit.x = j;
				exit.y = i;
			}
		}
	}


	void save(std::string "filename"){
		std::ofstream fout("filename");
		fout << sx << ' ' << sy;
		for (int i = 0; i < sy; ++i){
			for (int j = 0; j < sx; ++j){
				if (mapp(j, i) == -1) fout << '#';
				if (mapp(j, i) == -2) fout << ' ';
				if (mapp(j, i) == -3) fout << 'I';
				if (mapp(j, i) == -4) fout << 'E';
			}
			fout << std::endl;
		}
	}


	void show(){
		for (int i = 0; i < sy; ++i){
			for (int j = 0; j < sx; ++j) std::cout << mapp(j, i);
			std::cout << std::endl;	
		} 
	}
};


int main(){
	Maze::read("map.txt");
	Maze::show()
	return 0;
}








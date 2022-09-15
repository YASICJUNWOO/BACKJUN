#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Vertex {
public:
	int data;
	int isVisited = 0;
	vector<Vertex*> nearV;

	Vertex(int data){
		this->data = data;
	}
	~Vertex(){}
};

class Grape {
public:
	vector<Vertex*> vertex_list;
	int ConnectedComponent = 0;

	Grape() {}
	~Grape() {}

	//정점 찾아주는 함수
	Vertex* findV(int idx) {
		for (int i = 0; i < vertex_list.size(); i++) {
			if (vertex_list[i]->data == idx)
				return vertex_list[i];
		}
	}

	int checkConnectedComponent() {
		

		for (int i = 0; i < vertex_list.size(); i++) {

			//아직 탐색하지 않은 정점일 때
			if (vertex_list[i]->isVisited == 0)
			{
				//정점 찾고 정보 업데이트후 스택에 저장
				Vertex* root = findV(i+1);
				root->isVisited = 1;
				ConnectedComponent++;

				dfs(root);
			}
		}
		
		return ConnectedComponent;
	}

	void dfs(Vertex* root) {
		//스택 선언
		stack<Vertex*> stack;
		stack.push(root);

		//dfs 수행
		while (!stack.empty()) {
			Vertex* checkV = stack.top();
			stack.pop();

			for (int j = 0; j < checkV->nearV.size(); j++) {
				if (checkV->nearV[j]->isVisited == 0) {
					stack.push(checkV->nearV[j]);
					checkV->nearV[j]->isVisited = 1;
				}
			}
		}
	}
};

int main() {
	int v, e;
	cin >> v >> e;

	//그래프 생성
	Grape grape;

	//정점 저장
	for (int i = 1; i <= v; i++) {
		Vertex* vertex = new Vertex(i);
		grape.vertex_list.push_back(vertex);
	}

	//정점
	int input1, input2;

	//간선정보 입력받기
	for (int i = 0; i < e; i++) {
		cin >> input1 >> input2;
		Vertex* v1 = grape.findV(input1);
		Vertex* v2 = grape.findV(input2);
		v1->nearV.push_back(v2);
		v2->nearV.push_back(v1);
	}

	cout<< grape.checkConnectedComponent();
}
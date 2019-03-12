
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
using namespace std;

struct Node{
    int x,y,z;
    int cont;
};
char Map[35][35][35];
int visit[35][35][35];
int dir[6][3] = {{0,0,1},{0,0,-1},{0,1,0},{0,-1,0},{1,0,0},{-1,0,0}};
int l,r,c;
int x1,y1,z1;

void bfs(){
    queue <Node> Q;
    Node t;
    t.x = x1,t.y = y1,t.z = z1,t.cont = 0;
    visit[x1][y1][z1] = 1;
    Q.push(t);
    while(!Q.empty()){
        Node res = Q.front();
        Q.pop();

        int xx = res.x;
        int yy = res.y;
        int zz = res.z;
        int Cont = res.cont;

        if(Map[xx][yy][zz] == 'E'){     //目标位置且一定最短
            cout<<"Escaped in "<<Cont<<" minute(s)."<<endl;
            return ;
        }

        for(int i = 0;i < 6;i ++){      //每一步6个状态
            Node temp;
            int xi = temp.x = xx+dir[i][0];
            int yi = temp.y = yy+dir[i][1];
            int zi = temp.z = zz+dir[i][2];
            temp.cont = Cont+1;
            if(xi < 1 || xi > l || yi < 1 || yi > r || zi < 1 || zi > c)    continue;       //边界判断
            if(Map[xi][yi][zi] != '#' && !visit[xi][yi][zi]){
                visit[xi][yi][zi] = 1;
                Q.push(temp);
            }
        }
    }
    cout<<"Trapped!"<<endl;
}
int main()
{
    while(cin>>l>>r>>c){
        if(l == 0 && r == 0 && c == 0)  break;
        for(int i = 1;i <= l;i ++){
            for(int j = 1;j <= r;j ++){
                for(int k = 1;k <= c;k ++){
                    cin>>Map[i][j][k];
                    if(Map[i][j][k] == 'S')
                        x1 = i,y1 = j,z1 = k;
                }
            }
        }
        memset(visit,0,sizeof(visit));
        bfs();
    }
    return 0;
}



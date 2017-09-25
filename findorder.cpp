class Graph{
public:
    int v;
    list<int>* adj; //create a list of ptrs
    Graph(int v){     
        this->v = v;  
        adj = new list<int>[v];    // adj is an array of lists, v elements in total
    }
    void addedges(int src, int dest){
        adj[dest].push_back(src);    // for the destinations, push_back sources
    }
};
class Solution {
public:
    stack <int> st;
    vector<int> findOrder(int numCourses, vector<pair<int, int>>& prerequisites) {
        Graph g(numCourses);
        for(int i = 0; i < prerequisites.size(); ++i)
            g.addedges(prerequisites[i].first, prerequisites[i].second);
        vector<int> ans;
        if(!courseScheduleCheck(g))
            return ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
    
    bool courseScheduleCheck(Graph g){
        int v = g.v;
        vector<char> visit(v, 'w');
        for(int i = 0; i < v; ++i){
            if(visit[i] == 'w')
                if(isCycle(g, i, visit))
                    return false;
        }
        return true;
    }

    bool isCycle(Graph g, int i, vector<char>& visit){
        for(auto it = g.adj[i].begin(); it != g.adj[i].end(); ++it){
            if(visit[*it] == 'g') return true;
            else{
                if(visit[*it] != 'b'){
                    visit[*it] = 'g';
                    if(isCycle(g, *it, visit))
                        return true;
                }
            }
        }
        visit[i] = 'b';
        st.push(i);
        return false;
    }
};

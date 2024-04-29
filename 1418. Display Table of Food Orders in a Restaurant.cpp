class 1418_Display_Table_of_Food_Orders_in_a_Restaurant {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        map<pair<string , string> , int>food;
        set<int>tables;
        set<string>foodName;
        for(vector<string> order : orders){
            tables.insert(stoi(order[1]));
            foodName.insert(order[2]);
            pair<string , string>foodPair = {order[2] , order[1]};
            food[foodPair]++;
        }
        vector<vector<string>>answer;
        vector<string>header;
        header.push_back("Table");
        for(auto name : foodName){
            header.push_back(name);
        }
        answer.push_back(header);
        for(auto tableNumber : tables){
            vector<string>temp;
            temp.push_back(to_string(tableNumber));
            for(int i = 1 ; i < answer[0].size() ; i++){
                string name = answer[0][i];
                temp.push_back(to_string(food[{name , to_string(tableNumber)}]));
            }
            answer.push_back(temp);
        }
        return answer;
    }
};

class timeRequiredToBuy {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        int totalTime = 0;
        // 4 0 0 0 //
        while (tickets[k] > 0) {
            for (int i = 0; i < n and tickets[k] > 0; ++i) {
                int minTickets = min(tickets[i] , 1); // 1
                totalTime += minTickets; // 8
                tickets[i] -= minTickets; 
            }
        }
        return totalTime;
    }
};

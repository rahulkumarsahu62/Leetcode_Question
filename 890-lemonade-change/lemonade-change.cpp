class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;

        for(int i = 0; i < bills.size(); i++) {

            // Customer pays $5
            if(bills[i] == 5) {
                five++;
            }

            // Customer pays $10
            else if(bills[i] == 10) {
                if(five > 0) {
                    five--;
                    ten++;
                } else {
                    return false;
                }
            }

            // Customer pays $20
            else {

                // Prefer giving one 10 and one 5
                if(ten > 0 && five > 0) {
                    ten--;
                    five--;
                }

                // Otherwise give three 5s
                else if(five >= 3) {
                    five -= 3;
                }

                else {
                    return false;
                }
            }
        }

        return true;
    }
};
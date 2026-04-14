class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st; // use vector as stack

        for(int i = 0; i<asteroids.size(); i++){
            int a = asteroids[i];
        
         // check collision
        while (!st.empty() &&  st.back() > 0 && a <0){
            // case1: current is bigger -> remove stack top
            if(abs(st.back()) < abs(a)){
                st.pop_back();
            }
            // case2: both equal -> remove both 
            else if (abs(st.back()) == abs(a)){
                st.pop_back();
                a = 0; // mark current as destroyed
                break;
            }
            // case3: stack top bigger -> current destroyed
            else{
                a =0; // current destroyed
                break;
            }
        }
        // if current asteroid still alive, push it
        if ( a!= 0){
            st.push_back(a);
        }
    }
    return st;
    }
};
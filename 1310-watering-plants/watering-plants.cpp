class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int water =capacity;
        int step=0;
        for(int i=0; i<plants.size();i++){
        if(water<plants[i]){
            step+=2*i;
            water=capacity;
        }
        water-=plants[i];
        step++;
    }
    return step;
    }
};
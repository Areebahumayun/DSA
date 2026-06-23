/*1. Existence Check Pattern (HashSet)
Question: Contains Duplicate Sawal:
 Aapko ek integer array nums diya gaya hai. Agar koi bhi value array mein kam az kam do 
 dafa (duplicate) aayi hai toh true return karein, aur agar saare elements unique hain 
 toh false return karein.

Basic Approach: Ek khali unordered_set banayein. Array ke har number par loop chalayein. 
Agar number pehle se set mein maujood hai (find() != end()), toh iska matlab duplicate mil
 gaya, foran true return kar dein. Agar nahi hai, toh use set mein insert kar dein. Agar 
 loop khatam ho jaye aur kuch na mile, toh false return karein.*/





class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.find(num) != seen.end()) {
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};
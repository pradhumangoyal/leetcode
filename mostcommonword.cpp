class Solution {
    
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        string ans, temp;
        map<string, int> pr;
    map<string, bool> ban;
        int max = INT_MIN, i = 0;
        //tolower(banned[0]);
        for(int i = 0; i < banned.size(); ++i) {
            ban[banned[i]] = true;
            
        }
        i = 0;
        while(i < paragraph.length()){
            temp = "";
            while((paragraph[i] >= 'a' && paragraph[i] <= 'z') || (paragraph[i] >= 'A' && paragraph[i] <= 'Z')) {
            paragraph[i] = tolower(paragraph[i]);
                temp += paragraph[i++];
                
            }
            if (temp == ""){
                ++i;
                continue;
            }
            
            bool id = ban[temp];
           // cout << id << " " << temp << endl;
            if(!id){
                pr[temp]++;
               // cout << temp << " "<< max << " " << pr[temp] << endl;
                if (max < pr[temp]) {
                    max = pr[temp];
                    ans = temp;
                }
            }
            i++;
        }
    return ans;
    }
    
};
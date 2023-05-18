class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> stu ;
        for(int i=0 ;i<students.size() ;i++){
            stu.push(students[i]) ;
        }
        int j=0, y=0;
        while(stu.size()!=0 && y<stu.size() ){
            if(stu.front()==sandwiches[j]){
                stu.pop() ;
                j++ ;
                y=0 ;
            }
            else{
                int k=stu.front() ;
                stu.push(k) ;
                stu.pop() ;
                
                y++ ;
            }
        }
        return stu.size() ;


    }
};
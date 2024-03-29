/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        
        Employee * emp;
        for (int i = 0; i < employees.size(); ++i) {
            if (employees[i] -> id == id) {
                emp = employees[i];
                break;
            }
        }
        int sum = emp ->importance ;
        for (int i = 0; i <(emp->subordinates).size(); ++i) {
            sum += getImportance(employees,(emp->subordinates)[i] );
        }
        return sum;
    }
};
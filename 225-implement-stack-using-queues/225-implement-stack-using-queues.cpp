class MyStack {
    queue<int> q1, q2;

public:
    MyStack() {
    }
    
    void push(int x) {
        if(q1.empty() && q2.empty()) {
            q1.push(x);
        } else if(q1.empty()) {
             q2.push(x);
         } else {
             q1.push(x);
         }    
    }
    
    int pop() {
        int poped_element = -1;
        if(q1.empty()) {
         bool isLast = false; 
         while(!q2.empty()) { 
             int data = q2.front();
             q2.pop();
             
             if(q2.empty()) {
                 isLast = true;
                 poped_element = data;
             }
             
             if(isLast == false) {
                 q1.push(data);
             }
         }
            
        } else {
         bool isLast = false; 
         while(!q1.empty()) { 
             int data = q1.front();
             q1.pop();
             
             if(q1.empty()) {
                 isLast = true;
                 poped_element = data;
             }
             
             if(isLast == false) {
                 q2.push(data);
             }
         }    
    }
return poped_element;        
}
    
    int top() {
        if(q1.empty()) return q2.back();
        return q1.back();
    }
    
    bool empty() {
        return q1.empty() && q2.empty();
    }
};
/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
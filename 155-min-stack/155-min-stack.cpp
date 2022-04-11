class MinStack {
public:
    stack<long> dist;
    long min_s;
    MinStack() : min_s(0) {}
    
    void push(int val) {
        if (dist.empty()) {
            min_s = val;
            dist.push(0);
        } else {
            long diff = val - min_s;
            dist.push(diff);
            min_s = diff > 0 ? min_s : val;
        }
    }
    
    void pop() {
        if (!dist.empty()) {
            long diff = dist.top();
            dist.pop();
            min_s = diff > 0 ? min_s : min_s - diff;
        }
    }
    
    int top() {
        if (dist.empty()) {
            return -1;
        } else {
            long diff = dist.top();
            if (diff > 0) {
                return (diff + min_s);
            } else {
                return min_s;
            }
        }
    }
    
    int getMin() {
        if (dist.empty()) {
            return -1;
        } else {
            return min_s;
        }
    }
};
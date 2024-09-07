class MedianFinder {
    priority_queue<int> maxheap;
    priority_queue<int, vector<int>, greater<int>> minheap;
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(maxheap.empty() or maxheap.top()>=num) maxheap.push(num);
        else minheap.push(num);

        if(maxheap.size() > 1 + minheap.size()){
            minheap.push(maxheap.top());
            maxheap.pop();
        } else if(maxheap.size() < minheap.size()){
            maxheap.push(minheap.top());
            minheap.pop();
        }
    }
    
    double findMedian() {
        if(maxheap.size()==minheap.size()){
            return (maxheap.top()/2.0+minheap.top()/2.0);
        }
        return maxheap.top();
    }
};
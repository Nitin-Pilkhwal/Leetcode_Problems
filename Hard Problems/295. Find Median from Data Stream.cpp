#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int signum(int x,int y) {
    return (x > y) ? 1 : ((x < y) ? -1 : 0);
}
double avg(double a,double b){
	return (a+b)/2;
}
class MedianFinder {
    priority_queue<double> left;
	priority_queue<double,vector<double>,greater<double>> right;
	// vector<double> ans;
    double median;
public:
    MedianFinder() {
        median = 0.0;
    }
    
    void addNum(int ele) {
        switch(signum(left.size(), right.size())){
		case 0:
			if(ele>median){
				right.push(ele);
				median = right.top();
			}
			else{
				left.push(ele);
				median = left.top();
			}
			break;
		case 1:
			if(ele>median){
				right.push(ele);
				median = avg(right.top(),left.top());
			}
			else{
				right.push(left.top());
				left.pop();
				left.push(ele);
				median = avg(right.top(),left.top());;
			}
			break;
		case -1:
			if(ele>median){
				left.push(right.top());
				right.pop();
				right.push(ele);
				median = avg(right.top(),left.top());
			}
			else{
				left.push(ele);
				median = avg(right.top(),left.top());
			}
			break;
	    }
    }
    
    double findMedian() {
        return median;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
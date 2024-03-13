#include <iostream>
#include <vector>
using namespace std;
struct Interval {
    int start, end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};
vector<Interval> insertInterval(vector<Interval>& intervals, Interval newInterval) {
    vector<Interval> result;
    int i = 0;
    while (i < intervals.size() && intervals[i].end < newInterval.start) {
        result.push_back(intervals[i]);
        i++;
    }
    while (i < intervals.size() && intervals[i].start <= newInterval.end) {
        newInterval.start = min(newInterval.start, intervals[i].start);
        newInterval.end = max(newInterval.end, intervals[i].end);
        i++;
    }
    result.push_back(newInterval);
    while (i < intervals.size()) {
        result.push_back(intervals[i]);
        i++;
    }
    return result;
}
int main() {
    vector<Interval> intervals;
    intervals.push_back(Interval(1, 3));
    intervals.push_back(Interval(6, 9));    
    Interval newInterval(2, 5);
    vector<Interval> mergedIntervals = insertInterval(intervals, newInterval);
    cout << "Merged Intervals: ";
    for (size_t i = 0; i < mergedIntervals.size(); ++i) {
        cout << "[" << mergedIntervals[i].start << "," << mergedIntervals[i].end << "] ";
    }
    cout << endl;
    return 0;
}


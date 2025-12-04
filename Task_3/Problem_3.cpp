class Solution {
  public:
	  queue<int> reverseFirstK(queue<int> q, int k) {
		  if (q.size() < k) return q;
		  stack<int> s;
		  queue<int> q2;
		  for (int i = 0; i < k; i++)
		  {
			  s.push(q.front());
			  q.pop();
		  }
		  for (int i = 0; i < k; i++)
		  {
			  q2.push(s.top());
			  s.pop();
		  }
		  while (!q.empty())
		  {
			  q2.push(q.front());
			  q.pop();
		  }
		  return q2;
	  }
};
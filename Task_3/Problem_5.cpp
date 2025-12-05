class Solution {
public:
	int countStudents(vector<int>& students, vector<int>& sandwiches)
	{
		stack <char> s;
		queue <char> q;
		for (int i = 0; i < students.size(); i++)
		{
			q.push(students[i]);
		}
		for (int i = sandwiches.size() - 1; i >= 0; i--)
		{
			s.push(sandwiches[i]);
		}

		int k = q.size();

		for (int i = 0;i < k;i++)
		{
			if (q.front() == s.top())
			{
				q.pop();
				s.pop();
			}
			else
			{
				q.push(q.front());
				q.pop();
			}
			if ((i == (k - 1)) && (k != q.size()))
			{
				i = -1;
				k = q.size();
			}
		}
		return q.size();
	}
};

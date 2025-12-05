class Solution
{
public:

	int timeRequiredToBuy(vector<int>& tickets, int k)
	{
		k = tickets[k];
		int n = tickets.size(), time = 0;
		queue<int> q;
		for (int i = 0; i < n; ++i)
		{
			q.push(tickets[i]);
		}
		while (k--)
		{
			n = q.size();
			while (n--)
			{
				time++;
				if (q.front() > 1)  q.push(q.front() - 1);
				q.pop();
			}
		}
		return time;
	}
};
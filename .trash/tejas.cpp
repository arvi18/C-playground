int prices[INT_MAX];
long minimum = prices[0];
long ans = prices[0];

for(int i=1; i<prices.size(); i++)	{
	minimum = min(minimum, prices[i-1]);
	int price = A[i]-minimum;
	if(price < 0)
		continue;
	else
		ans += price;
}

return ans;
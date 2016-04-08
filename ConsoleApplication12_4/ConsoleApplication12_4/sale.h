namespace SALES
{
	class sales
	{
	private:
		static const int QUARTERS = 4;
		struct Sales
		{
			double sales[QUARTERS];
			double average;
			double max;
			double min;
		}shell;
	public:
		sales();
		sales(const double ar[], int n);
		~sales();
		void setSales();
		void showSales() const;
	};
}
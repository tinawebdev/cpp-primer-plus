namespace SALES {
  const int QUARTERS = 4;

  class Sales
  {
    private:
      double sales[QUARTERS];
      double average;
      double max;
      double min;
      double total;
    public:
      Sales();
      void showSales();
  };
}

class Order
{
  private:
    char orderID[10];
    char orderStatus[20];
    OrderDetails *oDetails[SIZE];

  public:
    Order();
    Order (char porderID[10]);
    ~Order();

}

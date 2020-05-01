package classPractise;

public class questionC {
    int quantity;
    String companyName;
    String productName;


    private int orderNo;

    static int productID;

    questionC(String a,String b)
    {
        companyName =a;
        productName=b;
    }
    static void showProductID()
    {
        productID =101112;
        System.out.println("call from static type");
        System.out.println(productID);
    }


    questionC(String x,int y)
    {
        this.productName =x;
        this.orderNo = y;
        setOrder();
    }
    private void setOrder()
    {
        System.out.println("private method");
        System.out.println("productName ="+productName);
        System.out.println("Order ID = "+orderNo);
    }


    questionC(String x,int y,int z)
    {
        this.productName =x;
        this.orderNo = y;
        quantity = z;


    }
    void fullOrderDetails(){
        System.out.println("Product NAme ="+ productName);
        System.out.println("Order queue ="+ orderNo);
        System.out.println("Amount ="+ quantity);

    }
}

package employee;

public class emp {
    public String name;
    public int empid;
    public String category;
    public double basic_pay, hra, da, pf, income_tax, gross_pay, net_pay;

    public void calculate() {
        hra = basic_pay * 0.10;
        da = basic_pay * 0.05;
        pf = basic_pay * 0.12;
        gross_pay = basic_pay + hra + da;
        income_tax = gross_pay * 0.10;
        net_pay = gross_pay - (pf + income_tax);
    }
}


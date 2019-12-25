
#ifndef SALES_ITEM_H
#define SALES_ITEM_H
#include <string>
#include <iostream>

using namespace std;

class Sales_item
{
private:
	std::string bookname;
	int booknumber;
	double bookprice;
	double amount;

public:
	Sales_item():bookname(), booknumber(0), bookprice(0), amount(0) {}
	Sales_item(const std::string& book) :bookname(book), booknumber(0), bookprice(0), amount(0) {}
	Sales_item(string bookname1, int booknumber1, double bookprice1):bookname(bookname1), booknumber(booknumber1), bookprice(bookprice1), amount(0) {}
	Sales_item(std::istream& is) { is >> *this; }
	Sales_item(const Sales_item& si) :bookname(si.bookname), booknumber(si.booknumber), bookprice(si.bookprice), amount(si.amount) {}
	~Sales_item() {}
	friend inline istream& operator >> (istream& is, Sales_item& t);
	friend inline ostream& operator << (ostream& os, Sales_item& t1);
	friend bool operator == (const Sales_item&, const Sales_item&);
	Sales_item operator+(const Sales_item&);
	double avg_price() const;
	bool same_isbn(const Sales_item& rhs) const
	{
		return bookname == rhs.bookname;
	}
};

istream& operator >> (istream& is, Sales_item& t) 
{
	cin >> t.bookname;
	cin >> t.booknumber;
	cin >> t.bookprice;

	return is;
}

ostream& operator << (ostream& os, Sales_item& t)
{
	std::cout << t.bookname;
	std::cout << t.booknumber;
	std::cout << t.bookprice;

	return os;
}

inline bool operator == (const Sales_item& lhs, const Sales_item& rhs)
{
	return lhs.bookprice == rhs.bookprice && lhs.bookname == rhs.bookname
		&& lhs.booknumber == rhs.booknumber;
}

inline Sales_item operator + (Sales_item &si1)
{
	Sales_item si2;
	//si1.bookprice = bookprice + si2.bookprice;

	return si2;
}

inline double Sales_item::avg_price() const 
{
	if (bookprice)
	{
		return amount / booknumber;
	}
	else
	{
		return 0;
	}
}
#endif // !1



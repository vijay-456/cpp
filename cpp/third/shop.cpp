#include "shop.h"

shop::shop()
{
	this->shop_id = 0;
	this->shop_name = "";
}

shop::shop(int id, string name)
{
	this->shop_id = id;
	this->shop_name = name;
}

void shop::get_shop_details()
{
	cout<<"SHOP_ID   :"<<shop_id<<endl;
	cout<<"SHOP_NAME :"<<shop_name<<endl;
}

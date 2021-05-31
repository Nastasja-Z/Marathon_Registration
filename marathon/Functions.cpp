#include "Functions.h"

void Functions::connectToDb()
{
	//Data Source=DESKTOP-3BLLGNS\SQLEXPRESS;Initial Catalog=marathon;Integrated Security=True
	connStrBuilder = gcnew SqlConnectionStringBuilder();
	connStrBuilder->DataSource = "DESKTOP-3BLLGNS\\SQLEXPRESS";
	connStrBuilder->InitialCatalog = "marathon";
	connStrBuilder->IntegratedSecurity = true;

	connection = gcnew SqlConnection(Convert::ToString(connStrBuilder));
}

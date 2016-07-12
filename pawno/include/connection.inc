#define mysql_host "localhost"
#define mysql_user "root"
#define mysql_password ""
#define mysql_database "w3op"

new handle;
new rows, fields;
new temp[256];

forward MySQLConnect();

public MySQLConnect()
{
	handle = mysql_connect(mysql_host, mysql_user, mysql_database, mysql_password);

	if(handle && mysql_errno(handle) == 0)
	{
		printf("[MYSQL]: Connection to database (%s) was established!", mysql_database);
	}
	else
	{
		printf("[MYSQL]: Connection to database (%s) failed!", mysql_database);
		SendRconCommand("exit");
	}

	return 1;
}
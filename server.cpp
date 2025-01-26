#include <iostream>
#include "httplib.h"

using namespace httplib;
using namespace std;

int main() {
	Server svr;
	svr.Put("/data", [](const Request& req, Response& res) {
			cout << "Data diri: " << req.body << endl;
			res.set_content("Selamat!, anda berhasil didaftarkan ke program \"BAGI-BAGI DUIT 10.000.000\"!", "text/plain");
			});
	cout << "Menunggu manusia..." << endl;
	svr.listen("127.0.0.1", 8080);
	return 0;
}

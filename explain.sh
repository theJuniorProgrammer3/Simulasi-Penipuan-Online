if [ -z "$(pidof *server*)" ]; then
	echo "Jalankan ./server terlebih dahulu di sesi lain."
	exit 1
fi
echo "Penyerang mengirim sesuatu yang mencurigakan..."
sleep 3
echo "Penerima (korban) membuka itu."
./bagibagiDuit <<EOF
Budi
Laki-laki
Jakarta Pusat, Jalan Pegangsaan.
Budi12345
Bud1g@nt3ng
08123456789
EOF
echo "Korban memasukkan data diri (seperti diatas), data dikirim ke penyerang, dan penyerang akan mengetahui data pribadi korban!!!"
sleep 3
echo "Tidak percaya?, coba pindah ke sesi dimana server dijalanlan!"
exit 0

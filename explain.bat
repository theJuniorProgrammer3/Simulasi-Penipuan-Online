@echo off
setlocal enabledelayedexpansion

:: Memeriksa apakah proses server sedang berjalan
tasklist /FI "IMAGENAME eq server.exe" 2>NUL | find /I /N "server.exe">NUL
if "%ERRORLEVEL%"=="1" (
    echo Jalankan ./server terlebih dahulu di sesi lain.
    exit /B 1
)

echo Penyerang mengirim sesuatu yang mencurigakan...
timeout /t 3 /nobreak > NUL

echo Penerima (korban) membuka itu.
echo Budi
echo Laki-laki
echo Jakarta Pusat, Jalan Pegangsaan.
echo Budi12345
echo Bud1g@nt3ng
echo 08123456789 | ./bagibagiDuit

echo Korban memasukkan data diri (seperti diatas), data dikirim ke penyerang, dan penyerang akan mengetahui data pribadi korban!!!
timeout /t 3 /nobreak > NUL

echo Tidak percaya?, coba pindah ke sesi dimana server dijalanlan!
exit /B 0

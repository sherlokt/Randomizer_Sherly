# Randomizer_Sherly

- Fungsi `randomize()` digunakan untuk menghasilkan sebuah angka acak yang diinginkan.
  Menggunakan fungsi `clock_gettime` untuk mendapatkan waktu saat ini dari `CLOCK_MONOTONIC` dan disimpan dalam sebuah struct yang diberi nama `x`.
  Kemudian fungsi akan mengembalikan sebuah integer yang merupakan hasil modulo dari `tv_sec` (nilainya didapat dari variabel p) dengan 6 dan + 1 agar dimulai dari 1 (tidak 0).
- Fungsi `main()` memiliki variabel r yang memanggil fungsi `randomize()` dan mencetak angka random yang didapat dari fungsi `randomize()` 

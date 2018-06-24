# os181-1

## Collaborators:
Ivana Irene Thomas (Ketua)

Anisha Inas Izdihar (Wakil Ketua 1)

Nixi Sendya Putri (Wakil Ketua 2)

Raihan Mahendra Sutanto (Wakil Ketua 3)

Muhammad Iqbal Mahendra (Wakil Ketua 4) - mahenbal

Zhelia Alifa (Wakil Ketua 5)

Shavira Adeva (Wakil Ketua 6)

Thrisnadevany Amalia (Wakil Ketua 7)

Michael Giorgio Wirawan (Wakil Ketua 8)

M Ikhsan Kurniawan (Wakil Ketua 9)

Stefan Mayer Sianturi (Wakil Ketua 11)

Muhammad Hanif Pratama (Wakil Ketua 12) - hanifalc

Muhammad Afkar (Wakil Ketua 13)

Ibnu Sofian Firdaus (Wakil Ketua 15)

Rizki Leonardo (Wakil Ketua 16)

## Demo Descriptions and Related OS Materials

#### Demo W00
**Demo Description**: Try running makefile on Badak server
(Makefile consists of commands to compile the C program, and remove the executable file (clean))

**Related OS Material**: A little introduction to C language and scripting

#### Demo W01
notes by Rizki Leonardo: di wsl, jika program tidak berjalan karena command "\r", ada 3 opsi solusi untuk memecahkan permasalahan ini: (pilih salah satu saja)

**opsi 1: dos2unix**

a. masukkan command "sudo apt-get install dos2unix"

b. masukkan command "dos2unix [file]" untuk setiap [file]

c. jalankan seperti biasa, yaitu "bash [file]"

**opsi 2: mengganti semua error dari "\r"**

masukkan command "sed -i.bak 's/\r$//' [file]

**opsi 3: git essential**

masukan perintah sudo apt-get update, lalu sudo apt-get install build-essential, lalu sudo apt-get install git-core, lalu sudo apt upgrade.

jika masih tidak berjalan, coba restart untuk update** (bisa berkali-kali restart)
#### Demo W02
#### Demo W03
#### Demo W04
#### Demo W05
#### Demo W06
#### Demo W07
#### Demo W08
#### Demo W09
#### Demo W10

## Tips and Trick in Operating System Course
1. You need to know every single line in demos given. (by Muhammad Hanif Pratama)
2. Make sure you wrote question and answers based on the test in the past in your notes (by Muhammad Hanif Pratama)
3. Pelajari buku Operating System Concept (9th edition) yang berkaitan tentang materi yang akan dibahas pada minggu tersebut (by Muhammad Iqbal Mahendra)   
4. Membaca PPT dan mencoba demo untuk materi yang akan dibahas lalu tanyakan hal-hal yang tidak dimengerti di kelas (by Shavira Adeva)
5. Mencoba dan memahami setiap demo perminggunya, agar dapat menyiapkan kelas di minggu selanjutnya (by Zhelia Alifa)
6. Try to understand the past exams and dont hesitate to ask what you want to know when in class or outside the class (Thrisnadevany Amalia)
7. Aktif dalam menjawab pertanyaan maupun bertanya dalam kelas untuk nilai partisipasi yang tinggi (by Nixi Sendya Putri)
8. Jangan malu untuk bertanya pada dosen maupun teman yang sudah paham, karena akan sulit jika tidak mengerti (by Muhammad Afkar)
9. Untuk setiap minggunya, jangan lupa mengecek nilai pada siakng untuk mengetrack sudah sebanyak apa nilai didapatkan dan kurang berapa untuk mencapai target (by Muhammad Afkar)
10. Usahakan datang 10 menit sebelum kelas dimulai agar tidak terlambat masuk kelas (by Muhammad Iqbal Mahendra)
11. Setelah mempelajari Buku, PPT, maupun demo sebelum kuliah dimulai, catat hal-hal yang penting dan perlu diingat di memo pada Week terkait untuk membantu memahami dan membantu menjawab soal saat UTS atau UAS (by Michael Giorgio Wirawan)
12. Belajar bersama teman dalam persiapan untuk uts dan uas agar bisa lebih memahami konsep dengan baik. (by M Ikhsan Kurniawan)
13. Kerjakan tugas-tugas yang diminta oleh dosen segera agar tidak terlupa dan kehilangan poin nilai yang berharga (by Rizki Leonardo)
14. untuk memahami demo lebih baik, bisa dengan mencobanya dan ber eksperimen dari demo tersebut sehingga ilmu yang didapat semakin banyak. (by shavira adeva)

## What we learn from running demos on WSL/Ubuntu Container

### Ubuntu Container

### Cara menggunakan Ubuntu Container pada server Cloud Kilat

1. Login ke server dengan command `ssh username@ckilat2.vlsm.org`
2. Update ubuntu container dengan command `sudo apt-get update`
3. Install build-essentials dengan command `sudo apt-get install build-essentials`
4. Install git `sudo apt-get install git-core`
5. Clone repository ini lalu jalankan demo seperti biasa

### WSL

#### Cara menggunakan WSL

**0. Pastikan Windows 10 64-bit anda sudah terupdate** minimal hingga versi 1607 (bisa dicek pada: Start Menu -> Settings -> System -> About)

**1. Aktifkan Windows Subsystem for Linux di Windows 10** dengan cara masuk ke menu **Turn Windows Features on or off** (ketik di search box keywordnya), lalu cari **Windows Subsystem for Linux** di box yang muncul, lalu centang check-box nya, klik **OK** lalu biarkan Windows memprosesnya. 

**2. Menginstall Ubuntu** Buka Microsoft Store, lalu search Ubuntu, dan install sesuai distro yang diinginkan, contohnya **Ubuntu 18.04** klik Get

**3. Setup Ubuntu** buka Command Prompt, lalu ketikan perintah untuk menjalankan ubuntu (contohnya **ubuntu1804** tergantung distro yang diinstal), jika baru pertama kali dijalankan, ubuntu akan meminta untuk membuat username dan password, buat saja. Setelah itu masukan perintah **sudo apt-get update**, lalu **sudo apt-get install build-essential**, lalu **sudo apt-get install git-core**. Setelah itu kalian bisa menggunakan WSL untuk menjalankan demo-demo yang ada

**4. Mencoba Demo** untuk mencoba demo, clone repository ini, lalu pergi ke direktori demo yang ingin dicoba lalu silakan dicoba (gunakan perintah *bash nama-program* untuk menjalankan program)


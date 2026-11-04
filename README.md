# 🎓 TinHocCoSo2

> Luyện tập **Tin học cơ sở 2** trên [code.ptit.edu.vn](https://code.ptit.edu.vn) — Học viện Công nghệ Bưu chính Viễn thông (PTIT)

**Tác giả:** [HanhGrin](https://github.com/HanhGrin) · **Ngôn ngữ:** C / C++ · **Số bài:** 351 bài đã giải

---

## 📊 Thống kê

| Chỉ số | Giá trị |
|---|---|
| Tổng số bài | **351** |
| Biên dịch thành công (g++ / gcc, `-Wall`) | 283 ✅ |
| Biên dịch OK nhưng có warning (định dạng printf, gets…) | 66 ⚠️ |
| Lỗi biên dịch (giữ nguyên bản gốc) | 2 ❌ |

Bài được chia theo 2 nguồn:
- **Bài X.Y** (VD `2.13.cpp`) — đúng thứ tự **Bài tập Tin học cơ sở 2** (file PDF trong [`DeBai/`](DeBai)).
- **Mã đề judge** (VD `C04019.cpp`, `3031.cpp`) — các đề luyện tập trên code.ptit.edu.vn, phân loại theo nội dung (mảng, xâu, struct…).

## 🗂 Cấu trúc thư mục

```
TinHocCoSo2/
├── DeBai/                 # Đề bài gốc (2 file PDF chương 1-6)
├── 00_Co_Ban_Nhap_Xuat_Vong_Lap/
├── 01_Kieu_Du_Lieu_Va_Phep_Toan/
├── 02_Ham_Va_Chuong_Trinh_Con/
├── 03_Mang_Mot_Chieu/
├── 04_Mang_Hai_Chieu/
├── 05_Xau_Ky_Tu/
├── 06_Cau_Truc/
├── 07_De_Thi/
├── 08_Test_Misc/
├── README.md
├── HUONG_DAN_PUSH.md      # Hướng dẫn đưa code lên GitHub
├── LICENSE
└── .gitignore
```

- [00_Co_Ban_Nhap_Xuat_Vong_Lap](#00-co-ban-nhap-xuat-vong-lap) — Cơ bản: nhập xuất, kiểu dữ liệu, vòng lặp (77 bài)
- [01_Kieu_Du_Lieu_Va_Phep_Toan](#01-kieu-du-lieu-va-phep-toan) — Chương 1 – Kiểu dữ liệu và phép toán (46 bài)
- [02_Ham_Va_Chuong_Trinh_Con](#02-ham-va-chuong-trinh-con) — Chương 2 – Hàm và chương trình con (79 bài)
- [03_Mang_Mot_Chieu](#03-mang-mot-chieu) — Chương 3 – Mảng một chiều (71 bài)
- [04_Mang_Hai_Chieu](#04-mang-hai-chieu) — Chương 4 – Mảng hai chiều (32 bài)
- [05_Xau_Ky_Tu](#05-xau-ky-tu) — Chương 5 – Xâu ký tự (16 bài)
- [06_Cau_Truc](#06-cau-truc) — Chương 6 – Cấu trúc (struct) (11 bài)
- [07_De_Thi](#07-de-thi) — Đề thi giữa kỳ / đề PR (9 bài)
- [08_Test_Misc](#08-test-misc) — Bài thử nghiệm, thực hành tự do (10 bài)

## ⚙️ Biên dịch & chạy

Mỗi file là 1 chương trình độc lập, đọc dữ liệu từ **stdin** và in kết quả ra **stdout** (đúng định dạng judge):

```bash
# File .cpp
g++ -std=c++17 -O2 -Wall -o bai 03_Mang_Mot_Chieu/3.13.cpp
./bai

# File .c (C thuần)
gcc -std=c17 -O2 -Wall -o bai 01_Kieu_Du_Lieu_Va_Phep_Toan/b15.c
./bai
```

Hoặc chạy trực tiếp với input có sẵn:

```bash
g++ -std=c++17 -O2 -o bai 02_Ham_Va_Chuong_Trinh_Con/2.13.cpp
echo "3" | ./bai
```

## 📚 Danh mục bài tập


### 00_Co_Ban_Nhap_Xuat_Vong_Lap

**Cơ bản: nhập xuất, kiểu dữ liệu, vòng lặp** — 77 bài

| Bài | Mô tả |
|---|---|
| [`1.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/1.cpp) | Bài tập thực hành |
| [`2.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/2.cpp) | Bài tập thực hành |
| [`3.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/3.cpp) | Bài tập thực hành |
| [`4.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/4.cpp) | Bài tập thực hành |
| [`5.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/5.cpp) | Bài tập thực hành |
| [`6.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/6.cpp) | Bài tập thực hành |
| [`7.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/7.cpp) | Bài tập thực hành |
| [`9.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/9.cpp) | Bài tập thực hành |
| [`10.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/10.cpp) | Bài tập thực hành |
| [`11.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/11.cpp) | Bài tập thực hành |
| [`12.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/12.cpp) | Bài tập thực hành |
| [`13.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/13.cpp) | Bài tập thực hành |
| [`14.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/14.cpp) | Bài tập thực hành |
| [`15.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/15.cpp) | Bài tập thực hành |
| [`16.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/16.cpp) | Bài tập thực hành |
| [`18.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/18.cpp) | Bài tập thực hành |
| [`21.c`](00_Co_Ban_Nhap_Xuat_Vong_Lap/21.c) | Bài tập thực hành |
| [`21.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/21.cpp) | Bài tập thực hành |
| [`22.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/22.cpp) | Bài tập thực hành |
| [`23.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/23.cpp) | Bài tập thực hành |
| [`24.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/24.cpp) | Bài tập thực hành |
| [`25.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/25.cpp) | Bài tập thực hành |
| [`27.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/27.cpp) | Bài tập thực hành |
| [`30.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/30.cpp) | Bài tập thực hành |
| [`34.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/34.cpp) | Bài tập thực hành |
| [`36.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/36.cpp) | Bài tập thực hành |
| [`37.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/37.cpp) | Bài tập thực hành |
| [`38.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/38.cpp) | Bài tập thực hành |
| [`39.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/39.cpp) | Bài tập thực hành |
| [`40.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/40.cpp) | Bài tập thực hành |
| [`42.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/42.cpp) | Bài tập thực hành |
| [`43.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/43.cpp) | Bài tập thực hành |
| [`1011.c`](00_Co_Ban_Nhap_Xuat_Vong_Lap/1011.c) | Bài 1011 (code.ptit.edu.vn) |
| [`01031.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/01031.cpp) | Bài 01031 (code.ptit.edu.vn) |
| [`1045.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/1045.cpp) | Bài 1045 (code.ptit.edu.vn) |
| [`1048.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/1048.cpp) | Bài 1048 (code.ptit.edu.vn) |
| [`1049.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/1049.cpp) | Bài 1049 (code.ptit.edu.vn) |
| [`1050.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/1050.cpp) | Bài 1050 (code.ptit.edu.vn) |
| [`1052.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/1052.cpp) | Bài 1052 (code.ptit.edu.vn) |
| [`1056.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/1056.cpp) | Bài 1056 (code.ptit.edu.vn) |
| [`2001.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/2001.cpp) | Bài 2001 (code.ptit.edu.vn) |
| [`2002.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/2002.cpp) | Bài 2002 (code.ptit.edu.vn) |
| [`2003.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/2003.cpp) | Bài 2003 (code.ptit.edu.vn) |
| [`2004.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/2004.cpp) | Bài 2004 (code.ptit.edu.vn) |
| [`2005.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/2005.cpp) | Bài 2005 (code.ptit.edu.vn) |
| [`2006.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/2006.cpp) | Bài 2006 (code.ptit.edu.vn) |
| [`2007.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/2007.cpp) | Bài 2007 (code.ptit.edu.vn) |
| [`2008.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/2008.cpp) | Bài 2008 (code.ptit.edu.vn) |
| [`2009.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/2009.cpp) | Bài 2009 (code.ptit.edu.vn) |
| [`2010.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/2010.cpp) | Bài 2010 (code.ptit.edu.vn) |
| [`2011.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/2011.cpp) | Bài 2011 (code.ptit.edu.vn) |
| [`2012.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/2012.cpp) | Bài 2012 (code.ptit.edu.vn) |
| [`2013.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/2013.cpp) | Bài 2013 (code.ptit.edu.vn) |
| [`2014.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/2014.cpp) | Bài 2014 (code.ptit.edu.vn) |
| [`2024.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/2024.cpp) | Bài 2024 (code.ptit.edu.vn) |
| [`2025.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/2025.cpp) | Bài 2025 (code.ptit.edu.vn) |
| [`2026.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/2026.cpp) | Bài 2026 (code.ptit.edu.vn) |
| [`2028.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/2028.cpp) | Bài 2028 (code.ptit.edu.vn) |
| [`2031.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/2031.cpp) | Bài 2031 (code.ptit.edu.vn) |
| [`C01032.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/C01032.cpp) | Bài C01032 (code.ptit.edu.vn) |
| [`C01054.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/C01054.cpp) | Bài C01054 (code.ptit.edu.vn) |
| [`C01065.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/C01065.cpp) | Bài C01065 (code.ptit.edu.vn) |
| [`C02014.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/C02014.cpp) | Bài C02014 (code.ptit.edu.vn) |
| [`C02015.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/C02015.cpp) | Bài C02015 (code.ptit.edu.vn) |
| [`C02016.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/C02016.cpp) | Bài C02016 (code.ptit.edu.vn) |
| [`C02017.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/C02017.cpp) | Bài C02017 (code.ptit.edu.vn) |
| [`C02018.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/C02018.cpp) | Bài C02018 (code.ptit.edu.vn) |
| [`C02019.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/C02019.cpp) | Bài C02019 (code.ptit.edu.vn) |
| [`C02020.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/C02020.cpp) | Bài C02020 (code.ptit.edu.vn) |
| [`C02021.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/C02021.cpp) | Bài C02021 (code.ptit.edu.vn) |
| [`C02022.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/C02022.cpp) | Bài C02022 (code.ptit.edu.vn) |
| [`C02027.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/C02027.cpp) | Bài C02027 (code.ptit.edu.vn) |
| [`C02029.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/C02029.cpp) | Bài C02029 (code.ptit.edu.vn) |
| [`C02030.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/C02030.cpp) | Bài C02030 (code.ptit.edu.vn) |
| [`CHELLO.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/CHELLO.cpp) | Hello PTIT – bài chào mừng |
| [`FTP001.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/FTP001.cpp) | In hình ký tự (vòng lặp) |
| [`TEST-NHIPHAN.cpp`](00_Co_Ban_Nhap_Xuat_Vong_Lap/TEST-NHIPHAN.cpp) | Đổi số thập phân sang nhị phân |

### 01_Kieu_Du_Lieu_Va_Phep_Toan

**Chương 1 – Kiểu dữ liệu và phép toán** — 46 bài

| Bài | Mô tả |
|---|---|
| [`1.5.cpp`](01_Kieu_Du_Lieu_Va_Phep_Toan/1.5.cpp) | Bài 1.05 – PHƯƠNG TRÌNH BẬC NHẤT |
| [`1.6.cpp`](01_Kieu_Du_Lieu_Va_Phep_Toan/1.6.cpp) | Bài 1.06 – PHƯƠNG TRÌNH BẬC HAI |
| [`1.7_bang_cuu_chuong.cpp`](01_Kieu_Du_Lieu_Va_Phep_Toan/1.7_bang_cuu_chuong.cpp) | Bài 1.07 – BẢNG CỬU CHƯƠNG |
| [`1.8_chinh_phuong_hay_khong.cpp`](01_Kieu_Du_Lieu_Va_Phep_Toan/1.8_chinh_phuong_hay_khong.cpp) | Bài 1.08 – SỐ CHÍNH PHƯƠNG |
| [`1.9.cpp`](01_Kieu_Du_Lieu_Va_Phep_Toan/1.9.cpp) | Bài 1.09 – TỔNG CHỮ SỐ |
| [`1.10.cpp`](01_Kieu_Du_Lieu_Va_Phep_Toan/1.10.cpp) | Bài 1.10 – BẮT ĐẦU VÀ KẾT THÚC |
| [`1.11.cpp`](01_Kieu_Du_Lieu_Va_Phep_Toan/1.11.cpp) | Bài 1.11 – SỐ NGUYÊN TỐ |
| [`1.12.cpp`](01_Kieu_Du_Lieu_Va_Phep_Toan/1.12.cpp) | Bài 1.12 – ƯỚC SỐ CHUNG LỚN NHẤT |
| [`1.13.cpp`](01_Kieu_Du_Lieu_Va_Phep_Toan/1.13.cpp) | Bài 1.13 – PHÂN TÍCH THỪA SỐ NGUYÊN TỐ 1 |
| [`1.14.cpp`](01_Kieu_Du_Lieu_Va_Phep_Toan/1.14.cpp) | Bài 1.14 – TÍCH THỪA SỐ NGUYÊN TỐ |
| [`1.15.cpp`](01_Kieu_Du_Lieu_Va_Phep_Toan/1.15.cpp) | Bài 1.15 – LIỆT KÊ SỐ CHÍNH PHƯƠNG |
| [`1.16.cpp`](01_Kieu_Du_Lieu_Va_Phep_Toan/1.16.cpp) | Bài 1.16 – TÍCH CHỮ SỐ |
| [`1.17.cpp`](01_Kieu_Du_Lieu_Va_Phep_Toan/1.17.cpp) | Bài 1.17 – TÍNH TỔNG TRONG ĐOẠN |
| [`1.18.cpp`](01_Kieu_Du_Lieu_Va_Phep_Toan/1.18.cpp) | Bài 1.18 – SỐ HOÀN HẢO |
| [`1.19.cpp`](01_Kieu_Du_Lieu_Va_Phep_Toan/1.19.cpp) | Bài 1.19 – SỐ STRONG |
| [`1.20.cpp`](01_Kieu_Du_Lieu_Va_Phep_Toan/1.20.cpp) | Bài 1.20 – CHỮ SỐ ĐẦU CUỐI |
| [`1.21.cpp`](01_Kieu_Du_Lieu_Va_Phep_Toan/1.21.cpp) | Bài 1.21 – ƯỚC SỐ CHIA HẾT CHO 2 |
| [`1.22.cpp`](01_Kieu_Du_Lieu_Va_Phep_Toan/1.22.cpp) | Bài 1.22 – TỔNG ƯỚC SỐ |
| [`1.23.cpp`](01_Kieu_Du_Lieu_Va_Phep_Toan/1.23.cpp) | Bài 1.23 – SỐ KHÔNG GIẢM |
| [`1.24.cpp`](01_Kieu_Du_Lieu_Va_Phep_Toan/1.24.cpp) | Bài 1.24 – GHÉP HÌNH |
| [`1.25.cpp`](01_Kieu_Du_Lieu_Va_Phep_Toan/1.25.cpp) | Bài 1.25 – THAY ĐỔI ĐẦU CUỐI |
| [`b15.c`](01_Kieu_Du_Lieu_Va_Phep_Toan/b15.c) | Giải phương trình bậc hai ax² + bx + c = 0 |
| [`b16.c`](01_Kieu_Du_Lieu_Va_Phep_Toan/b16.c) | In bảng cửu chương của N |
| [`b17.c`](01_Kieu_Du_Lieu_Va_Phep_Toan/b17.c) | Bài 17 – xử lý dãy số |
| [`bac2.c`](01_Kieu_Du_Lieu_Va_Phep_Toan/bac2.c) | Giải phương trình bậc 2 |
| [`bai_mot.c`](01_Kieu_Du_Lieu_Va_Phep_Toan/bai_mot.c) | Bài 1 – thực hành nhập xuất |
| [`binhp.c`](01_Kieu_Du_Lieu_Va_Phep_Toan/binhp.c) | Tính bình phương |
| [`bp1.c`](01_Kieu_Du_Lieu_Va_Phep_Toan/bp1.c) | Tính bình phương N |
| [`c10010.c`](01_Kieu_Du_Lieu_Va_Phep_Toan/c10010.c) | Đổi số ngày thành năm / tuần / ngày |
| [`c1007.c`](01_Kieu_Du_Lieu_Va_Phep_Toan/c1007.c) | Tổng / hiệu / tích / thương 2 số nguyên |
| [`c1008.c`](01_Kieu_Du_Lieu_Va_Phep_Toan/c1008.c) | Chuyển Celsius sang Fahrenheit |
| [`chill.cpp`](01_Kieu_Du_Lieu_Va_Phep_Toan/chill.cpp) | In 1/N với 15 chữ số thập phân |
| [`colral.c`](01_Kieu_Du_Lieu_Va_Phep_Toan/colral.c) | Tìm max / min |
| [`gap_doi_2.c`](01_Kieu_Du_Lieu_Va_Phep_Toan/gap_doi_2.c) | Bài tập thực hành |
| [`gapdoi1.c`](01_Kieu_Du_Lieu_Va_Phep_Toan/gapdoi1.c) | Bài tập thực hành |
| [`gapdoi2.c`](01_Kieu_Du_Lieu_Va_Phep_Toan/gapdoi2.c) | Bài tập thực hành |
| [`gapdoi_1.c`](01_Kieu_Du_Lieu_Va_Phep_Toan/gapdoi_1.c) | Bài tập thực hành |
| [`gtrinnhat.c`](01_Kieu_Du_Lieu_Va_Phep_Toan/gtrinnhat.c) | Tìm giá trị nhỏ nhất |
| [`hoc1.c`](01_Kieu_Du_Lieu_Va_Phep_Toan/hoc1.c) | Gấp đôi N (thực hành) |
| [`ngaythang5.c`](01_Kieu_Du_Lieu_Va_Phep_Toan/ngaythang5.c) | Đổi số ngày thành năm / tuần / ngày |
| [`nhietdo.c`](01_Kieu_Du_Lieu_Va_Phep_Toan/nhietdo.c) | Chuyển đổi nhiệt độ |
| [`pheptinh1.c`](01_Kieu_Du_Lieu_Va_Phep_Toan/pheptinh1.c) | Phép tính cơ bản (kiểm tra chia cho 0) |
| [`pheptinh2.c`](01_Kieu_Du_Lieu_Va_Phep_Toan/pheptinh2.c) | Phép tính cơ bản (phiên bản 2) |
| [`test_hcn.c`](01_Kieu_Du_Lieu_Va_Phep_Toan/test_hcn.c) | Tính diện tích hình chữ nhật |
| [`test_thap_phan.c`](01_Kieu_Du_Lieu_Va_Phep_Toan/test_thap_phan.c) | In 1/N với 15 chữ số thập phân |
| [`tinhtong.c`](01_Kieu_Du_Lieu_Va_Phep_Toan/tinhtong.c) | Tính tổng |

### 02_Ham_Va_Chuong_Trinh_Con

**Chương 2 – Hàm và chương trình con** — 79 bài

| Bài | Mô tả |
|---|---|
| [`2.1.cpp`](02_Ham_Va_Chuong_Trinh_Con/2.1.cpp) | Bài 2.01 – TỔNG CHỮ SỐ CHIA HẾT CHO 10 |
| [`2.2.cpp`](02_Ham_Va_Chuong_Trinh_Con/2.2.cpp) | Bài 2.02 – SỐ NGUYÊN TỐ NHỎ HƠN N |
| [`2.3.cpp`](02_Ham_Va_Chuong_Trinh_Con/2.3.cpp) | Bài 2.03 – LIỆT KÊ N SỐ NGUYÊN TỐ ĐẦU TIÊN |
| [`2.4.cpp`](02_Ham_Va_Chuong_Trinh_Con/2.4.cpp) | Bài 2.04 – ƯỚC SỐ CHUNG LỚN NHẤT - BỘI SỐ CHUNG NHỎ NHẤT |
| [`2.5.cpp`](02_Ham_Va_Chuong_Trinh_Con/2.5.cpp) | Bài 2.05 – LIỆT KÊ CÁC CẶP SỐ NGUYÊN TỐ CÙNG NHAU |
| [`2.6.cpp`](02_Ham_Va_Chuong_Trinh_Con/2.6.cpp) | Bài 2.06 – PHÂN TÍCH THỪA SỐ NGUYÊN TỐ |
| [`2.7.cpp`](02_Ham_Va_Chuong_Trinh_Con/2.7.cpp) | Bài 2.07 – VỪA NGUYÊN TỐ VỪA THUẬN NGHỊCH |
| [`2.8.cpp`](02_Ham_Va_Chuong_Trinh_Con/2.8.cpp) | Bài 2.08 – SỐ HOÀN HẢO NHỎ HƠN N |
| [`2.9.cpp`](02_Ham_Va_Chuong_Trinh_Con/2.9.cpp) | Bài 2.09 – SỐ HOÀN HẢO TRONG ĐOẠN |
| [`2.10.cpp`](02_Ham_Va_Chuong_Trinh_Con/2.10.cpp) | Bài 2.10 – SỐ STRONG NHỎ HƠN N |
| [`2.11.cpp`](02_Ham_Va_Chuong_Trinh_Con/2.11.cpp) | Bài 2.11 – SỐ STRONG TRONG ĐOẠN |
| [`2.12.cpp`](02_Ham_Va_Chuong_Trinh_Con/2.12.cpp) | Bài 2.12 – KIỂM TRA SỐ FIBONACCI 1 |
| [`2.13.cpp`](02_Ham_Va_Chuong_Trinh_Con/2.13.cpp) | Bài 2.13 – KIỂM TRA SỐ FIBONACCI 2 |
| [`2.14.cpp`](02_Ham_Va_Chuong_Trinh_Con/2.14.cpp) | Bài 2.14 – LIỆT KÊ N SỐ FIBONACCI ĐẦU TIÊN |
| [`2.15.cpp`](02_Ham_Va_Chuong_Trinh_Con/2.15.cpp) | Bài 2.15 – BỘI SỐ CHUNG - ƯỚC SỐ CHUNG |
| [`2.16.cpp`](02_Ham_Va_Chuong_Trinh_Con/2.16.cpp) | Bài 2.16 – ƯỚC SỐ NGUYÊN TỐ LỚN NHẤT |
| [`2.17.cpp`](02_Ham_Va_Chuong_Trinh_Con/2.17.cpp) | Bài 2.17 – SỐ ĐẸP 1 |
| [`2.18.cpp`](02_Ham_Va_Chuong_Trinh_Con/2.18.cpp) | Bài 2.18 – SỐ ĐẸP 2 |
| [`2.19.cpp`](02_Ham_Va_Chuong_Trinh_Con/2.19.cpp) | Bài 2.19 – SỐ ĐẸP 3 |
| [`2.20.cpp`](02_Ham_Va_Chuong_Trinh_Con/2.20.cpp) | Bài 2.20 – SỐ THUẬN NGHỊCH KHÔNG CÓ CHỮ SỐ 9 |
| [`2.21.cpp`](02_Ham_Va_Chuong_Trinh_Con/2.21.cpp) | Bài 2.21 – TAM GIÁC PASCAL |
| [`2.22.cpp`](02_Ham_Va_Chuong_Trinh_Con/2.22.cpp) | Bài 2.22 – SỐ CHẴN ĐẶC BIỆT |
| [`2.23.cpp`](02_Ham_Va_Chuong_Trinh_Con/2.23.cpp) | Bài 2.23 – SỐ SMITH |
| [`2.24.cpp`](02_Ham_Va_Chuong_Trinh_Con/2.24.cpp) | Bài 2.24 – SỐ THUẦN NGUYÊN TỐ |
| [`2.25.cpp`](02_Ham_Va_Chuong_Trinh_Con/2.25.cpp) | Bài 2.25 – CẮT ĐÔI |
| [`3001.cpp`](02_Ham_Va_Chuong_Trinh_Con/3001.cpp) | Bài 3001 (code.ptit.edu.vn) |
| [`3002.cpp`](02_Ham_Va_Chuong_Trinh_Con/3002.cpp) | Bài 3002 (code.ptit.edu.vn) |
| [`3003.cpp`](02_Ham_Va_Chuong_Trinh_Con/3003.cpp) | Bài 3003 (code.ptit.edu.vn) |
| [`3004.cpp`](02_Ham_Va_Chuong_Trinh_Con/3004.cpp) | Bài 3004 (code.ptit.edu.vn) |
| [`3005.cpp`](02_Ham_Va_Chuong_Trinh_Con/3005.cpp) | Bài 3005 (code.ptit.edu.vn) |
| [`3006.cpp`](02_Ham_Va_Chuong_Trinh_Con/3006.cpp) | Bài 3006 (code.ptit.edu.vn) |
| [`3008.cpp`](02_Ham_Va_Chuong_Trinh_Con/3008.cpp) | Bài 3008 (code.ptit.edu.vn) |
| [`3009.cpp`](02_Ham_Va_Chuong_Trinh_Con/3009.cpp) | Bài 3009 (code.ptit.edu.vn) |
| [`3010.cpp`](02_Ham_Va_Chuong_Trinh_Con/3010.cpp) | Bài 3010 (code.ptit.edu.vn) |
| [`3011.cpp`](02_Ham_Va_Chuong_Trinh_Con/3011.cpp) | Bài 3011 (code.ptit.edu.vn) |
| [`3012.cpp`](02_Ham_Va_Chuong_Trinh_Con/3012.cpp) | Bài 3012 (code.ptit.edu.vn) |
| [`3013.cpp`](02_Ham_Va_Chuong_Trinh_Con/3013.cpp) | Bài 3013 (code.ptit.edu.vn) |
| [`3014.cpp`](02_Ham_Va_Chuong_Trinh_Con/3014.cpp) | Bài 3014 (code.ptit.edu.vn) |
| [`3015.cpp`](02_Ham_Va_Chuong_Trinh_Con/3015.cpp) | Bài 3015 (code.ptit.edu.vn) |
| [`3016.cpp`](02_Ham_Va_Chuong_Trinh_Con/3016.cpp) | Bài 3016 (code.ptit.edu.vn) |
| [`3018.cpp`](02_Ham_Va_Chuong_Trinh_Con/3018.cpp) | Bài 3018 (code.ptit.edu.vn) |
| [`3021.cpp`](02_Ham_Va_Chuong_Trinh_Con/3021.cpp) | Bài 3021 (code.ptit.edu.vn) |
| [`3024.cpp`](02_Ham_Va_Chuong_Trinh_Con/3024.cpp) | Bài 3024 (code.ptit.edu.vn) |
| [`3027.cpp`](02_Ham_Va_Chuong_Trinh_Con/3027.cpp) | Bài 3027 (code.ptit.edu.vn) |
| [`3028.cpp`](02_Ham_Va_Chuong_Trinh_Con/3028.cpp) | Bài 3028 (code.ptit.edu.vn) |
| [`3029.cpp`](02_Ham_Va_Chuong_Trinh_Con/3029.cpp) | Bài 3029 (code.ptit.edu.vn) |
| [`3031.cpp`](02_Ham_Va_Chuong_Trinh_Con/3031.cpp) | Bài 3031 (code.ptit.edu.vn) |
| [`3032.cpp`](02_Ham_Va_Chuong_Trinh_Con/3032.cpp) | Bài 3032 (code.ptit.edu.vn) |
| [`3033.cpp`](02_Ham_Va_Chuong_Trinh_Con/3033.cpp) | Bài 3033 (code.ptit.edu.vn) |
| [`3034.cpp`](02_Ham_Va_Chuong_Trinh_Con/3034.cpp) | Bài 3034 (code.ptit.edu.vn) |
| [`3035.cpp`](02_Ham_Va_Chuong_Trinh_Con/3035.cpp) | Bài 3035 (code.ptit.edu.vn) |
| [`3036.cpp`](02_Ham_Va_Chuong_Trinh_Con/3036.cpp) | Bài 3036 (code.ptit.edu.vn) |
| [`3037.cpp`](02_Ham_Va_Chuong_Trinh_Con/3037.cpp) | Bài 3037 (code.ptit.edu.vn) |
| [`3041.cpp`](02_Ham_Va_Chuong_Trinh_Con/3041.cpp) | Bài 3041 (code.ptit.edu.vn) |
| [`3042.cpp`](02_Ham_Va_Chuong_Trinh_Con/3042.cpp) | Bài 3042 (code.ptit.edu.vn) |
| [`3046.cpp`](02_Ham_Va_Chuong_Trinh_Con/3046.cpp) | Bài 3046 (code.ptit.edu.vn) |
| [`3048.cpp`](02_Ham_Va_Chuong_Trinh_Con/3048.cpp) | Bài 3048 (code.ptit.edu.vn) |
| [`3049.cpp`](02_Ham_Va_Chuong_Trinh_Con/3049.cpp) | Bài 3049 (code.ptit.edu.vn) |
| [`3060.cpp`](02_Ham_Va_Chuong_Trinh_Con/3060.cpp) | Bài 3060 (code.ptit.edu.vn) |
| [`3061.cpp`](02_Ham_Va_Chuong_Trinh_Con/3061.cpp) | Bài 3061 (code.ptit.edu.vn) |
| [`C03006.cpp`](02_Ham_Va_Chuong_Trinh_Con/C03006.cpp) | Bài C03006 (code.ptit.edu.vn) |
| [`C03007.cpp`](02_Ham_Va_Chuong_Trinh_Con/C03007.cpp) | Bài C03007 (code.ptit.edu.vn) |
| [`C03015.cpp`](02_Ham_Va_Chuong_Trinh_Con/C03015.cpp) | Bài C03015 (code.ptit.edu.vn) |
| [`C03019.cpp`](02_Ham_Va_Chuong_Trinh_Con/C03019.cpp) | Bài C03019 (code.ptit.edu.vn) |
| [`C03020.cpp`](02_Ham_Va_Chuong_Trinh_Con/C03020.cpp) | Bài C03020 (code.ptit.edu.vn) |
| [`C03022.cpp`](02_Ham_Va_Chuong_Trinh_Con/C03022.cpp) | Bài C03022 (code.ptit.edu.vn) |
| [`C03023.cpp`](02_Ham_Va_Chuong_Trinh_Con/C03023.cpp) | Bài C03023 (code.ptit.edu.vn) |
| [`C03026.cpp`](02_Ham_Va_Chuong_Trinh_Con/C03026.cpp) | Bài C03026 (code.ptit.edu.vn) |
| [`C03030.cpp`](02_Ham_Va_Chuong_Trinh_Con/C03030.cpp) | Bài C03030 (code.ptit.edu.vn) |
| [`C03038.cpp`](02_Ham_Va_Chuong_Trinh_Con/C03038.cpp) | Bài C03038 (code.ptit.edu.vn) |
| [`C03040.cpp`](02_Ham_Va_Chuong_Trinh_Con/C03040.cpp) | Bài C03040 (code.ptit.edu.vn) |
| [`C03045.cpp`](02_Ham_Va_Chuong_Trinh_Con/C03045.cpp) | Bài C03045 (code.ptit.edu.vn) |
| [`C03046.cpp`](02_Ham_Va_Chuong_Trinh_Con/C03046.cpp) | Bài C03046 (code.ptit.edu.vn) |
| [`C03050.cpp`](02_Ham_Va_Chuong_Trinh_Con/C03050.cpp) | Bài C03050 (code.ptit.edu.vn) |
| [`C03051.cpp`](02_Ham_Va_Chuong_Trinh_Con/C03051.cpp) | Bài C03051 (code.ptit.edu.vn) |
| [`C03053.cpp`](02_Ham_Va_Chuong_Trinh_Con/C03053.cpp) | Bài C03053 (code.ptit.edu.vn) |
| [`C03054.cpp`](02_Ham_Va_Chuong_Trinh_Con/C03054.cpp) | Bài C03054 (code.ptit.edu.vn) |
| [`C03057.cpp`](02_Ham_Va_Chuong_Trinh_Con/C03057.cpp) | Bài C03057 (code.ptit.edu.vn) |
| [`C03058.cpp`](02_Ham_Va_Chuong_Trinh_Con/C03058.cpp) | Bài C03058 (code.ptit.edu.vn) |

### 03_Mang_Mot_Chieu

**Chương 3 – Mảng một chiều** — 71 bài

| Bài | Mô tả |
|---|---|
| [`3.1.cpp`](03_Mang_Mot_Chieu/3.1.cpp) | Bài 3.01 – SỐ CHẴN TRONG DÃY |
| [`3.2.cpp`](03_Mang_Mot_Chieu/3.2.cpp) | Bài 3.02 – SỐ NGUYÊN TỐ TRONG DÃY |
| [`3.3.cpp`](03_Mang_Mot_Chieu/3.3.cpp) | Bài 3.03 – MẢNG ĐỐI XỨNG |
| [`3.4.cpp`](03_Mang_Mot_Chieu/3.4.cpp) | Bài 3.04 – SỐ LỚN NHẤT |
| [`3.5.cpp`](03_Mang_Mot_Chieu/3.5.cpp) | Bài 3.05 – ĐẢO NGƯỢC MẢNG SỐ |
| [`3.6.cpp`](03_Mang_Mot_Chieu/3.6.cpp) | Bài 3.06 – CHÈN MẢNG |
| [`3.7.cpp`](03_Mang_Mot_Chieu/3.7.cpp) | Bài 3.07 – TÁCH CHẴN L |
| [`3.8.cpp`](03_Mang_Mot_Chieu/3.8.cpp) | Bài 3.08 – NHỎ NHẤT VÀ NHỎ THỨ HAI |
| [`3.9.cpp`](03_Mang_Mot_Chieu/3.9.cpp) | Bài 3.09 – ĐẾM SỐ PHẦN TỬ LỚN HƠN SỐ ĐỨNG TRƯỚC |
| [`3.10.cpp`](03_Mang_Mot_Chieu/3.10.cpp) | Bài 3.10 – XUẤT HIỆN NHIỀU HƠN MỘT LẦN |
| [`3.11.cpp`](03_Mang_Mot_Chieu/3.11.cpp) | Bài 3.11 – XUẤT HIỆN ĐÚNG MỘT LẦN |
| [`3.12.cpp`](03_Mang_Mot_Chieu/3.12.cpp) | Bài 3.12 – ĐẾM CÁC SỐ NGUYÊN TỐ TRONG DÃY |
| [`3.13.cpp`](03_Mang_Mot_Chieu/3.13.cpp) | Bài 3.13 – DỊCH TRÁI |
| [`3.14.cpp`](03_Mang_Mot_Chieu/3.14.cpp) | Bài 3.14 – DỊCH PHẢI |
| [`3.15.cpp`](03_Mang_Mot_Chieu/3.15.cpp) | Bài 3.15 – SẮP XẾP TĂNG |
| [`3.16.cpp`](03_Mang_Mot_Chieu/3.16.cpp) | Bài 3.16 – SẮP XẾP GIẢM |
| [`3.17.cpp`](03_Mang_Mot_Chieu/3.17.cpp) | Bài 3.17 – SẮP XẾP ĐỔI CHỖ TRỰC TIẾP |
| [`3.18.cpp`](03_Mang_Mot_Chieu/3.18.cpp) | Bài 3.18 – SẮP XẾP CHỌN |
| [`3.19.cpp`](03_Mang_Mot_Chieu/3.19.cpp) | Bài 3.19 – SẮP XẾP CHÈN |
| [`3.20.cpp`](03_Mang_Mot_Chieu/3.20.cpp) | Bài 3.20 – SẮP XẾP NỔI BỌT |
| [`3.21.cpp`](03_Mang_Mot_Chieu/3.21.cpp) | Bài 3.21 – TRỘN HAI DÃY VÀ SẮP XẾP |
| [`3.22.cpp`](03_Mang_Mot_Chieu/3.22.cpp) | Bài 3.22 – ĐỔI TIỀN |
| [`3.24.cpp`](03_Mang_Mot_Chieu/3.24.cpp) | Bài 3.24 – LIỆT KÊ VÀ ĐẾM |
| [`4001.cpp`](03_Mang_Mot_Chieu/4001.cpp) | Bài 4001 (code.ptit.edu.vn) |
| [`4002.cpp`](03_Mang_Mot_Chieu/4002.cpp) | Bài 4002 (code.ptit.edu.vn) |
| [`4003.cpp`](03_Mang_Mot_Chieu/4003.cpp) | Bài 4003 (code.ptit.edu.vn) |
| [`4004.cpp`](03_Mang_Mot_Chieu/4004.cpp) | Bài 4004 (code.ptit.edu.vn) |
| [`4005.cpp`](03_Mang_Mot_Chieu/4005.cpp) | Bài 4005 (code.ptit.edu.vn) |
| [`4006.cpp`](03_Mang_Mot_Chieu/4006.cpp) | Bài 4006 (code.ptit.edu.vn) |
| [`4007.cpp`](03_Mang_Mot_Chieu/4007.cpp) | Bài 4007 (code.ptit.edu.vn) |
| [`4008.cpp`](03_Mang_Mot_Chieu/4008.cpp) | Bài 4008 (code.ptit.edu.vn) |
| [`4009.cpp`](03_Mang_Mot_Chieu/4009.cpp) | Bài 4009 (code.ptit.edu.vn) |
| [`4010.cpp`](03_Mang_Mot_Chieu/4010.cpp) | Bài 4010 (code.ptit.edu.vn) |
| [`4011.cpp`](03_Mang_Mot_Chieu/4011.cpp) | Bài 4011 (code.ptit.edu.vn) |
| [`4012.cpp`](03_Mang_Mot_Chieu/4012.cpp) | Bài 4012 (code.ptit.edu.vn) |
| [`4013.cpp`](03_Mang_Mot_Chieu/4013.cpp) | Bài 4013 (code.ptit.edu.vn) |
| [`4014.cpp`](03_Mang_Mot_Chieu/4014.cpp) | Bài 4014 (code.ptit.edu.vn) |
| [`4015.cpp`](03_Mang_Mot_Chieu/4015.cpp) | Bài 4015 (code.ptit.edu.vn) |
| [`4016.cpp`](03_Mang_Mot_Chieu/4016.cpp) | Bài 4016 (code.ptit.edu.vn) |
| [`4017.cpp`](03_Mang_Mot_Chieu/4017.cpp) | Bài 4017 (code.ptit.edu.vn) |
| [`4018.cpp`](03_Mang_Mot_Chieu/4018.cpp) | Bài 4018 (code.ptit.edu.vn) |
| [`4020.cpp`](03_Mang_Mot_Chieu/4020.cpp) | Bài 4020 (code.ptit.edu.vn) |
| [`4021.cpp`](03_Mang_Mot_Chieu/4021.cpp) | Bài 4021 (code.ptit.edu.vn) |
| [`4022.cpp`](03_Mang_Mot_Chieu/4022.cpp) | Bài 4022 (code.ptit.edu.vn) |
| [`4023.cpp`](03_Mang_Mot_Chieu/4023.cpp) | Bài 4023 (code.ptit.edu.vn) |
| [`4024.cpp`](03_Mang_Mot_Chieu/4024.cpp) | Bài 4024 (code.ptit.edu.vn) |
| [`4033.cpp`](03_Mang_Mot_Chieu/4033.cpp) | Bài 4033 (code.ptit.edu.vn) |
| [`4034.cpp`](03_Mang_Mot_Chieu/4034.cpp) | Bài 4034 (code.ptit.edu.vn) |
| [`4037.cpp`](03_Mang_Mot_Chieu/4037.cpp) | Bài 4037 (code.ptit.edu.vn) |
| [`4058.cpp`](03_Mang_Mot_Chieu/4058.cpp) | Bài 4058 (code.ptit.edu.vn) |
| [`4059.cpp`](03_Mang_Mot_Chieu/4059.cpp) | Bài 4059 (code.ptit.edu.vn) |
| [`bilap.cpp`](03_Mang_Mot_Chieu/bilap.cpp) | Luyện tập mảng 1 chiều |
| [`C04019.cpp`](03_Mang_Mot_Chieu/C04019.cpp) | Bài C04019 (code.ptit.edu.vn) |
| [`C04025.cpp`](03_Mang_Mot_Chieu/C04025.cpp) | Bài C04025 (code.ptit.edu.vn) |
| [`C04026.cpp`](03_Mang_Mot_Chieu/C04026.cpp) | Bài C04026 (code.ptit.edu.vn) |
| [`C04027.cpp`](03_Mang_Mot_Chieu/C04027.cpp) | Bài C04027 (code.ptit.edu.vn) |
| [`C04028.cpp`](03_Mang_Mot_Chieu/C04028.cpp) | Bài C04028 (code.ptit.edu.vn) |
| [`C04029.cpp`](03_Mang_Mot_Chieu/C04029.cpp) | Bài C04029 (code.ptit.edu.vn) |
| [`C04030.cpp`](03_Mang_Mot_Chieu/C04030.cpp) | Bài C04030 (code.ptit.edu.vn) |
| [`C04031.cpp`](03_Mang_Mot_Chieu/C04031.cpp) | Bài C04031 (code.ptit.edu.vn) |
| [`C04036.cpp`](03_Mang_Mot_Chieu/C04036.cpp) | Bài C04036 (code.ptit.edu.vn) |
| [`C04038.cpp`](03_Mang_Mot_Chieu/C04038.cpp) | Bài C04038 (code.ptit.edu.vn) |
| [`C04040.cpp`](03_Mang_Mot_Chieu/C04040.cpp) | Bài C04040 (code.ptit.edu.vn) |
| [`chen1.cpp`](03_Mang_Mot_Chieu/chen1.cpp) | Chèn phần tử vào mảng (phiên bản 1) |
| [`chen2.cpp`](03_Mang_Mot_Chieu/chen2.cpp) | Chèn phần tử vào mảng (phiên bản 2) |
| [`dichphai.cpp`](03_Mang_Mot_Chieu/dichphai.cpp) | Dịch mảng sang phải k vị trí |
| [`dichtrai.cpp`](03_Mang_Mot_Chieu/dichtrai.cpp) | Dịch mảng sang trái k vị trí |
| [`LAB01-0007.cpp`](03_Mang_Mot_Chieu/LAB01-0007.cpp) | Lab 01 – bài 7 (mảng) |
| [`lap.cpp`](03_Mang_Mot_Chieu/lap.cpp) | Luyện tập mảng 1 chiều |
| [`nhap_mang_xuat_mang.cpp`](03_Mang_Mot_Chieu/nhap_mang_xuat_mang.cpp) | Nhập mảng – xuất mảng – lọc số nguyên tố |
| [`xhien1_lan.cpp`](03_Mang_Mot_Chieu/xhien1_lan.cpp) | Phần tử xuất hiện đúng 1 lần trong mảng |

### 04_Mang_Hai_Chieu

**Chương 4 – Mảng hai chiều** — 32 bài

| Bài | Mô tả |
|---|---|
| [`4.1.cpp`](04_Mang_Hai_Chieu/4.1.cpp) | Bài 4.01 – MA TRẬN CHUYỂN VỊ |
| [`4.2.cpp`](04_Mang_Hai_Chieu/4.2.cpp) | Bài 4.02 – LOẠI BỎ HÀNG VÀ CỘT ĐẦU TIÊN RA KHỎI MA TRẬN |
| [`4.3.cpp`](04_Mang_Hai_Chieu/4.3.cpp) | Bài 4.03 – CHUYỂN ĐỔI HAI HÀNG TRONG MA TRẬN |
| [`4.4.cpp`](04_Mang_Hai_Chieu/4.4.cpp) | Bài 4.04 – CHUYỂN ĐỔI HAI CỘT TRONG MA TRẬN |
| [`4.5.cpp`](04_Mang_Hai_Chieu/4.5.cpp) | Bài 4.05 – LOẠI BỎ HÀNG VÀ CỘT CÓ TỔNG LỚN NHẤT RA KHỎI MA TRẬN |
| [`4.6.cpp`](04_Mang_Hai_Chieu/4.6.cpp) | Bài 4.06 – CHUYỂN ĐỔI HAI ĐƯỜNG CHÉO |
| [`4.7.cpp`](04_Mang_Hai_Chieu/4.7.cpp) | Bài 4.07 – TỔNG CÁC SỐ NGUYÊN TỐ THUỘC TAM GIÁC TRÊN |
| [`4.8.cpp`](04_Mang_Hai_Chieu/4.8.cpp) | Bài 4.08 – TÍCH MA TRẬN VỚI CHUYỂN VỊ CỦA NÓ |
| [`4.9.cpp`](04_Mang_Hai_Chieu/4.9.cpp) | Bài 4.09 – TÍCH MA TRẬN CHÉO |
| [`4.10.cpp`](04_Mang_Hai_Chieu/4.10.cpp) | Bài 4.10 – MA TRẬN XOẮN ỐC 1 |
| [`4.11.cpp`](04_Mang_Hai_Chieu/4.11.cpp) | Bài 4.11 – MA TRẬN XOẮN ỐC 2 |
| [`4.12.cpp`](04_Mang_Hai_Chieu/4.12.cpp) | Bài 4.12 – MA TRẬN XOẮN ỐC NGƯỢC |
| [`4.13.cpp`](04_Mang_Hai_Chieu/4.13.cpp) | Bài 4.13 – MA TRẬN XOẮN ỐC NGUYÊN TỐ |
| [`4.14.cpp`](04_Mang_Hai_Chieu/4.14.cpp) | Bài 4.14 – MA TRẬN XOẮN ỐC FIBONACCI |
| [`5001.cpp`](04_Mang_Hai_Chieu/5001.cpp) | Bài 5001 (code.ptit.edu.vn) |
| [`5005.cpp`](04_Mang_Hai_Chieu/5005.cpp) | Bài 5005 (code.ptit.edu.vn) |
| [`5009.cpp`](04_Mang_Hai_Chieu/5009.cpp) | Bài 5009 (code.ptit.edu.vn) |
| [`C05006.cpp`](04_Mang_Hai_Chieu/C05006.cpp) | Bài C05006 (code.ptit.edu.vn) |
| [`C05007.cpp`](04_Mang_Hai_Chieu/C05007.cpp) | Bài C05007 (code.ptit.edu.vn) |
| [`C05008.cpp`](04_Mang_Hai_Chieu/C05008.cpp) | Bài C05008 (code.ptit.edu.vn) |
| [`C05010.cpp`](04_Mang_Hai_Chieu/C05010.cpp) | Bài C05010 (code.ptit.edu.vn) |
| [`C05011.cpp`](04_Mang_Hai_Chieu/C05011.cpp) | Bài C05011 (code.ptit.edu.vn) |
| [`C05012.cpp`](04_Mang_Hai_Chieu/C05012.cpp) | Bài C05012 (code.ptit.edu.vn) |
| [`C05016.cpp`](04_Mang_Hai_Chieu/C05016.cpp) | Bài C05016 (code.ptit.edu.vn) |
| [`C05017.cpp`](04_Mang_Hai_Chieu/C05017.cpp) | Bài C05017 (code.ptit.edu.vn) |
| [`C05018.cpp`](04_Mang_Hai_Chieu/C05018.cpp) | Bài C05018 (code.ptit.edu.vn) |
| [`C05019.cpp`](04_Mang_Hai_Chieu/C05019.cpp) | Bài C05019 (code.ptit.edu.vn) |
| [`C05020.cpp`](04_Mang_Hai_Chieu/C05020.cpp) | Bài C05020 (code.ptit.edu.vn) |
| [`CTest005.cpp`](04_Mang_Hai_Chieu/CTest005.cpp) | Luyện tập ma trận – nhân 3 ma trận |
| [`CTest006.cpp`](04_Mang_Hai_Chieu/CTest006.cpp) | Luyện tập ma trận |
| [`CTest022.cpp`](04_Mang_Hai_Chieu/CTest022.cpp) | Luyện tập ma trận |
| [`FPT002.cpp`](04_Mang_Hai_Chieu/FPT002.cpp) | Nhân ma trận A×B |

### 05_Xau_Ky_Tu

**Chương 5 – Xâu ký tự** — 16 bài

| Bài | Mô tả |
|---|---|
| [`5.1.cpp`](05_Xau_Ky_Tu/5.1.cpp) | Bài 5.01 – ĐẾM SỐ TỪ TRONG XÂU |
| [`5.2.cpp`](05_Xau_Ky_Tu/5.2.cpp) | Bài 5.02 – ĐẾM KÝ TỰ |
| [`5.6.cpp`](05_Xau_Ky_Tu/5.6.cpp) | Bài 5.06 – SỐ ĐẸP 1 |
| [`5.7.cpp`](05_Xau_Ky_Tu/5.7.cpp) | Bài 5.07 – SỐ ĐẸP 2 |
| [`5.10.cpp`](05_Xau_Ky_Tu/5.10.cpp) | Bài 5.10 – CHUẨN HÓA XÂU HỌ TÊN 1 |
| [`5.15.cpp`](05_Xau_Ky_Tu/5.15.cpp) | Bài 5.15 – SỐ ƯU THẾ |
| [`5.16.cpp`](05_Xau_Ky_Tu/5.16.cpp) | Bài 5.16 – TỔNG HAI SỐ NGUYÊN LỚN |
| [`6003.cpp`](05_Xau_Ky_Tu/6003.cpp) | Bài 6003 (code.ptit.edu.vn) |
| [`C06004.cpp`](05_Xau_Ky_Tu/C06004.cpp) | Bài C06004 (code.ptit.edu.vn) |
| [`C06007.cpp`](05_Xau_Ky_Tu/C06007.cpp) | Bài C06007 (code.ptit.edu.vn) |
| [`C06008.cpp`](05_Xau_Ky_Tu/C06008.cpp) | Bài C06008 (code.ptit.edu.vn) |
| [`C06010.cpp`](05_Xau_Ky_Tu/C06010.cpp) | Bài C06010 (code.ptit.edu.vn) |
| [`xau2.cpp`](05_Xau_Ky_Tu/xau2.cpp) | Bài tập thực hành |
| [`xau_1.cpp`](05_Xau_Ky_Tu/xau_1.cpp) | Bài tập thực hành |
| [`xau_3.cpp`](05_Xau_Ky_Tu/xau_3.cpp) | Bài tập thực hành |
| [`xdx.cpp`](05_Xau_Ky_Tu/xdx.cpp) | Bài tập thực hành |

### 06_Cau_Truc

**Chương 6 – Cấu trúc (struct)** — 11 bài

| Bài | Mô tả |
|---|---|
| [`6.1.cpp`](06_Cau_Truc/6.1.cpp) | Bài 6.01 – PHÂN SỐ |
| [`6.2.cpp`](06_Cau_Truc/6.2.cpp) | Bài 6.02 – CHU VI TAM GIÁC |
| [`6.3.cpp`](06_Cau_Truc/6.3.cpp) | Bài 6.03 – DIỆN TÍCH TAM GIÁC |
| [`6.5.cpp`](06_Cau_Truc/6.5.cpp) | Bài 6.05 – SẮP XẾP DANH SÁCH MẶT HÀNG |
| [`6.6.cpp`](06_Cau_Truc/6.6.cpp) | Bài 6.06 – TÌM THỦ KHOA CỦA KỲ THI |
| [`6.7.cpp`](06_Cau_Truc/6.7.cpp) | Bài 6.07 – SẮP XẾP THÍ SINH |
| [`bai5.cpp`](06_Cau_Truc/bai5.cpp) | Sắp xếp danh sách mặt hàng (struct) |
| [`C07004.cpp`](06_Cau_Truc/C07004.cpp) | Bài C07004 (code.ptit.edu.vn) |
| [`C07007.cpp`](06_Cau_Truc/C07007.cpp) | Bài C07007 (code.ptit.edu.vn) |
| [`thukhoa.cpp`](06_Cau_Truc/thukhoa.cpp) | Tìm thủ khoa kỳ thi (struct) |
| [`TST015.cpp`](06_Cau_Truc/TST015.cpp) | Tam giác (struct) – kiểm tra & tính toán |

### 07_De_Thi

**Đề thi giữa kỳ / đề PR** — 9 bài

| Bài | Mô tả |
|---|---|
| [`cau_1_huy_chien.cpp`](07_De_Thi/cau_1_huy_chien.cpp) | Bài tập thực hành |
| [`cau_2_huy_chien.cpp`](07_De_Thi/cau_2_huy_chien.cpp) | Bài tập thực hành |
| [`cau_3_huy_chien.cpp`](07_De_Thi/cau_3_huy_chien.cpp) | Bài tập thực hành |
| [`cau_4_huychien.cpp`](07_De_Thi/cau_4_huychien.cpp) | Đề thi Huy Chiến – câu 4 |
| [`cau_5_huychuen.cpp`](07_De_Thi/cau_5_huychuen.cpp) | Bài tập thực hành |
| [`cau_6_huychien.cpp`](07_De_Thi/cau_6_huychien.cpp) | Đề thi Huy Chiến – câu 6 |
| [`cau_7b_huychien.cpp`](07_De_Thi/cau_7b_huychien.cpp) | Đề thi Huy Chiến – câu 7 |
| [`cau_9_huychien.cpp`](07_De_Thi/cau_9_huychien.cpp) | Đề thi Huy Chiến – câu 9 |
| [`PR-2024-006.cpp`](07_De_Thi/PR-2024-006.cpp) | Đề PR 2024 – câu 6 (xử lý mảng) |

### 08_Test_Misc

**Bài thử nghiệm, thực hành tự do** — 10 bài

| Bài | Mô tả |
|---|---|
| [`another_bon_thang_1.cpp`](08_Test_Misc/another_bon_thang_1.cpp) | Thử nghiệm hàm (hello / agecheck) |
| [`hochoc.c`](08_Test_Misc/hochoc.c) | Thực hành printf / scanf |
| [`idk_231.c`](08_Test_Misc/idk_231.c) | Thử nghiệm nhập xuất |
| [`mung_1_thung_4.cpp`](08_Test_Misc/mung_1_thung_4.cpp) | Thử nghiệm hàm (happy birthday) |
| [`source.c`](08_Test_Misc/source.c) | Bài thử nghiệm (số hoàn hảo) |
| [`tesst.cpp`](08_Test_Misc/tesst.cpp) | Bài thử nghiệm |
| [`tesst_trinho.cpp`](08_Test_Misc/tesst_trinho.cpp) | Bài thử nghiệm |
| [`test.c`](08_Test_Misc/test.c) | Bài thử nghiệm |
| [`test.cpp`](08_Test_Misc/test.cpp) | Bài thử nghiệm |
| [`test211.cpp`](08_Test_Misc/test211.cpp) | Bài thử nghiệm |

## ⚠️ Lưu ý

- 2 file dưới đây **giữ nguyên như bản gốc** (bản nháp chưa hoàn thiện của tác giả), hiện chưa biên dịch được:
- `01_Kieu_Du_Lieu_Va_Phep_Toan/1.18.cpp` — /home/z/my-project/download/TinHocCoSo2/01_Kieu_Du_Lieu_Va_Phep_Toan/1.18.cpp:9:12: error: expected primary-expression before ‘)’ token
- `00_Co_Ban_Nhap_Xuat_Vong_Lap/22.cpp` — /home/z/my-project/download/TinHocCoSo2/00_Co_Ban_Nhap_Xuat_Vong_Lap/22.cpp:17:20: error: ‘sum’ was not declared in this scope
- Một số file `.c` dùng `gets()` — hàm này đã bị loại khỏi chuẩn C11, khi biên dịch sẽ có cảnh báo nhưng vẫn chạy được.
- File `C05010.cpp` trong `04_Mang_Hai_Chieu/` lấy phiên bản mới nhất từ backup `codeptitnua.rar`.

## 📄 Đề bài

Toàn bộ đề gốc nằm trong [`DeBai/`](DeBai):
- `baitap_chuong_123.pdf` — Bài tập chương 1, 2, 3
- `baitap_chuong_456.pdf` — Bài tập chương 4, 5, 6

## 📬 Đưa code lên GitHub

Xem hướng dẫn từng bước tại [`HUONG_DAN_PUSH.md`](HUONG_DAN_PUSH.md).

## 📝 License

Dự án được phát hành theo giấy phép [MIT](LICENSE) — bạn có thể tự do sử dụng, sao chép và sửa đổi cho mục đích học tập.

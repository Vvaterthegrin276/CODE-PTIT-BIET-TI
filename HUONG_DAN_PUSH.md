# 📬 Hướng dẫn đưa repo lên GitHub

Repo này đã có sẵn **git history** (đã `git init` + commit đầu tiên), bạn chỉ cần 3 lệnh là xong.

## Bước 1 — Tạo repo trên GitHub

1. Đăng nhập [github.com/HanhGrin](https://github.com/HanhGrin)
2. Nhấn **New repository** (hoặc vào https://github.com/new)
3. Đặt tên: `TinHocCoSo2`
4. **ĐỪNG** tick "Add a README" / ".gitignore" / "License" (để repo trống hoàn toàn)
5. Nhấn **Create repository**

## Bước 2 — Kết nối và push (chạy trong thư mục repo)

Mở terminal (hoặc Git Bash trên Windows) tại thư mục `TinHocCoSo2` vừa tải về:

```bash
git remote add origin https://github.com/HanhGrin/TinHocCoSo2.git
git branch -M main
git push -u origin main
```

> 🔐 Nếu được hỏi đăng nhập: GitHub không nhận mật khẩu nữa — dùng **Personal Access Token** (tạo tại Settings → Developer settings → Tokens) hoặc đăng nhập bằng browser khi được hỏi.

## Bước 3 — Kiểm tra

Vào `https://github.com/HanhGrin/TinHocCoSo2` — thấy README hiện bảng bài tập là thành công 🎉

## Cập nhật code sau này

```bash
git add .
git commit -m "Thêm bài X.Y"
git push
```

## Nếu dùng SSH thay vì HTTPS

```bash
git remote set-url origin git@github.com:HanhGrin/TinHocCoSo2.git
```

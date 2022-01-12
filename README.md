# THDC_test

**Bài 1:** Tính giá trị biểu thức F và in ra màn hình, với F bằng: 
- abs(x sin y) / x^2 +y^2, nếu xy < 0
- arccos(xy) - arcsin(yx), nếu xy = 0
- (x^2 + 1) ^ (1/2) - (2y^2 + 2) ^ (1/3), nếu xy > 0.

**Input:**
- Số thực x
- Số thực y

**Output:**
- Kết quả F

**VD:**

Input: 1 1

Output: -0.173187

Input: -1 1

Output: 0.420735

**Bài 2:** Viết chương trình cho phép nhập vào 1 mảng số nguyên (tối đa 10 phần tử), in ra màn hình tích của 2 phần tử tiếp lớn nhất.

**Input:**
- Dòng 1 chứa số nguyên n: số phần tử của mảng (2 <= n <= 10).
- Dòng 2 chưa danh sách các số cách nhau khoảng trắng.

**Output:**
- Tích 2 phần tử liên tiếp lớn nhất.

**VD:**

Input:

4

1 9 3 2 6

Output:

27

**Bài 3:** Viết chương trình nhập vào một dãy n số nguyên dương. Tìm số nguyên tố lớn nhất trong dãy. Nếu n <= 0, in ra màn hình "**ERROR**". Nếu mảng không có số nguyên tố, in ra màn hình "**Khong co so nguyen to**".

**Input:**
- Dòng 1 ghi số nguyên dương n.
- Dòng 2 là n số nguyên dương cách nhau bởi dấu cách.

**Output:** 
- 1 dòng duy nhất ghi ra số nguyên tố lớn nhất hoặc "**Khong co so nguyen to**".

**VD:**

Input: 

5

5 21 17 1 13

Output: 

17

**Bài 4:** Viết chương trình nhập vào mảng một số nguyên dương có n phần tử (n là một số nguyên được nhập vào từ bàn phím) và tính tổng các số lẻ mà không chia hết cho 5 xuất hiện trong mảng. Nếu n <= 0 thì in ra "ERROR".

**Input:**
- Dòng 1 chứa số nguyên dương n là số phần tử của mảng (n <= 1000).
- Dòng 2 là n số nguyên dương là các phần tử của mảng.

**Output:** 
- Số nguyên dương duy nhất là tổng của các số lẻ mà không chia hết cho 5 xuất hiện trong mảng trên.

**VD:**

Input: 

8

2 1 3 4 5 6 7 8 

Output: 

11


**Bài 5:** Hãy nhập vào một mảng (không quá 100 phần tử) các số nguyên, hãy tính và đưa ra màn hình số lượng phần tử trong mảng nhỏ hơn, bằng và lớn hơn giá trị của phần tử đầu

**Input:**
- Dòng 1 cho biết số phần tử của mảng N (1 <= N <= 100).
- Dòng 2 là N số nguyên, mỗi số cách nhau một dấu cách.

**Output:** Một dòng gồm 3 số nguyên cách nhau một dấu cách
- Số thứ nhất: Số phần tử trong mảng có giá trị **nhỏ hơn** giá trị phần tử đầu.
- Số thứ hai: Số phần tử trong mảng có giá trị **nhỏ hơn** giá trị phần tử đầu.

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
_____________

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
_____________

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
_____________

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
_____________

**Bài 5:** Hãy nhập vào một mảng (không quá 100 phần tử) các số nguyên, hãy tính và đưa ra màn hình số lượng phần tử trong mảng nhỏ hơn, bằng và lớn hơn giá trị của phần tử đầu

**Input:**
- Dòng 1 cho biết số phần tử của mảng N (1 <= N <= 100).
- Dòng 2 là N số nguyên, mỗi số cách nhau một dấu cách.

**Output:** Một dòng gồm 3 số nguyên cách nhau một dấu cách
- Số thứ nhất: Số phần tử trong mảng có giá trị **nhỏ hơn** giá trị phần tử đầu.
- Số thứ hai: Số phần tử trong mảng có giá trị **bằng** giá trị phần tử đầu.
- Số thứ ba: Số phần tử trong mảng có giá trị **lớn hơn** giá trị phần tử đầu.
_____________

**Bài 6:** Nhập vào số nguyên dương N (nếu **N <= 0** thì in ra "**Error**"). Đếm các ước số nguyên và tính tổng các ước số chia hết cho 3 và không chia hết cho 5.

**Input:**
- Số nguyên dương N.

**Output:** 
- Số các ước số nguyên của N.
- Tổng các ước số chia hết cho 3 và không chia hết cho 5.

**VD:**

Input: 

45

Output: 

6

12
_____________

**Bài 7:** Nhập vào hai kí tự chữ cái (phân biệt chữ in thường và chữ in hoa). 
- Nếu không phải kí tự chữ cái thì in ra "**Error**".
- In ra các kí tự chữ cái giữa 2 kí tự đã cho, **thứ tự tăng dần theo giá trị ASCII** của chúng, mỗi kí tự cách nhau bởi một dấu cách. 
- Nếu không có kí tự nào thỏa mãn thì in ra "**Null**".

**Input:**
- Hai kí tự viết liền nhau

**Output:** 
- Các kí tự chữ cái giữa 2 kí tự đã cho
- Nếu không có kí tự nào, in ra "**Null**"

**VD:**

Input: kT

Output: U V W X Y Z a b c d e f g h i j

Input: TT

Output: Null

_____________
**Bài 8:** Rút gọn phân số

**Input:** Đầu vào là 2 số nguyên dương viết cùng trên một dòng.

**Output:** Đầu ra là tử số và mẫu số của phân số đã được rút gọn được viết trên 2 dòng, tử số dòng trên, mẫu số dòng dưới, nếu tử số chia hết cho mẫu số thì chỉ in ra kết quả rút gọn trên 1 dòng.

**VD:**

Input:

1 3

Output:

1

3

Input:

4 2

Output:

2

Input:

3 6

Output:

1

2
_____________

**Bài 9:** Nhập vào 1 dãy N số nguyên cho trước. Tìm tổng và trung bình các phần tử cực đại.

(Phần tử cực đại là phần tử lớn hơn phần tử ngay trước và ngay sau nó).

**VD:** các phần tử được tô đậm dưới đây là phần tử cực đại:

1 **5** 2 **6** 3 **5** 1 8 8

**Input:** 
- Số nguyên dương N.
- Mảng N số nguyên

**Output:** 
- Tổng các phần tử cực đại
- Trung bình các phần tử cực đại

**VD:**

Input:

9

1 5 2 6 3 5 1 8 8

Output:

16

5.333333
_____________

**Bài 10:** Viết chương trình nhập vào một mảng số thực gồm n phần tử (n là số thực được nhập từ bàn phím) và tìm số lớn nhất trong mảng vừa nhập. Hãy in giá trị ra màn hình.

**Input:** 
- Dòng đầu tiên nhập số nguyên n là số phần tử của mảng (n <= 1000).
- Dòng tiếp theo là n số thực được nhập vào tương ứng là các giá trị chưa trong mảng.

**Output:** 
- Số thực duy nhất là giá trị lớn nhất trong mảng
- Hiển thị kết quả ra màn hình 4 chữ số sau dấu phẩy.

**VD:**

Input:

7

1 2.5 7 1 -3 1 4

Output:

7.0000
_____________

**Bài 11:** Viết chương trình cho phép nhập vào một mảng số nguyên (tối đa 10 phần tử), in ra màn hình tổng của 2 phần tử liên tiếp lớn nhất. Nếu mảng chỉ có 1 phần tử, trả về kết quả 0.
**Input:** 
- Dòng 1 chứa số nguyên n: số phần tử của mảng (2 <= n <= 10).
- Dòng 2 chứa danh sách các số cách nhau khoảng trắng.

**Output:** 
- Tổng 2 phần tử liên tiếp lớn nhất.

**VD:**

Input:

5

1 9 3 2 6

Output:

12
Bài 12: Viết chương trình tính diện tích tam giác.Trong đó độ dài 3 cạnh là 3 số thực a,b,c được nhập từ bàn phím.
-	Chú ý: Kiểm tra xem đó có phải độ dài 3 cạnh tam giác không. Nếu có thì tính và in ra diện tích tam giác, ngược lại in ra màn hình “Khong phai tam giac”
-	Mô tả dữ liệu:
Input:
Số thực a,b,c
Output:
Diện tích tam giác
For example:
Dữ liệu đầu vào:
3 4 5
Kết quả:
6.000000
Bài 13:Đếm số phần tử phân biệt của 1 mảng số nguyên A[] gồm N phần tử
Trong đó giá trị N và các phần tử của mảng A được nhập từ bàn phím
-	Chú ý: N là số nguyên dương nhỏ hơn 100, Không cần kiểm tra xem giá trị của N có hợp lệ không
-	Mô tả dữ liệu:
Input:
Số nguyên dương N
N phần tử mảng A
Output:
Số phần tử phân biệt của mảng A
For example:
Dữ liệu đầu vào
5
1 4 2 4 1
Kết quả:
3
Bài 14: Viết chương trình cho phép vào 1 mảng số nguyên(tối đa 10 phần tử) in ra màn hình phần tử bé nhất trong mảng và tổng các số chẵn trong mảng. Lưu ý: nếu không có số chẵn nào thì tổng sẽ là 0.
Input:
-	Dòng 1 chứa số nguyên n, số phần tử của mảng (1<=n<=10)
-	Dòng 2 chứa dánh sách các số cách nhau khoảng trắng
Output:
-	Phần tử bé nhất và tổng các số chẵn trong mảng cách nhau bởi dấu cách.
For example:
Dữ liệu đầu vào:
4
1 2 3 4
Kết quả:
1 6 

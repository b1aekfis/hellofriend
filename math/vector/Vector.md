- [Vector (math)](#vector-math)
  - [Euclidean vector](#euclidean-vector)
  - [Vector space](#vector-space)
    - [Linear span](#linear-span)

# Vector (math)

## Euclidean vector

Khi kiến thức vector chưa được xây dựng một cách có hệ thống, ý tưởng về những *"đoạn thẳng định hướng"* đã sớm xuất hiện rất nhiều trong các công trình cơ học, hay khi có số phức, người ta cũng hình thành nên ý tưởng biễu diễn số phức dưới dạng hình học là những đoạn thẳng định hướng,... khiến nó trở thành đối tượng đáng quan tâm trong mắt các nhà toán học thế kỷ 19 như một điều thiết yếu.

Một đoạn thẳng được định hướng trong không gian Euclid (kể cả trong không gian cổ điển hay không gian toạ độ) bởi hai điểm đầu mút của nó khi một trong hai được xác định là điểm đặt (điểm đầu) của đoạn thẳng và điểm còn lại sẽ là điểm tới (điểm cuối) của đoạn thẳng, một đối tượng hình học như vậy có ý nghĩa là *"một lượng có phương hướng xác định"* đại diện biểu thị cho các đại lượng cần có thêm thông tin về phương hướng không gian và được gọi là *"Vector"*. Theo căn bản đó, trong không gian Euclid ta thừa nhận rằng:

*\- các vector cùng nằm trên các đường thẳng song song với nhau hoặc trùng nhau được gọi là các vector cùng phương, chúng có thể cùng chiều hoặc ngược chiều*.

*\- các vector cùng hướng là các vector cùng phương, cùng chiều.*

*\- các vector bằng nhau là các vector có cùng độ dài, cùng hướng.*

*\- các vector đối nhau là các vector có cùng độ dài, cùng phương nhưng ngược chiều.*

Một vector v được viết kí hiệu: $\mathbf{v}$ (v in đậm) hoặc $\vec{\text{v}}$

<p align="center"><img src="Vector_from_A_to_B.svg" width="280"/></p>

hoặc khi đề cập đến độ dài hoặc độ lớn của nó ta viết: $\vert \mathbf{v}\vert$ hoặc $\vert \vec{\text{v}}\vert$, đôi khi $\Vert \mathbf{v}\Vert$ hoặc $\Vert \vec{\text{v}} \Vert$,...

Khi dựng các vector được kết hợp theo cách mà đầu của vector này được nối với đuôi của vector kia, sau đó luôn có thể có được "duy nhất" một đoạn thẳng nối từ *"đầu còn lại"* tới *"đuôi còn lại"* của chúng, một phép dựng hình như vậy, ở góc nhìn động học chẳng hạn, được nhìn nhận một cách chủ quan nhưng không sai rằng, đây là phép cộng giữa các vector dời vị trí của một chất điểm, tuân theo một quy tắc hình học gọi là *"quy tắc các hình tam giác".*

<p align="center"><img src="Vector_add_scale_tri.svg" width="280"/></p>

*Đoạn thẳng định hướng thu được sau phép dựng hình như vậy từ các vector đã cho tại sao lại được nhìn nhận là vector tổng của chúng?*

Để làm rõ lối tư duy chủ quan này, chúng ta cần nhớ rằng, với bản chất của phép cộng, phép cộng giữa các đối tượng không có cùng định nghĩa, hoặc không có cùng bản chất, thì phép tính đó vô nghĩa. Giống như các đối tượng có bản chất số học thì được tập hợp trong cùng một tập hợp có bản chất số học:

$$\mathbb{N}\subset\mathbb{Z}\subset\mathbb{Q}\subset\mathbb{R}\subset\mathbb{C}\subset...\subset S_\text{numbers}$$

<p align="center"><img src="NumberSetinC.svg" width="280"/></p>

Với các vector cũng vậy, các vector được nhìn nhận là *"các vector bằng nhau"*, dù đặt ở vị trí nào trong không gian đi nữa thì ở góc nhìn toán học, chúng phải được định nghĩa rằng: "*chúng là một, một phần tử trong một tập hợp có ý nghĩa là tập chứa các đối tượng cùng có bản chất vector*".

Vậy, từ đó có thể khách quan mà nói, phép dựng hình theo quy tắc các hình tam giác giữa các vector như trên được nhìn nhận là phép cộng giữa các vector là bởi vì *"quy tắc các hình tam giác"* thực chất là quy tắc được bao hàm bởi một quy tắc hình học khác tổng quát hơn, được gọi là *"quy tắc các hình bình hành"*, bất kể là trong không gian cổ điển hay không gian có toạ độ, sự nhìn nhận này hoàn toàn có thể được chứng minh, hoặc là bằng các phương pháp của hình học tổng hợp, hay thuận tiện hơn là bằng các phương pháp được khái quát hoá từ các phương pháp của hình học tổng hợp là các phương pháp toạ độ (vectors as points).

<p align="center"><img src="Vector_add_scale.svg" width="280"/></p>

Trong không gian Euclide, vector có độ dài được quy ước bằng 1 được gọi là vector đơn vị (vector cơ sở), kí hiệu: $\hat{\mathbf{u}}$, với

$$\hat{\mathbf{u}}=\frac{\mathbf{v}}{\Vert \mathbf{v} \Vert}$$

## Vector space

Trong [*Đại số trừu tượng*](https://en.wikipedia.org/wiki/Abstract_algebra) (đại số hiện đại), tập hợp vector mà ta nói đến bên trên được khái quát hoá thành một đối tượng toán học được gọi là *Không gian vector (vector space)*.

"*Không gian (space)*" trong thuật ngữ "*không gian vector (vector space)*" là một thuật ngữ riêng của toán học thuần tuý, tuy có vẻ như nó đang ám chỉ tới định nghĩa trong từ điển ngôn ngữ thông thường (ví dụ: "*Không gian ngoài trời, không gian trong phòng,...*") dễ khiến người ta liên tưởng tới các vector trong không gian Euclide và nhầm lẫn thuật ngữ này chỉ mang ý nghĩa hình học thuần tuý, nhưng không phải (không đủ), bản chất của vector khi được xem xét một cách kỹ lưỡng hơn (nội tại của vector có thể hiện diện bên trong vỏ bọc của vô số hình thái), nó buộc phải được trừu tượng hoá để có thể mở rộng phạm vi áp dụng mà nội tại của nó sẵn có (abstractness is the price of generality), vì vậy, thuật ngữ "*không gian*" trong "*không gian vector*" là thuật ngữ trong ngữ cảnh toán học nói chung (không phải hình học), là một định nghĩa về **một tập hợp được trang bị một cấu trúc xác định mối quan hệ giữa các phần tử của tập hợp**. Trong trường hợp này, cụ thể: 

Không gian vector trên một trường $F$ (trường có thể là số thực hoặc số phức hoặc hàm số hoặc tuỳ ý...) là một tập hợp không rỗng có bản chất vector trên trường $F$, gọi là $V$, được trang bị một phép toán nhị phân và một hàm nhị phân giữa các phần tử là vector, thoã mãn hệ tiên đề sau:

1. Với mọi phần tử $x$ và $y$ trong $V$, $x+y$ cũng thuộc $V$.

2. Với mọi phần $x$ trong $V$ và phần tử $a$ trong $F$, $ax$ cũng thuộc $V$.

3. Với mọi phần tử $x$ và $y$ trong $V$, $x+y = y+x$.

4. Với mọi phần tử $x$, $y$ và $z$ trong $V$, $(x+y)+z = x+(y+z)$.

5. Tồn tại một phần tử trong $V$ là vector không (zero vector) sao cho $x+\mathbf{0}=x$ với mọi $x \in V$.

6. Với mọi $x \in V$, tồn tại một phần tử $-x \in V$ sao cho $x+(-x)=\mathbf{0}$.

7. Tồn tại một phần tử trong $F$ là $1$, với mọi $x \in V$, $1x=x$.

8. $\forall x \in V$ và $\forall a,b \in F$, $(ab)x=a(bx)$.

9. $\forall a \in F$ và $\forall x,y \in V$, $a(x+y)=ax+ay$.

10. $\forall x \in V$ và $\forall a,b \in F$, $(a+b)x= ax+bx$.

Để diễn đạt ngắn gọn hơn, ta có cách viết sau:

Trên trường $F$, một tập hợp $V \neq \emptyset$ là một Không gian vector khi:

$+:V\times V \rightarrow V$ 

$\bullet: F\times V \rightarrow V$ *(scalar multiplication, đừng nhầm lẫn với [scalar product](#))*

Kí hiệu Không gian vector của tập $V$ (Không gian vector $V$):

$(V,+,\bullet)$

Trên trường $F$, một tập hợp vector $W \subseteq V$ mà thoả mãn hệ tiên đề như vậy (tức là đủ cơ sở để hình thành nên Không gian vector), thì được gọi là Không gian vector con của Không gian vector $V$(sub-vector spaces), kí hiệu:

$(W,+,\bullet) \leq (V, +,\bullet)$

Ngược lại, $W$ chỉ cần vi phạm một trong các điều khoản của hệ tiên đề thì tập không đủ cơ sở hình thành một Không gian vector, kí hiệu:

$\nexists (W,+,\bullet)$

Đến đây, khi trở lại với câu chuyện của thuật ngữ bên trên, để dễ hình dung hơn, cụ thể, nếu xét riêng trên một Không gian vector là $(\mathbb{R^3},+,\bullet)$ chẳng hạn, tức là Không gian vector 3 chiều trên trường số thực, ở góc nhìn hình học đúng nghĩa, trên đây, mỗi một vector xác định toạ độ bởi một bộ 3 số thực sẽ tương ứng như một điểm xác định trong không gian. Mọi thứ trông có vẻ rất đơn giản, tuy nhiên, vấn đề trọng tâm là, sẽ ra sao nếu toàn bộ các điểm trong không gian 3 chiều cũng chỉ là một phần các vector (được chứa) của (bởi) các không gian có số chiều lớn hơn với số lượng vector nhiều hơn?

Hẳn rồi, sẽ thật khó để hình dung và làm việc trên một Không gian vector (đúng nghĩa) có số chiều lớn hơn nếu thuật ngữ chỉ mang mỗi tầng ý nghĩa về hình học của các vector, hoặc mọi thứ sẽ còn càng đi xa hơn nữa nếu như Trường đang xét chẳng còn đơn giản là số hay hàm số...

### Linear span

linear combination

$\langle S \rangle$
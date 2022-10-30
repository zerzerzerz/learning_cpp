- 26, Linux下cpp文件的编译与链接，只修改了一个文件，就编译那一个文件，然后和其他文件链接即可
- 33, #include预编译指令 ，如将`#include <iostream>`将iostream这个文件加入到自己编写的cpp文件中
- 33, 头文件，cpp头文件没有.h后缀，可以包含命名空间
  - `math.h`是C风格
  - `cmath`是C++风格，去掉`.h`然后前面加上`c`
- 34, 命名空间，以及using语句
  - 可以单独使用，比如`using std::cout;`
- 36, endl与\n区别
- 40, 允许进行连续赋值，从右往左依次进行
  - short >= 16
  - int >= short
  - long >= 32 && long >= int
  - long long >= 64 && long long >= long
- 60, 大括号初始化，`int a = {};`a将会被初始化为0
  - `int a = {3}; int a{3};`是等价的
- 71, bool类型，非零为true，零值为false
- 80, 列表初始化，不允许narrow操作
- 82, 强制类型转换，C++里面用`int(x)`这样更像是函数调用
  - `(int)x`是C风格的
  - `int(x)`是C++风格的
- 90, 列表（大括号）初始化，未指定的元素将被初始化为0
- 91, 双引号引起来的，叫做字符串常量string constant
- 95, `cin.getline(char*s, int size);`遇到换行符停止，换行符不被保存在数组中，同时被丢弃
  - 95, `cin.get(char*s, int size);`遇到换行符停止，换行符不保存在数组中，但是保留在输入缓冲区
  - 这两个函数返回cin对象，因此可以继续`.get()`
- 101, C风格的字符串函数，strlen, strcpy, strcat
- 103, 读取一行，存到string里面，`getline(cin, str);`
- 117, `int* number`中`int*`是一种复合类型，表示指向int的指针
- 119, int赋给指针的时候，需要进行强制类型转换。`p_a = (int*) 0x00001234;`
- 120, `typename * pointer_name = new typename;`
- 122, `typename * pointer_name = new typename [num_elements];`
- 128, `delete [] a`释放new出来的a数组
- 128, C++在传递字符串的时候，不是传递每个char的地址，而是传递一个字符串的首个字符的地址
- 128, 对于`int*`直接cout打印的是地址，但是`char*`打印就是一个字符串，即使指向一个字符，也会遇到`\0`然后把这个字符串打印出来。因此，想要看看`char`的地址，需要强制转换为`int*`而不是`char*`
- 128, 不要将constant string赋给`char*`，不然编译器警告，需要`const char* s = "Hello, world!;`
- 134, C++存储方式
  - 自动存储，局部变量，存储在stack，后进先出LIFO
  - 静态存储，整个程序运行期间都存在
  - 动态存储，存储在heap，new和delete对应的变量
- 146, C++每个表达式都有值，对于赋值表达式，表达式的值为右值
- 173, `cin.fail(); cin.eof()`来检测是否遇到文件输入时候的EOF。同时，因为`cin.get(ch)`返回的是`cin`对象，因此可以用`while(cin)`来替换`while(!cin.fail())`
- 174, `cin.get()`返回一个`char`，`cin.get(ch)`返回的是`cin`对象
- 239, `int a; const int *p_a = &a;`虽然`p_a`是一个指向const int的指针，但是可以通过`a = 12;`来修改a的值
- 239, `const int *`不能被用来初始化`int *`，不然就可以通过指针修改const了，很荒谬
- 259, 函数指针，将函数名称替换为`(*p_func)`即可，`p_func`为函数指针的名称
- 261, 函数指针的一些细节，以及利用`auto`自动推断
- 261, `int (*pf[])(int, int);`，`[]`的优先级更高，因此`pf[]`先表示一个数组，然后数组中每个元素的类型都是`int (*) (int,int)`
- 262, `const double * (*pa[12])(const double*, const int) = {f3, f3, f3};`
  - `pa`是数组，`pa[12]`表示数组规模是12
  - `*pa[12]`里面的`*`表示每个元素都是指针，每个元素指向`const double* (const double*, const int)`这类函数
- 262, `const double * (*(*pd)[3])(const double *, const int) = &pa`
  - `*pd`表示`pd`是一个指针
  - 后面的`[3]`表示`pd`指向一个数组，这个数组有3个元素
  - `*(*pd)[3]`中的第一个`*`表示数组中每个元素都是指针，每个指针指向一个函数
  - `pd`是指向数组`pa`的指针，因此也可以`auto pd = &pa`
- 265, `typedef const double * (*p_f3)(const double*, const int);`这样以后声明指向`f3`这个函数的指针的时候，直接`p_f3 tmp = f3;`即可
- 270, 内联函数，相当于将函数那里直接替换，不需要像普通函数那样跳转到函数地址那里再return回来
- 275, 引用一旦和某个变量绑定之后，就一直跟着这个变量了
- 302, C++允许结构`struct`进行赋值
- 303, 非模板函数，显式具体化模板，模板函数
- 317, 头文件存放各种结构声明以及函数原型，不要定义函数，否则如果同一个程序的两个文件都include了这个头文件，将会对同一个函数进行重复定义
- 319, 一次编译两个文件
- 319, 头文件管理，`#ifndef`和`#endif`
- 326, 三种链接性
  - 外部链接性，可以在该文件外部访问
  - 内部链接性，只能在该文件内访问
  - 无链接性，只能在当前作用域(scope)访问


Java知识点



## 一、  Java简介

1、 了解JAVA的三个版本：JavaSE，JavaEE，JavaME

2、 理解JVM的概念及其机制（很重要），涉及Java跨平台（跨平台是相对概念，不绝对）

3、  Java API的两层含义： （1） Java工具包（编程者调用）；（2）JAVA 技术文档（供编程时查阅参考）

4、  掌握两个命令行命令： javac（用于编译， 编译后生成.class文件）， java（运行 .class文件 ）  





## 二、Java基础语法 （结合C语言比较学习）



### 1、 第二周： 原始数据类型（8+1）+ String + 运算符



```java
// package c1;

/**
 * 知识点
 * 1、Java程序基本结构
 * 		1.1 类头（注意public、类名、源文件名的关系）
 * 		1.2 方法头（main方法， 注意： main方法头的五部分）
 * 		1.3 其它语句 
 * 2、原始/基本数据类型(8种)
 * 		2.1 在表达式中,整数被视为int类型
 * 		2.2 带小数点的数默认为double浮点型,包括在赋值语句中, 见37\38行
 * 		2.3 整型全都可以自动转为浮点型, 见36行代码: l为64位long型,也可自动转换为float型
 * 		注:有些教材将void归为数据类型
 * 3 String类型 (字符串)
 * 4 运算符,注意: 求反~,异或^, 移位<<,>>,>>> 
 *  
 * 
 */
public class HelloJava {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		// 数据类型
		boolean bo = true ;
		// 整型
		byte by= 2 ; 
		by += 2;
//		by = by + 2; 
		/* 2在非赋值语句中默认为int, (注意对比理解19\20\21行代码)
		 * 等号右侧的(by+2) 会转换为int类型
		 * 等号左侧为byte类型, 右侧为int类型, 长型不能自动转为短型,所以21行语法错误
		 */
		int i = by + 2 ;
		long l = 2 ;
		// 浮点型
		float f = l ;
//		f = 1.2 ; 	// 1.2默认为double, 所以此句语法错. 对比理解21行
		f = 1.2f;
		double d = 1.2 ;
		// 字符型
		char ch = 'a'; 	// 单引号中间不能为空'',但可以是空格' '
		ch = '\\' ; 	//   \转义符
		ch = '"'  ;
		ch = '\'' ;
		ch = '\uFFFF' ; // \\u后面跟4位16进制,表示一个字符
		ch ++ ; 	// 当前字符(表中)的下一个
		ch += 1 ;	// 本句语法正确, 注意与45行的区别
		ch -- ; 	// 当前字符(表中)的下一个
//		ch = ch + 1; // 1被识别为int, =右侧(ch+1)为int类型,=左侧为char, 不能自动转换,故错误
		ch += 2 ;
		ch *= 2 ;
		
		// String类型
		String str = "" ; // String区别于char类型, 使用双引号括起来, 中间可为空
		str = "123\"" ; // 字符串中间需要出现", 需要\转义符
		for (int j = 0; j< str.length() ; j++) 
			System.out.println(str.charAt(j)) ; // String类提供了很多方法
	}

}

```



### 2、 第三周： 



#### 2.1 基础语法： 数据两种类型+ 三种注释 + 控制结构 + 数组

- 数据类型可分为两大类：原始类型和引用类型 （参考： https://cloud.tencent.com/developer/article/1668367）
- 三种注释格式： 注意 /** */ 可被javadoc命令解析输出 .html文档（即API）
- 控制结构
  - ？ ： 表达式， 见下面代码25行，注意它与if语句的等价转换（26~29行）
  - switch（exp）： 其中exp的类型限制为：byte ,short , int , char,及其包装类，以及枚举和String(JDK1.7) （参考： https://blog.csdn.net/weixin_28750379/article/details/114595592）
  - for增强型：例见42行， 注意理解 小括号中： 后为要遍历的数组； ：前为临时变量（每次从数组取一个元素赋值给这个临时变量， 注意声明临时变量时，数据类型与数组的类型一致）
  - 数组： 
    - 数组的两种初始化语句格式： 
      - 使用new关键字， 35行
      - 使用{} 直接写数据， 38行
    - 二维数据： 可以视为一维数组， 其数组元素为若干一维数组
      - 二维数组常规初始化（类似一维数组）， 45、46行
      - 变长二维数组， 见47~52行。



```java

public class H2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		// 1 数据的两种类型： 
		// 	（1）原始、基本类型（8+1）；
		// 	(2) 引用类型： 数组名，对象名str
		String str = "123" ;
		
		// 2 注释三种
		/*
		 * 一般多行
		 */
		/** 
		 * 带语法的
		 * @author Administrator
		 * c:\javadoc H2.java 
		 * ==> H2.html,API(类的电子说明)
		 */
		
		// 3 控制结构
		int i = 1;
		// 3.1 ? :
		boolean is_Odd = (i%2==0)? true:	false ; 
		if (i%2==0 ) 
			is_Odd = true;
		else
			is_Odd = false;	
		
		System.out.println(is_Odd);
		// 3.2 switch(exp)
		// 3.3 for的增强型
		boolean[] array1 ; 
		array1 = new boolean[10] ; 
		// 先声明后初始化,数值型数组单元值默认0；引用类型默认null
//		array1[0] = 1;
		int[] array2 = {1,2,3} ; // 声明的同时初始化
		for (i = 0;i< array1.length ; i++) 
			System.out.println(array1[i]);
		
		for (boolean b :array1) 
			// 遍历数组（集合），每次取数组的一个元素赋值给b
			System.out.println(b);
		int[][] a2d = new int[3][2];
		int[][] array2D0 = {{0,1},{1,2},{2,3} } ;
		int[][] array2D = 
			{
					{0},
					{0,1},
					{0,1,2}
			} ; // 变长数组
		for (i = 0 ; i<array2D.length ; i++)
			System.out.println(array2D[i].length);
		
	}
	
}

```



#### 2.2 面向一般情况下，类中的代码需要通过实例化对象间接访问对象初步

- 面相对象相关语法是Java的核心， 面相对象包含两个基本概念： 类 和 对象
- 类是Java程序的基本单元， Java编程首先写一个类
- 类是什么？ 类是用Java语法对一类事物的抽象，也代表Java中==一种数据类型==， 用于声明变量
- 类 = [属性s] + [方法s]
- 类中代码如何被访问？ 对象！ 一般情况下，类中的代码需要通过实例化对象间接访问
- 注意： 程序入口main方法被包含在类中，但它不属于类的成员， 是一个特殊方法。



```java
// 类的结构 = 属性s + 方法s
// 类是一类事物的抽象，也代表一种数据类型
// 对象： 一般情况下，类中的代码需要通过实例化对象间接访问

public class Circle {
	// 1 属性（成员变量）: 半径，颜色
	// 2 行为（成员方法）：
	double r ;
	double calcArea() {
		return Math.PI * Math.pow(r, 2) ;
	}
    
	public static void main(String[] args) {
		Circle c = new Circle() ; // 声明一个Circle类型的变量c， 并初始化（即：实例化）
		c.r=10 ; // 访问类中成员变量、成员方法： 通过对象名（就是变量名c）间接访问
		System.out.println(c.calcArea());
		
	}
}
```





## 三、Java面相对象

### 1、 第三周： 面向对象-1

- 1 面向对象的三个特征： 封装、继承、多态
- 2 2 命名规则--驼峰规则： 不强制！！
  - （1）类名： 首字母大写Clock，BigClock
  - （2）变量名、对象名、方法名：首字母小写， 如：BigClock bigClock；
  - （3）常量： 全部字母大写，Math.PI ， 单词间加_, 例如：BIG_CLOCK
- 3 引用类型、基本类型变量的区别，
  - 基本类型，变量保存值本身，如： int i = 10 ；
  - 引用类型：保存首地址
- 4 变量3中情况（3种不同位置）：
  - （1） 5-8行 ： 成员变量（变量本质上都需先声明、再初始化、再使用）
    - 特殊情况：基本类型的成员变量 可以 不显性初始化，自动分配默认值
  - （2） 14行： 形参（也是局部变量，但是一般不需显性初始化）； 
  - （3） 11行： 局部变量（必须显性初始化）
- 5 成员变量 可以 与 方法中的局部变量（一般是形参）同名！如： 14行的方法
  - (1) 就近原则
  - (2) 为了与局部变量区分， 使用this关键字：this.成员变量名
- 6 修饰符
  - 类的修饰符：本周掌握类前的public修饰符
    - 写public： 类的访问不受限； 且， 文件名必须与类同名
    - 不写public： 包访问权限（包暂可简单理解为文件夹），该类只能在同文件夹下被其它类访问（用作数据类型声明变量）
  - 成员（包括成员变量和方法）修饰符，本周掌握两种：
    - 3p+不写：public、protected、private、 + 不写（不写就是包权限）
    - final： 用于声明常量， 如第7行声明了一个包权限的常量PI
- 7 面相对象三部曲
  - Step1：声明类（两种用途）
    - （1） 类后续用作数据类型，声明对象并实例化
    - （2） 有时声明一个测试类，仅包含main方法
  - Step2： 使用类，即：用Step1的类声明一个变量（对象），然后初始化（实例化）
  - Step3： 访问step1类中的代码， 语法形式：
    - 对象名.成员变量, 见20行
    - 对象名.成员方法(), 见21行
- 8 面相对象的三个新概念（新叫法）
  - 类： 声明的类， 本质是一个数据类型（测试类除外）
  - 对象： 见18行， 用类声明的变量称为对象
  - 实例化： 实例化就是变量初始化， 在面向对象语言中称为实例化，见19行。 
    - 注意实例化语句格式： new + 与类同名的方法（）







```java
// Circle.java
public class Circle {
	// 1 属性（成员变量）: 半径，颜色
	// 2 行为（成员方法）：
	Student stu ; // stu = null
	int[] ary ;
	final double PI = 3.1415; //  
	double r ; // r=0.0; 
	// 成员变量也要先声明后初始化，再使用。但是，基本类型的可以不显性初始化
	double calcArea() { // 形参不需要显性初始化
		int i;
		return Math.PI * Math.pow(r, 2) ;
	}
    double calcArea(double r) { // 形参不需要显性初始化
		return Math.PI * Math.pow(r, 2) ;
	}
	public static void main(String[] args) {
		Circle c ;
		c = new Circle() ; // step1: 声明类；step2:实用类：声明对象，实例化 
		c.r=10 ; // step3： 通过对象名c.
		System.out.println(c.calcArea());
		
	}
}

class Student{
	int age;
	String name ;
	String zhuanye;
	
}
```





### 2 第四周： 面向对象-2

#### 2.1 static修饰的成员--类变量、类方法

（1）访问方式不同

- 实例成员，一种访问方式： 先创建实例化对象，然后通过  对象名.成员名   方式访问
- 静态成员,两种访问方式: 1. 同实例成员;2. 通过 类名.成员名 的方式访问

(2) 使用上的意义

- 注意通过案例理解静态成员变量的共享性
- 静态方法除了访问方式快捷(用类名直接访问),其它与实例方法无差别

 

```java
public class Circle {
	static int i ; 				// 静态变量，用于共享
	int j ; 					// 实例变量
    static void setA(int a){ 	// 静态方法
		a = 1 ;
	}	
	void setB(int a){ 			// 实例方法
		a = 2 ;
	}
    public static void main(String[] args) {
		// TODO Auto-generated method stub
		Circle.i = 3 ;
		Circle c1 = new Circle() ;
        Circle c2 = new Circle() ;
		c1.j= 4 ;	// 静态变量有两种访问方式, 见本行和第12行
        // 注意对比17~23行的输出,理解静态变量的共享性(只有一个存储单元)
        System.out.println(c1.i); // i =?
		System.out.println(c2.i); // i =?
        System.out.println(Circle.i); // i =?
        c2.i = 10 ; 
        System.out.println(c1.i); // i =?
		System.out.println(c2.i); // i =?
        System.out.println(Circle.i); // i =?
        // 实例变量的存储单元是各自独立的, 见25-26行
        System.out.println(c1.j); // j =?
		System.out.println(c2.j); // j =?
        
        // 静态和实例方法的访问见29~32
		c1.setA(5) ;
        Circle.setA(6) ;
        
        c1.setB(7) ;
    }

}
```



#### 2.2 方法及形参（涉及基本类型和引用类型，传值、传址）

几个相关概念:

- ==方法签名== = 方法名 + 形参列表
- 形参列表的区别: 
  - 先比较形参个数是否相同,
  - 如个数相同, 再比较形参次序
  - 如果个数和次序都相同, 则判断形参列表是相同的
    - 例: 3和6行的形参列表相同
- 在同一个类中, 语法上==不允许出现多个方法签名相同的情况==
  - 例: 第三行和第六行方法签名相同, 是语法错误
- ==方法重载==: 一个类中, 方法名相同+形参列表不同 的多个方法间形成方法重载现象
  - 下例中, 两个setA方法, 两个set方法, 均为重载
- ==传值和传址==
  - 当某个形参为基本类型, 则属于传值
    - 方法调用时, 若在方法中改变了形参的值, 不会影响实参(方法调用后实参仍保留调用前的值)
    - 例: 3行的声明, 和25\26行的调用
  - 当某个形参为引用类型(数组或对象), 则属于传址
    - 方法调用时, 若在方法中改变了形参的值, 主程序中实参的值会被修改
      - 例1: 30\31行方法调用, 对象做形参, 其声明见16行
      - 例2: 35行的方法调用, 数组做形参, 其声明见12行



```java
public class Circle {
	int j ; 				
	void setA(int a){ // 基本类型
		a = 100 ;
	}
    //void setA(int b){ // 与第三行方法签名相同，语法错误
	//	a = 100 ;
	//}
    void setA(double a){ // 基本类型
		a = 100 ;
	}
	void set(int a[]){ // 引用类型！ 会影响主程序实参
		if (a.length > 0) 
			a[0] = 10 ; // 对形参修改会影响实参
	}
	void set(Circle c){ // 引用类型！ 会影响主程序实参
		c.j = 100 ;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Circle c1 = new Circle() ;
        Circle c2 = new Circle() ;
        int j = 10 ;
        c1.setA(j) ;  	// setA的形参为基本类型, 所以传值(实参值返回后不受影响) 
        c1.setA(c1.j) ;
        System.out.println(j); // 返回主程序, j值和调用前值相同
        System.out.println(c1.j); //  // 返回主程序, c1.j和调用前值相同
        
		c1.set(c1);  // 形参为对象(引用),方法中修改了形参对象内部的成员变量值, 返回后实参对象也被修改
        c1.set(c2);
		System.out.println("i="+ c1.j); // i =?
        System.out.println("i="+ c2.j); // c2.i =100
		int i[] = {1,2,3} ;
		c1.set(i); //  值传递： 当形参为基本类型
		c1.setA(i[0]); // 数组元素为基本类型
		for (int j = 0 ; j<i.length; j++)
			System.out.println(i[j]);
		// a= ? 1
		// 2
		
	}
}
```



#### 2.3 包

- 包本质上是文件夹

- 默认包（即无包， 没有package语句）

- 在IDE下创建包和在文件浏览器下创建文件夹没区别

- Java没有创建包的命令

- 包对应的文件夹是在默认路径下

- 如果在包(p1)中声明一个类, 那么这个类的源文件的首行有效语句必须是 package p1

- 在某个类中, 访问另一个包中的类, 需要使用导入语句, 例如想访问p1包中的类: import p1.* ;   这个语句放在package语句后, 一般在类的声明前

-  ++ 长名格式和短名格式

- 什么时候不用import语句 ？ 

  - 同一包下面的类可以互相访问，不需impoert； 跨包访问则需要import 语句
  - 使用JDK提供的java。lang（核心类库包）下的类， 如String， Math， 不需要import， JVM会自动查找。
  - 其它包中的类不能访问默认包中的类， 因为不在同一包下、且对于默认包无法使用import语句(因为默认包没有包名)
  - 但是在默认包中的类可以访问有包中的类, 如: Hello类可以访问p2包的P2类

  

   

例： 包的结构如下

![image-20260331140606188](Java知识点.assets/image-20260331140606188-1774937186063-1.png)



```java
// 1
package p2;
import p1.*; // 导入p1包中的所有可见的类

public class P2 { 
	P11 p ;  // 导入后, 可直接使用类名声明对象(P11类的声明见下方代码)

}
```

```java
// 2
package p1;

public class P11 {
    
}
```

```java
// 3
package p1;

import p2.*;

class P1 {
	// Hello h ;  在有包类中, 不能访问默认包中的类, 如:本例中, 无法用默认包的Hello声明对象. 
}
```

```java
// 4 
import p2.*;
public class Hello {
	P2 p; // 在默认包,可以使用import语句, 进而可以使用p2包中的类
} // 
```



#### 2.4 构造方法和this

相关概念:

- 什么是构造方法 ? 
  - 与类同名
  - 没有返回类型(注意: 第11行有返回类型void, 所以它不是构造方法,是普通方法; 第11行的方法与构造方法间无重载现象--它们本质不同)
  - 用于创建实例化对象

- 构造方法没有返回类型(注意: 无返回类型和void 的区别)
- 构造方法的访问权限(3p+1不写)
- 构造方法的重载(方法签名不同,如第4和第7行两个构造方法)
- 构造方法的形参一般用于显性初始化成员变量, 形参名常与成员变量同名, 为区分两种变量名, 使用 this.成员变量(见代码第9行)
- 在构造方法中, 可以this([形参])访问其它构造方法, 但必须是这个方法的第一个有效语句. (见代码第8行和第5行,因为存在循环关系,所以如果要写的话只能保留一行)





```java
public class Circle {
	double  radius ; 
	// 构造方法
	Circle(){
//		this(10) ; // 第5行和第8行存在循环关系,所以如果要写的话只能保留一行
	}
	Circle(double radius){
		this() ;		// this() 调用本类的无形参构造方法
		this.radius = radius ; //  this.radius 调用本类的成员变量
	}
    void Circle(int i){
		this.i = i ; // 
	}
	void setA(int a){ // 基本类型
		a = 100 ;
	}	
	void setA(double a){ // 基本类型
		a = 100 ;
	}	
	void set(int a[]){ // 引用类型！ 会影响主程序实参
		if (a.length > 0) 
			a[0] = 10 ; // 对形参修改会影响实参
	}
	void set(Circle c){ // 引用类型！ 会影响主程序实参
		c.i = 100 ;
	}
//	void set(int b[]){ // 形参列表=数据类型s + 其次序
//		if (a.length > 0) 
//			a[0] = 10 ; // 对形参修改会影响实参
//	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Circle c1 = new Circle() ;
        Circle c2 = new Circle(10) ; // 利用带参数构造方法,对成员变量直接初始化
		c1.radius = 5;   // c1 中的radius需要另外赋值 (默认为0)
		
		
	}

}
```



### 3 第七周- 继承

声明类本身就是代码复用的开始， 继承深化了代码复用， 并进一步涉及多态性。

基本概念： 

- 基类、超类、父类
- 子类、派生类
- UML类图
- 成员变量隐藏和方法覆盖
- super. 和 super()



#### 3.1 继承与访问权限

- 下面代码： Son类通过 extends Parent， 继承了Parent类。 Son是子类， Parent是父类
- 访问权限： 
  - 类的访问权限： public 和 不写（包权限）， 注意： 类如果是包访问权限， 不能被其它包中的类继承。
  - 成员访问权限： 3p+不写。 
    - protected：
      - 当父类和子类同包，protected可以视为包权限
      - 当父类和子类不同包， protected成员仅可在子类内部被访问（被保护），见下方第二段代码； 其它一般异包类不能访问（见下方第三段代码）

```java
package p1;

public class Parent {
	public 	int a;
	private int b; 
	protected int c;
	int d;
}
```



```java
package p2;
import p1.Parent;

public class Son extends Parent{
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Son s = new  Son();
		System.out.println(s.a);
//		System.out.println(s.b);
		System.out.println(s.c);
//		System.out.println(s.d);	
	}
}
```

```java
package p2;
import p1.*;

public class P2 {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Son s = new  Son();
		System.out.println(s.a);
//		System.out.println(s.b);
//		System.out.println(s.c); 
//		System.out.println(s.d);	
	}

}
```



#### 3.2 成员变量隐藏和方法覆盖

- 隐藏： 当子类成员变量名和父类成员变量名同名，则发生隐藏现象
  - 按就近原则
  - 如果想在子列访问被隐藏的父类成员变量， 可使用 super.变量名
- 覆盖： 
  - 注意与重载的区别： 重载是同一个类中，方法名相同、形参列表不同，多于两个方法间的一种语法现象
  - 覆盖是继承中的子类和父类（包括间接父类）的两个方法间的语法现象
    - 识别条件： 方法签名相同 + 返回类型兼容
      - 返回类型兼容： 子方法返回类型是父方法返回类型的子类型（被兼容类型）
    - 子类覆盖方法的访问权限只能放宽
    - 不能覆盖final和static修饰的方法
    - 抛出的异常不能超出父类抛出的范围（抛出父类异常类型或其子类型）

#### 3.3 super和super（）

- super. 访问直接父类成员
- super([参数]): 调用父类构造方法（子类构造方法一定会被调用一次某种格式的父类构造方法）
  - 默认调用： 如果子类不直接写出， 则默认调用super（）无参数的父类构造方法
    - 如上面三段程序中， Son的默认构造方法、自动调用了Parent的默认构造方法
  - 显性调用： 子类构造方法第一条有效语句
    - 见下面两段程序，在父类Parent中添加了一个带形参构造方法后， 子类Son报错。为什么 ？ 
      - 修改方法1： 见第三段程序5-7行。因为第二段的Son类只有默认构造方法， 该默认构造方法会自动调用无形参super（）， 但是父类因为只显性声明了一个带形参构造方法，已不存在无形参构造方法，所以发生错误。 问题解决：第三段在子类中显性声明构造方法，并显性调用带形参的父类构造方法。 



```java
package p1;

public class Parent {
	public 	int a;
	private int b;
	protected int c;
	int d;
	public Parent(int a) {
		this.a = a ;
	}
}
```

```java
package p2;
import p1.Parent;

public class Son extends Parent{
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Son s = new  Son();
		System.out.println(s.a);
//		System.out.println(s.b);
		System.out.println(s.c);
//		System.out.println(s.d);	
	}
}
```

```java
package p2;
import p1.Parent;

public class Son extends Parent{
    public Son(){
        super(1);
    }
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Son s = new  Son();
		System.out.println(s.a);
//		System.out.println(s.b);
		System.out.println(s.c);
//		System.out.println(s.d);	
	}
}
```



### 4 第八周 - 抽象类

#### 4.1 补充： this（）和super（）

第二段代码19行语句this（）调用了自己类中的无形参构造方法，说明：

- 1、 一般情况下，父类构造方法 super（形参）总是被子类构造方法通过显性或隐性方式调用；
- 2、 但子类构造方法 出现this（）语句后， 父类构造方法的显性和隐性super（）调用均被取消， 而是通过 this（） 间接调用另一个构造方法中的super（）
  - 本利中，代码2中第11行this（）调用第6行无形参构造方法Son（），间接（仍以第一行的形式）调用super（1）

 

```java
// 代码1
package p1;

public class Parent {
	public Parent() {
		System.out.println(1) ;
 	}
	public Parent(int i) {
		System.out.println(2) ;
 	}
}
```

```java
// 代码2
package p2;
import p1.Parent;

public class Son extends Parent{
	public Son(){
        super(1);
        System.out.println(3) ;
    }
	public Son(int i){
		this();
		System.out.println(4) ;
    }
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Son s = new  Son(1);

	}
}
```



#### 4.2 Object类

- Java是单根结构， 每个类只有一个直接父类
- Object是Java中的特殊类， 是Java中唯一没有父类的
  - Object是所有类的公共超类
  - 如果一个类没有显式声明继承关系，则它的父类默认是Object ( 下面代码3与上方代码1等价， 默认继承Object )
- 同一和相等
  - 对对象来说： 同一比较地址； 相等比较内容
  - Object 的  equals（） 方法 与 “==” 等价， 是两个对象引用（地址）的比较 （同一）
- getClass（）获取对象从属的类（型）信息
- toString（）方法， 用于显式类的基本信息
- equals方法： 很多类覆盖了Object的equals方法， 使其具备相等比较的功能 ， 如String类
  - String类的新问题： 初始化使用字符串直接值和使用new String（）的区别
    - 使用直接值时， JVM只分配一个单元， 所以所有直接值的地址相同。如代码4的第2、3行， “123”拥有相同的地址， 因此str1 == str2 
      - 所以第4、5行均输出true
    -  使用new String()语句创建字符串，则每次分配新地址， 所以第7行的str1和 第8行的str2地址不同， 但内容相同
      - 所以最后两句输出 false和true



```java
// 代码3
public class Parent extends Object{
	public Parent() {
		System.out.println(1) ;
 	}
	public Parent(int i) {
		System.out.println(2) ;
 	}
}
```

```java
// 代码4
		String str1 = "123" ;
		String str2 = "123" ;
		System.out.println( str1 == str2 ) ;
		System.out.println( str1.equals(str2) ) ;
		
		str1 = new String("123");
		str2 = new String("123");
		System.out.println( str1 == str2 ) ;
		System.out.println( str1.equals(str2) ) ;
```



#### 4.3 final修饰 类和方法

final修饰变量， 即常量

修饰方法： 则该方法不能被覆盖

修饰类： 则该类不能被继承



#### 4.4 抽象类、抽象方法

- 抽象类： class前出现 abstract关键字（见代码5第4行）
- 抽象方法： （见代码5第5行）
  - 1、返回类型前出现abstract
  - 2、 没有开闭花括号（即只有方法头、没有方法体）
  - 3、 以分号结尾
- 抽象方法的访问权限问题
  - 如果抽象父类和子类在同一包下， 则抽象方法可用除private外的三个
  - 父子类异包， 则抽象方法只能用public和protected修饰

- 抽象类和抽象方法的关系：
  - 抽象类可以不含有抽象方法
  - 含有抽象方法的类一定要声明为抽象类
- 抽象类与一般类（正常类）
  - 抽象类的一般用途是被继承， 其子类可以是抽象类也可是一般类
  - 终极用途一定被一般类继承
    - 注意： 一般类继承抽象类， 语法上必须将抽象类中所有抽象方法正常化（正常方法覆盖父类抽象方法）
      - 见代码6， 21-24行
      - 属于覆盖现象
      - 子类通过一个正常方法覆盖父类抽象方法是自己正常化
      - 如果子类不覆盖父类的抽象方法，（此时子类继承了父类的抽象方法），则它也必须声明为抽象类。
- 抽象类的使用：
  - 抽象父类拥有构造方法， 该构造方法仅用于被子类构造方法调用（和普通继承中子类调用super（）一样 ）
  - 抽象父类构造方法不能出现在new后面，即不能用于创建实例化对象（代码6中第18行为错误语句）
  - 抽象类可以当做数据类型声明一个对象（见代码6中17行），但实例化时只能调用正常类的构造方法



```java
// 代码5
package p1;

public abstract class Parent {
	public abstract void aMethod() ;
	public Parent() {
		System.out.println(1) ;
 	}
	public Parent(int i) {
		System.out.println(2) ;
 	}
}
```

```java
// 代码6
package p2;
import p1.Parent;

public class Son extends Parent{
	public Son(){
        super(1);
        System.out.println(3) ;
    }
	public Son(int i){
		this();
		System.out.println(4) ;
    }
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Son s1 = new  Son(1);
        Parent s2 = new  Son(1);
        // Parent p1 = new  Parent(1);
	}
	@Override
	public void aMethod() {
		// TODO Auto-generated method stub
		
	}
}
```



### 5 第九周 - 泛型、类的组合

#### 5.1 泛型

即类型做参数， 有4+1种情形：

- 0 非特殊语法的: 利用Object实现泛型（见：GeneralType1）, 缺点是Object对应所有类, 范围太广

- 1 泛型类 （见：class GeneralType2<Type2> ） , Type2为泛型, 可以声明成员变量, 声明形参, 做方法的返回类型

- 2 泛型方法 (见：GeneralMethod) ,  泛型做形参声明类型

- 3 ？通配符 (见: ShowType 类) ,  

  - 注意:泛型类和泛型的区别
  - 此时, ==泛型类==做形参的声明类型, 尖括号中使用? ,即: GeneralType4<?> o (见第12行)

- 4 泛型的限制, (见: GeneralType5)

  - 上面1-3实现的泛型没有限制, 与Object实现的泛型相似,缺点都是范围太广
  - 语法: class GeneralType5 <Type5 extends Number>, 本利中,利用extends使实参类型只能是Number及其子类
  - 注意: 在泛型的限制语法中, extends后 不仅是父类, 还可以是接口 

  

```java
// 利用Object实现泛型
class GeneralType1 {
    Object object;
    public GeneralType1(Object object) {
        this.object = object;
    }
    public Object getObj() {
        return object;
    }
}
public class GenericsTester1 {
    public static void main(String[] args) {
        // 传递参数为int类型的2，会自动封箱为Integer类型的对象。
        GeneralType1 i = new GeneralType1(2);
        // 传递参数为double类型的0.33，会自动封箱为Double类型的对象。
        GeneralType1 d = new GeneralType1(0.33);
        System.out.println("i.object=" + (Integer) i.getObj());
        // 可以通过编译，但运行时异常
        System.out.println("i.object=" + (Integer) d.getObj());
    }
}

```

```java
// 泛型类
class GeneralType2<Type2> { // <>中的类型，作为形参
    Type2 object;

    public GeneralType2(Type2 object) {
        this.object = object;
    }

    public Type2 getObj() {
        return object;
    }
}
public class GenericsTester2 {
    public static void main(String[] args) {
        GeneralType2<Integer> i = new GeneralType2<>(2);
        GeneralType2<Double> d = new GeneralType2<>(0.33);
        System.out.println("i.object=" + (Integer) i.getObj()); // 意义 ？
//      System.out.println("i.object=" + (Integer)d.getObj()); // 不能通过编译
    }
}

```



```java
// 泛型方法
class GeneralMethod {
    <Type3> void printClassName(Type3 object) {
        System.out.println(object.getClass().getName());
    }
}
public class GenericsTester3 {
    public static void main(String[] args) {
        GeneralMethod gm = new GeneralMethod();
        gm.printClassName("hello");
        gm.printClassName(3);
        gm.printClassName(3.0f);
        gm.printClassName(3.0);
    }
}

```



```java
// ？通配符
class GeneralType4 <Type4> {
    Type4 object;
    public GeneralType4(Type4 object) {
        this.object = object;
    }
    public Type4 getObj() {
        return object;
    }
}
class ShowType {
    public static void showType(GeneralType4<?> o) {  // 非泛型格式（正常）
    // <Type3> void printClassName(Type3 object) { // 泛型格式
        System.out.println(o.getObj().getClass().getName());
    }
}
public class GenericsTester4 {
    public static void main(String[] args){
        GeneralType4<Integer> i = new GeneralType4<>(2);
        GeneralType4<String> s = new GeneralType4<>("hello");
        ShowType.showType(i);
        ShowType.showType(s);
    }
}
程序的运行结果如下：
java.lang.Integer
java.lang.String

```



```java
// 泛型的限制
class GeneralType5 <Type5 extends Number> {
    Type5 object;
    public GeneralType5(Type5 object) {
        this.object = object;
    }
    public Type5 getObj() {
        return object;
    }
}
public class GenericsTester5 {
    public static void main(String[] args){
        GeneralType5<Integer> i = new GeneralType5<>(2);
            // GeneralType5<String> s = new GeneralType5<>("hello"); // 非法，Type只能是Number或Number的子类
    }
}

```



#### 5.2 类的组合

即: 一个类的成员变量包含若干对象

例如: 可以声明一个线段类, 线段由任意两点组成, 点可以单独声明类, 这样, 线段类就是由 点类声明的成员变量(对象) 组成



```java
public class Point   //点类 
{
   private int x, y;  //coordinate
   public Point(int x, int y) { this.x = x; this.y = y;}
   public int GetX()  {  return x; }
   public int GetY()  {  return y; }
}
class Line   //线段类
{
   private Point  p1,p2;     // 两端点
   Line(Point a, Point b) {  
      p1 = new Point(a.GetX(),a.GetY());
      p2 = new Point(b.GetX(),b.GetY());
   }
    public double Length() {  
      return Math.sqrt(Math.pow(p2.GetX()-p1.GetX(),2) 
                    + Math.pow(p2.GetY()-p1.GetY(),2));
    }
}

```



#### 5.3 包装器类

Java为8种基本类型提供了相应的类

| byte    | Byte      |
| ------- | --------- |
| short   | Short     |
| int     | Integer   |
| long    | Long      |
| double  | Double    |
| float   | Float     |
| char    | Character |
| boolean | Boolean   |



包装器类提供了很多实用的方法(见下方代码): 

 

```java
String str = "123";
int i = Integer.parseInt(str) ; // 将包含纯整数数字的字符串转换成对应的整数
int j = Integer.max(i, 100) ;
str = Integer.toHexString(64) ;
```



自动装箱和拆箱:

```java
// 装箱
Integer x = 10 ; // 等价于 Integer x = Integer.valueOf(10) ;
// 拆箱
int y = x ; // 注意: y是基本类型变量, x是对象. 等价于 int y = x.intValue();
```



补充: Number类, 是Integer. Double,Float, Long, Short, Byte, BigInteger, BigDecimal的超类







### 6 第11周 - 接口和多态

#### 6.1 接口

##### 基本语法形式, 见代码1

```java
// 代码1
public interface InterFace_1 { 	// 1 接口得访问权限不写是包权限 (与成员不写权限有区别)
	double PI = 3.14 ; 		 	// 2 成员变量可以是基本类型\也可以是引用
	String str ="123" ;			// 3 前面可省略 public static final 
	Apple a = new Apple();	
	void method_1() ; 			// 4 抽象方法, 前省略public abstract
	
	default void method_2() {	// 5 default方法, 只能通过实例对象访问,可以被实现接口的类覆盖, 前可省略public
		System.out.println("m2");
        method_4() ;
	}

	static void method_4() {	// 6 static方法, 比较特别, 只能用接口名访问,不能被继承,不能通过实例对象访问,在接口内部可被调用(见第10行),但不能写this.method_4()
		System.out.println("m4");
	}
    private void method_5() {	// 7 只能被接口内部的实体方法调用
    }
    							// 8 注意,接口中没有构造方法
}

class Apple{
	int i;
}
```



##### 接口的用途(见代码2):

- 被类实现
  - 类名后implements关键字
  - 如果接口中有抽象方法,则正常类必须实现所有抽象方法; 否则这个类应声明为抽象类
  - 虽然说类实现了接口,但本质和继承相似, 类可以按继承关系使用接口常量,实现抽象方法,继承default方法; (注意不能继承static方法和private方法)
  - ==一个类可实现多个接口==(注意:继承是单根)
- 被其它接口继承
  - 接口之间可以继承
  - 使用extends关键字
  - ==一个接口可以继承多个接口== (与类的单继承不同) 



```java
// 代码2
public class Hello implements InterFace_1, InterFace_2 { // 1 类可以实现多个接口
	@Override
	public void method_1() {							// 2 如果接口中有抽象方法, 在实现接口的类中必须覆盖实现该方法; 否则这个类应声明为抽象类
		// TODO Auto-generated method stub
		System.out.println(str);						// 3 继承了接口常量
	}
	public static void main(String[] args) {
		Hello h = new Hello() ; 						// 4 类实现接口后,可正常使用
        System.out.println(h.str);
        h.a.i = 10 ;									// 5 注意: 接口中的引用常量,是地址不能改变, 内容可改
		System.out.println(h.a.i);
	}
}
```



##### 函数式接口

- 首先明确这是个接口
- 其中有且仅有一个抽象方法(其它成员不限)
- 函数式接口的实现过程可用lambda表达式简化

>  传统的函数式接口实现过程：
>
> - 1 声明一个函数式接口（见代码3-接口T，l2）
> - 2 声明一个类实现这个接口（见代码3-IMTest类，l6）
> - 3 在一个程序中声明并创建类的实例化对象，再调用接口中的抽象方法（已在类中被覆盖）



```java
// 代码3
interface T { 			 // 1 这个接口只有一个抽象方法， 所以是函数式接口
    int i =100 ； 		// 2 除了唯一的抽象方法，可以有其它合法内容
	void info() ;
}
class IMTest implements T{
	@Override
	public void info() {
		// TODO Auto-generated method stub
		System.out.println("Hello Lambda_1");
	}
}
public class InterfaceTest {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		IMTest ift = new IMTest() ;
		ift.info();
	}
}
```



##### Lambda表达式

上面的代码3，可以用Lambda表达式简化， 见下方代码4.

> Lambda表达式的意义：
>
> 1 用一个表达式代替了实现函数式接口的类
>
> 2 表达式本身也是对抽象方法的实现， -> 前传递参数； -> 后的是方法实现的语句s。
>
> 3 同时创建了这个类实例化对象
>
> 
>
> Lambda表达式应用的套路：
>
> 1 前提：有一个函数式接口
>
> 2 存在用接口名声明对象的语句（独立[见代码4-15行]的或作为形参[代码5-3行]） ， 如： T t
>
> 3 在需要对象实例化时（2中的 t ）， 就可以用 Lambda表达式。



```java
// 代码4
interface T { 			 // 1 这个接口只有一个抽象方法， 所以是函数式接口
    int i =100 ； 		// 2 除了唯一的抽象方法，可以有其它合法内容
	void info() ;
}
public class LambdaTest {
	public static void main(String[] args) {
		/* 3 注意15行语句：
			（1）T t ； 是用上方的函数式接口声明一个对象；
			（2）等号右侧需要一个对象实例化的语句，这里用lambda表达式代替， 意思是： 
				2.1（等号右侧）声明了一个类（匿名的），该类实现了等号左侧的T接口;
                2.2 T接口有一个抽象方法需要实现， 实现的语句块即 -> 右侧的部分
           4 创建了实例化对象后， 要显式调用被实现的接口中的那个方法（该方法被15行->后的语句覆盖）， 见第16行
		*/
		T t = ()-> System.out.println("Hello Lambda");  // 独立的用函数式接口声明对象并实例化
		t.info();
	}
}
```



```java
// 代码5
public class LambdaTest_1 {
	void myPrint(T t) { 					// 1 用函数式接口声明一个形参
		t.info();
	}
    public static void main(String[] args) {
		// TODO Auto-generated method stub
		LambdaTest_1 lt = new LambdaTest_1() ;
		lt.myPrint(
            ()->{System.out.println("Hello Lambda_1");} // 2 实参需要传递一个实现T的类的实例化对象, 则用lambda简化
        ); 
	}

}
```





#### 6.3 多态

多态(继承和接口都与多态相关)

- 梁的定义: 使用  父类对象  的地方都可以使用(或传递) 子类的对象
- 父类对象: 即父类或接口声明的对象



##### 1 对象(引用变量)转型

- 任何一个（直接或间接）超类的类型（向上转型）； [  ]

```java
// 假设有父类Parent和子类Child, 向上转型语句如下:
Child c = new Child() ; // 子类对象
Parent p = c  ;    		// 隐式向上转型
p = (Parent)c ;			// 显示向上转型		
```



- 对象所属的类（或其超类）实现的一个接口（向上转型）； [见代码6-l10]

```java
// 代码6
class IMTest implements T{
	@Override
	public void info() {
	}
}
public class InterfaceTest {
	public static void main(String[] args) {
		IMTest ift = new IMTest() ;	// ift的声明类型和实际类型都是IMTest
		((T)ift).info();			// 因为IMTest实现了接口T, 所以它的对象ift可以向上转型为T,即:(T)ift
	}
}
```

- 被转为引用指向的对象的类型（唯一可以向下转型的情况）。

```java
// 假设有父类Parent和子类Child, 向下转型语句如下:
Parent p = new Child() ; // 父类引用指向子类对象
Child c = (Child)p  ;    // 向下转型
```



##### 2 方法查找

- 对于实例方法, 从实际类型(所在的类) 向上找
- 对于类方法, 总是在引用变量声明时所属的类中进行查找

##### 3 相关概念

(1) 多态

- 梁的定义: 使用  父类对象  的地方都可以使用(或传递) 子类的对象
- 父类对象: 即父类或接口声明的对象

(2) 动态绑定\也称运行时绑定

- 上面(1)情形出现时, 存在方法查找问题, 具体调用哪个方法要在运行时才能确定,故称"动态绑定"

(3) 声明类型

(4) 实际类型

```java
Parent p = new Child() ; 
// Parent是p的声明类型
// Child是p的实际类型
```







#### 6.4 (12周) 构造方法与多态问题



```java
abstract class Glyph {
    abstract void draw();
    Glyph() {
        System.out.println("Glyph() before draw()");
        draw(); 
        System.out.println("Glyph() after draw()");
     }
}

class RoundGlyph extends Glyph {
    int radius = 1;
    RoundGlyph(int r) { 
   super();
         radius = r;
         System.out.println("RoundGlyph.RoundGlyph(),  radius = " + radius);
     }
     void draw() { 
         System.out.println("RoundGlyph.draw(), radius = " + radius);
      }
}

public class PolyConstructors {
      public static void main(String[] args) {
           new RoundGlyph(5);
      }
}

```

> 上面代码中：
>
> 1、 抽象类Glyph有抽象方法draw （l2）
>
> 2、 抽象类的构造方法中调用了draw （l5）
>
> 3、 有正常子类RoundGlyph继承Glyph， 
>
> - 实现了draw方法
> - 且在方法中访问了成员变量radius
>
> 4、 子类构造方法会调用父类构造方法， ==父类构造方法中的draw只能访问子类的实体方法==
>
> 结果：  子类实体方法draw中对成员变量radius的值访问异常 （初始化为1， 但父类向下访问的结果为0 ）



- 一个引申概念： 动态绑定方法， 即子类与父类发生覆盖的方法，

  

- 构造方法的注意事项：
  - 用尽可能少的动作把对象的状态设置好；
  - 如果可以避免，不要调用任何方法；
  - 在构造方法内唯一能够安全调用的是在超类中具有final属性的那些方法（也适用于==private方法，它们自动具有final属性==）。这些方法不能被覆盖，所以不会出现前述的潜在问题。





#### 补充: 跨包访问的两种方式

> 1 使用import语句
>
> 2 直接使用长名格式： 报名全名.类名



```java
package com.java.net;

public class AClass {

}
```

例如， 有如上类的定义， 则跨包访问AClass可以用两种方式：

```java
// 方式1： 短名格式，后面直接写AClass即可
import com.java.net.AClass; 
class BClass extends AClass {
    
}
```

```java
// 方式2： 长名格式, 没有import， 则任何使用AClass的地方均需用长名格式
// 注意l5 声明和构造方法均用了长名格式
class BClass extends com.java.net.AClass {
    public static void main(String[] args){
        com.java.net.AClass ac = new com.java.net.AClass() ;
    }
}
```





## 四 Java异常处理机制 （13周）



*Java*具有简单性、面向对象、分布式、*健壮性*、安全性、平台独立与可移植性、多线程、动态性等特点。

程序都会存在大大小小的Bug。 健壮性，即指程序遇到Bug时，仍能处于运行状态（只是程序逻辑从正常执行，进入到针对异常的处理程序中），而不是跳出、死机等不受控状态。

即：Java语言（JDK）具有==异常处理机制==（一系列异常处理相关的类）

每当Java程序运行过程中发生一个可识别的运行错误时（即该错误有一个异常类与之相对应时），系统都会产生一个该异常类的对象，转而进入异常应急机制（程序），处理完成后再返回主程序； 也可能出现Java不能处理的错误， 则终止运行返回操作系统。



```java
// 代码1： 非检查型异常：数组越界异常 
// 见l7，l8
import java.io.*;
public class HelloWorld {
    public static void main (String args[ ]) {
        int i = 0;
        String greetings [ ] = {"Hello world!",  "No, I mean it!", "HELLO WORLD!!"};
        while (i < 4) { // 一般只需要程序改错，不做异常处理
        // 改：while(i< greetings.length) 
            System.out.println (greetings[i]);
	     i++;
        }
    }
}
```



- - 







### Java异常处理的3个二

#### 1 Java程序的错误分两类 (参见下图)

- Error ： Java能识别，但不能处理的， 出现这种错误Java将退出程序返回操作系统
- Exception ： Java能识别，且能控制， 即：能保证程序继续运行。（Java的异常处理针对此类）



![image-20260526082001934](Java知识点.assets/image-20260526082001934.png)





#### 2 Exception又分两类

- 非检查型： 即编译程序不扫描检查此类错误（异常）， 如： 下标越界、除0 等(见代码1).
  - 不强制，但仍可进行异常处理(见代码2)
- 检查型 ： 编译程序会扫描有声明异常抛出的方法调用， 如果没有按语法规定处理异常（两种方式）， 会报错
  - 语法强制要求进行异常处理(见代码3)



```java
// 代码1： 非检查型异常--数组越界异常--属于运行时异常 ， 一般可不做专门的异常处理
// 见l7，l8
import java.io.*;
public class HelloWorld {
    public static void main (String args[ ]) {
        int i = 0;
        String greetings [ ] = {"Hello world!",  "No, I mean it!", "HELLO WORLD!!"};
        while (i < 4) { // 一般只需要程序改错，不做异常处理
        // 改：while(i< greetings.length) 
            System.out.println (greetings[i]);
	     i++;
        }
    }
}
```

```java
// 代码2- 
/*
	try块进行检测,如果发生异常则进入catch块(依次匹配)
	从catch块分析,NumberFormatException和ArithmeticException都是非检查型异常
	结论: 也可以使用try-catch块对RuntimeException进行异常处理
*/
public class ExceptionTester3 {
    public static void main(String args[]) {
        int number1 = 0, number2 = 0, result = 0;
        try {
            System.out.println("Enter the first number:");
            number1 = Integer.valueOf(Keyboard.getString()).intValue();
            System.out.println("Enter the second number:");
            number2 = Integer.valueOf(Keyboard.getString()).intValue();
            result = number1 / number2; 
        }  catch (NumberFormatException e) {
            System.out.println("Invalid integer entered!");
            System.exit(-1);  // 程序终止
 		}  catch (ArithmeticException e) {
            System.out.println("Second number is 0, cannot do division!");
            System.exit(-1); 
		}  // end try catch
        System.out.print(number1 + " / " + number2 + "=" + result);
    }
}

```



// 代码3见截图

说明: 

l4方法a声明了异常抛出

l8调用了方法a, 则编译器要对第8行及其所属的方法b进行检查: (1) l7是否有异常抛出的声明 ? (2) 第8行是否被try-catch包围 ? 

检查后编译器报错.

![image-20260526085234917](Java知识点.assets/image-20260526085234917.png)







#### 3 异常处理的两种方式

##### 3.1 在方法头声明异常抛出（即添加throws子句）

- throws子句也被称为异常上交，即：不在本方法中捕获异常（不使用try-catch）
- 方法调用链可以全部使用throws子句（包括main方法）上交，最后异常交给JVM处理
- ==throws子句的本质是通知提示作用==：方法头后面有抛出声明时 
  - 1、 在编译时，编译器会对调用该方法的语句进行检查（是否对异常方法进行了有效控制）；
  - 2、 提醒程序员要做语法处理
-  如果一个方法a声明了抛出，则调用该方法的语句应进行以下二选一处理：
  - 1、 或者 调用方法a的语句所属的方法b也将异常上交（即： 方法b声明throws子句）,[见代码4, 方法b]
  - 2、 或者，使用try-catch块进行终极处理.[见代码4, 方法c]



```java
// 代码4
public class AException {
	void a() throws Exception {
	}
	
	void b() throws Exception{
		a();
	}
	
	void c() {
		try {
			a();
        // 注意: 此程序因为a方法没有抛出异常对象的语句, 所以catch语句永远不会被触发
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}
```



- 在用声明了异常抛出的方法中（即有throws子句的方法），一般要==抛出异常对象==（否则，没有任何异常对象出现，异常机制失去意义[见上方代码4,方法a的声明语法正确,但是因为没有抛出异常对象,失去异常处理的意义(方法c中的catch永远不会被触发)]）。
- 抛出异常对象的方式：
  - 1、 在本方法b中调用其它有throws子句的方法a ， 方法a中已有异常抛出的语句 [见代码5,方法b]
  - 2、 在本方法中使用if语句+throw语句（即：如果异常条件成立， 则手动抛出一个异常对象） [见代码5,方法a]



```java
// 代码5
public class AException {
    // a是有异常抛出声明的末端被调用方法, 所以它应该有throw相关的语句(见l5-6)
	int a(int x , int y) throws Exception {
		if (y == 0) 
			throw new ArithmeticException();
		return x/y ;
	}
	// b是因为调用a方法,被迫声明异常抛出; b是通过a间接拥有了throw抛出对象的语句
	void b(int x , int y) throws Exception{
		a(x,y);
	}
    // 所以, 在c中调用b, 有可能触发(y=0时)异常,并被catch捕获, 整个程序形成完整逻辑链
    void c(int x , int y) {
		try {
			b(x,y);
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}
```





##### 3.2 捕获异常

- 即：使用try- catch块
  - 完整结构： 
    - （1）1个try块， 用于监测可能发生异常的方法调用语句，发生异常时JVM按throws子句声明的异常类型，创建一个异常对象， 将其放在特殊缓冲区中（即异常抛出）
    - （2）1-n个catch块， 小括号中是异常类型的形参。 出现异常对象抛出，从上至下依次和小括号中的异常类型匹配， 如果异常是该类型，则将异常对象作为实参传如该catch块。
      多catch块：
       - 一般先出现子类后出现父类（用于精确捕获并处理异常）
       - 也可以按try中异常方法的调用次序，从上至下排列catch(见代码2)
    - （3）0-1个finally块， 可选块， 该块不管是否产生异常最后都会执行。
- ==try-catch是异常处理的终极办法==






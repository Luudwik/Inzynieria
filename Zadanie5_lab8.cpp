class A {
public:
	A() {}
	~A() {}
};
class B : virtual public A {
public:
	B() {}
	~B() {}
};
class C : virtual public A {
public:
	C() {}
	~C() {}
};
class D : public B, public C {
public:
	D() {}
	~D() {}
};

void main() {}
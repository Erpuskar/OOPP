class Student{
    private:
        int marks;
    public:
        Student()
        {
            marks=90;
        }
        friend void display(Student s);
};
void display(Student s){
    cout<<"Marks: "<<s.marks<<endl;
}?
int main(){
    Student s;
    display(s);
    return 0;
}
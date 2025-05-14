
// #include<iostream>
// #include <cctype>
// #include<cmath>
// #include<string>
// using namespace std;
//  int main(){
//      double a;
//      cin>>a;
//      double result= pow(a,b);
//      double result = fmod(a,b);
//      double result =floor(a);
//      double result =ceil(b);
//       double result =round(a);
//      double result =trunc(a);
//      cout <<result<<endl;
//       string name ="MaZEn";
//       int namesize=name.size();
//        for(int i=0;i<namesize;i++)
//        {
//          if(isupper(name[i])){
//              cout<<char(tolower(name[i]))<<endl;
//          }
//          else{
//              cout<<char(toupper(name[i]))<<endl;
//          }
//        }
//      string F1,S1;
//         cin>>F1>>S1;
//      string F2,S2;
//         cin>>F2>>S2;
//         if (S1==S2)
//         {
//          cout<<"ARE Brother"<<endl;
//         }
//          else
//           {
//            cout<<"NOT"<< endl;
//          }
 
//  double N;
//  cin>>N;
//  if(N== N(int))
//  {
//      cout<< "int "<< N<<endl;
//  }
//  if(N == float(N))
//  {
//      cout<< "float "<< N<<endl;
//  }
//  }
//   void display (int x )
//  {
//      if (x<0)
//      cout<<"there is Error "<<endl;
   
//      else 
//      cout<<"num be positive "<<  x  <<endl;
//  }
//  void division (int s  )
//  {
//      if (s % 2==0)
//      cout<< "even number" <<endl;
//      else{
//         cout<<"odd number"<<endl;
//      }
//  }
//   int main()
//   {
//      int num;
//      cin>>num;
//      division (num);
//     //   division (77,'%');
//      return 0;
//    }
// // int main()
// // {
// //    double num;
// //    cin>> num;
// //    double x=sqrt(num);
// //    cout<<x<<endl;
// //    double y =pow(num,2);
// //    cout<< y <<endl;
// // }
// struct mazen (
//    int id;
//    float gpa;
//    string name;
// )
// int main()
// {
   // double emp[100]={100,2000,30000};
   // cout<<emp[0]<<endl;
   // emp[0]=2;
   // cout<<emp[0]<<endl;
   // for(int i=0;i<3;++i)
   // {
   //  cin>>emp[i];
   // }
   // for(int i=0;i<100;++i)
   // {
   //  cout<<emp[i]<<endl;
   // }
   // struct mazen (
   //    int id;
   //    float gpa;
   //    string name;

   // )
//    mazen mazen [30] ={{4241431,3.3, "mazen"}};
//    cout <<mazen [0].name<<emdl;
//    cout <<mazen [0].id<<emdl;
//    cout <<mazen [0].gpa<<emdl;
//    cout<<"enter mazen gpa "<<endl;
//    cin>>mazen[0].gpa;
//    cout<<"after update"<<endl;
//    cout <<mazen [0].name<<emdl;
//    cout <<mazen [0].id<<emdl;
//    cout <<mazen [0].gpa<<emdl;
// }
// int main()
// {
//    int n,x,max;
//    cin>>n>>max;
//    for(int i=1;i<n;++i)
//    {
      
//       cin>>x;
//       if(x>max) max=x;
//    }
//    cout<<max<<endl;
   
// }
// #include <iostream>
// #include <vector>
// using namespace std;
// struct Student
// { 
//    string name;
//    int id;
//    double gpa;
//    int level;
//    int group;
   
// };
// vector<Student> students;
// void addstudent()
// {
//    Student m;
//    cout<<"Enter student name"<<endl;
//    cin>> m.name;
//    cout<<"Enter student id"<<endl;
//    cin>>m.id;
//    cout<<"Enter student level"<<endl;
//    cin>>m.level;
//    cout<<"Enter student gpa"<<endl;
//    cin>>m.gpa;
//    cout<<"Enter student group"<<endl;
//    cin>>m.group;
//    students.push_back(m);
//    cout<<"student add successfully"<<endl;
// }
// void moazstudent()
// {
//    int id;
//    cout<<"Enter studens id for update "<<endl;
//    cin>>id;
//    for(int i=0;i<students.size();i++)
//    if (students[i].id==id)
//    {
//       cout<<"Enter id"<<endl;
//       cin>>students[i].id;
//       cout<<"Enter name"<<endl;
//       cin>>students[i].name;
//       cout<<"Enter gpa"<<endl;
//       cin>>students[i].gpa;
//       cout<<"Enter level"<<endl;
//       cin>>students[i].level;
//       cout<<" Enter group"<<endl;
//       cin>>students[i].group;
//   }
// }
// int main()
// {
//    addstudent();
//    moazstudent();
//    return 0;

// #include <iostream>
// #include <string>
// using namespace std;

// struct course {
//    string name;
//    int  code;
//    int counthours;
// };

// struct student {
//    string name;
//    int id;
//    int level;
//    string group;
//    double gpa;
//    int hours[5];
//    string coursename[5];
//    int course[5];     
//    float degrees[5]; 
//    int courseCount;   
// };

// student Students[120];
// int countStudents = 0;

// void addstudent()
// {
//    student m;
//    cout << "Enter the name ";
//    cin >.courseCount 
//   > m.name;
//    cout << "Enter the id ";
//    cin >> m.id;
//    cout << "Enter the level ";
//    cin >> m.level;
//    cout << "Enter the group ";
//    cin >> m.group;
//    cout << "Enter the GPA ";
//    cin >> m.gpa;

//    cout << "How many courses? (max 5) ";
//    cin >> m.courseCount;
//    if (m.courseCount > 5) m.courseCount = 5;

//    for (int i = 0; i < m.courseCount; i++) {
//       cout<<" Enter the name"<<endl;
//       cin>>m.coursename[i];
//        cout << "Enter course code ";
//        cin >> m.course[i];
//        cout << "Enter degree: ";
//        cin >> m.degrees[i];
//        cout<<"Enter the hours"<<endl;
//        cin>>m.hours[i];
//    }

//    Students[countStudents++] = m;
//    cout << "Student added successfully.\n";
// }

// int main() {
//    char addMore = 'y';  
//     while (countStudents < 120 && addMore == 'y') {
//         addstudent();
//         cout << "Do you want to add another student? (y/n): ";
//         cin >> addMore;}
//         cout<<"finished adding student"<<endl;
//    return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;

// struct student {
//     string name;
//     int id;
//     int level;
//     string group;
//     double gpa;
// };

// student students[120];
// int studentNum = 0;  // عدد الطلاب الحالي في المصفوفة

// // دالة لتحديث بيانات الطالب أو حذف الطالب بناءً على اختيارات المستخدم
// void updateOrDeleteStudent() {
//     int id;
//     int choice;
    
//     cout << "Enter student ID to update or delete: ";
//     cin >> id;

//     // البحث عن الطالب باستخدام الـ ID
//     for (int i = 0; i < studentNum; i++) {
//         if (students[i].id == id) {
//             cout << "Student found. Choose an option:\n";
//             cout << "1. Update Student\n";
//             cout << "2. Delete Student\n";
//             cout << "Enter your choice: ";
//             cin >> choice;

//             // إذا اختار المستخدم التحديث
//             if (choice == 1) {
//                 cout << "Enter new name: "; cin >> students[i].name;
//                 cout << "Enter new level: "; cin >> students[i].level;
//                 cout << "Enter new group: "; cin >> students[i].group;
//                 cout << "Enter new GPA: "; cin >> students[i].gpa;
//                 cout << "Student updated successfully!\n";
//             }
//             // إذا اختار المستخدم الحذف
//             else if (choice == 2) {
//                 students[i] = students[studentNum - 1];  // استبدال الطالب المحذوف بالطالب الأخير
//                 studentNum--;  // تقليص عدد الطلاب
//                 cout << "Student deleted successfully!\n";
//             }
//             return;
//         }
//     }
//     cout << "Student not found.\n";
// }

// int main() {
//     int choice;
    
//     students[studentNum++] = {"John", 4, 2, "A", 3.5};  // إضافة طالب للتجربة
//      students[studentNum++] = {"Alice", 2, 3, "B", 3.8}; // إضافة طالب للتجربة
    
//     while (true) {
//         cout << "==== Faculty Management System ====\n";
//         cout << "1. Update or Delete Student\n";
//         cout << "0. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         if (choice == 1) {
//             updateOrDeleteStudent();
//         }
//         else if (choice == 0) {
//             cout << "Exiting program.\n";
//             return 0;
//         }
//         else {
//             cout << "Invalid choice. Try again.\n";
//         }
//     }
// }

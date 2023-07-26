#include <iostream>
#include <conio.h>

class CBook
{
public:
    std::string name;
    std::string author;
    int year;
    std::string status;
    int q;

    CBook(int q, std::string name, std::string author, int year, std::string status)
    {
        this->name = name;
        this->author = author;
        this->status = status;
        this->year = year;
        this->q = q;
    }

    void ShowData()
    {
        std::cout << q << ") " <<"Book:" << name << "\tAuthor:" << author << "\tYear:" << year << "\tStatus:" << status << std::endl;

        
    }
};

class CReader : public CBook
{
public:
    std::string name_reader;
    int w;

    CReader(int w, std::string name_reader, int q, std::string name, std::string author, int year, std::string status) : CBook(q, name, author, year, status)
    {
        this->w = w;
        this->name_reader= name_reader;
    }

    void Show_Reader_Data()
    {
        std::cout << w << "." << name_reader << " take book:\n";
        ShowData();
    }
};


int main() 
{
    int n;
    system("cls");
    while (true)
    {
        std::cout << "Sasha's library" << "\nStatus:" << "\n1. All books" <<"\n2. Reader status"<< std::endl;
        std::cin >> n;

        if (n == 1) 
        {
            CBook book(1, "To Kill a Mockingbird", "Harper Lee", 1960, "None");
            CBook book1(2, "The Great Gatsby", "F. Scott Fitzgerald", 1925, "Have");
            CBook book2(3, "Pride and Prejudice", "Jane Austen", 1813, "None");
            CBook book3(4, "Harry Potter and the Philosopher's Stone", "J.K. Rowling", 1997, "Have");
            CBook book4(5, "The Catcher in the Rye", "J.D. Salinger", 1951, "None");
            CBook book5(6, "The Hobbit","J.R.R. Tolkien", 1937 , "None");
            CBook book6(7, "Jane Eyre", "Charlotte Brontë", 1847, "Have");
            CBook book7(8, "The Chronicles of Narnia: The Lion, the Witch, and the Wardrobe", "C.S. Lewis", 1950, "None");
            CBook book8(9, "Brave New World", "Aldous Huxley", 1932, "None");
            CBook book9(10, "The Da Vinci Code", "Dan Brown", 2003, "Have");
            book.ShowData();
            book1.ShowData();
            book2.ShowData();
            book3.ShowData();
            book4.ShowData();
            book5.ShowData();
            book6.ShowData();
            book7.ShowData();
            book8.ShowData();
            book9.ShowData();

            int p;
            std::cout << "Enter 1 to go back to the main menu or any other number to exit: ";
            std::cin >> p;
            if (p == 1)
            {
                system("cls");
                continue;
            } else {
                break;
            }
        } else if (n == 2) 
        {
            CReader reader(1, "Tom", 1, "To Kill a Mockingbird", "Harper Lee", 1960, "Have");
            reader.Show_Reader_Data();
            CReader reader2(1, "Alice", 1, "The Catcher in the Rye", "J.D. Salinger", 1951, "Have");
            reader2.Show_Reader_Data();
            CReader reader3(1, "Bob", 1, "Pride and Prejudice", "Jane Austen", 1813, "Have");
            reader3.Show_Reader_Data();
            CReader reader4(1, "Andrej", 1, "The Hobbit","J.R.R. Tolkien", 1937 , "Have");
            reader4.Show_Reader_Data();
            CReader reader5(1, "John", 1, "The Chronicles of Narnia: The Lion, the Witch, and the Wardrobe", "C.S. Lewis", 1950, "Have");
            reader5.Show_Reader_Data();
            CReader reader6(1, "Roza", 1, "Brave New World", "Aldous Huxley", 1932, "Have");
            reader6.Show_Reader_Data();
                        
            int p;
            std::cout << "Enter 1 to go back to the main menu or any other number to exit: ";
            std::cin >> p;

            if (p == 1)
            {
                system("cls");
                continue;
            }
            else
            {
                break;
            }
        }
        else if (n == 3)
        {
            break;
        } else {
            std::cout << "Invalid choice" << std::endl;
        }
    }
    return 0;
}


// С++ / ООП
// Задача: Система управления библиотекой
// Вы разрабатываете систему управления библиотекой. В библиотеке есть книги и читатели. Книги могут быть выданы читателям на некоторое время. Ваша задача - создать классы, которые представляют сущности этой системы, и обеспечивают их взаимодействие.
// Ваша программа должна удовлетворять следующим требованиям:
// * 		Создайте класс "Book" для представления книги. У каждой книги должны быть следующие свойства: название, автор, год публикации и статус (доступна или выдана).
// * 		Создайте класс "Reader" для представления читателя. У каждого читателя должно быть имя и список взятых книг.
// * 		Создайте класс "Library". Он будет содержать список всех книг в библиотеке и методы для добавления новых книг, выдачи книг читателям и возврата книг обратно в библиотеку.
// * 		Добавьте метод в класс Library, который позволяет вывести список всех доступных книг, список всех выданных книг.
// * 		Убедитесь, что книги не могут быть выданы, если они уже выданы. Если читатель пытается взять книгу, которая уже выдана, программа должна выводить соответствующее сообщение.
// * 		Добавьте в класс "Reader" метод для вывода списка взятых книг.
// * 		Создайте несколько объектов каждого класса и продемонстрируйте взаимодействие между ними.

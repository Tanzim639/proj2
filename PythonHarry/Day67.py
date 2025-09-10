class Library:
    def __init__(self) -> None:
        self.books = []
        self.numBooks = 0

    def addBook(self, book):
        self.books.append(book)
        self.numBooks = len(self.books)

    def showDetails(self):
        print(f"The number of books are {self.numBooks} and they are : ")
        for book in self.books:
            print(book)


lib1 = Library()
lib2 = Library()
lib1.addBook("Harry Potter")
lib1.addBook("GOT")
lib2.addBook("james bond")
lib2.addBook("jumanji")

lib1.showDetails()
lib2.showDetails()

    
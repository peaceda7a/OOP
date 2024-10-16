from book import Book
class Library:
    def __init__(self):
        self.books=[

        ]

    def add_book(self,book):
        if not any(b.isbn==book.isbn for b in self.books):
            self.books.append(book)
            print(f"book '{book.title}'added to the library.")
        else:
            print("a book with this isbn already exis in the library.")
    def remove_book(self, isbn):
        for book in self.books:
            if book.isbn==isbn:
                self.books.remove(book)
                print(f"book with this isbn {isbn} removed from the library.")
                return
        print(f"no book found with tyhisi sbn {isbn}.")
    def display_books(self):
        if not self.books:
            print("no books in the library.")
            return
        print("books in the library:")
        for book in self.books:
            print(book)

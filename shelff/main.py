from book import Book
from library import Library
def main():
    my_polca = Library()
    book1 = Book("Maitreyi","Mircea Eliade","9780316769488")
    book2 = Book("Tema pentru acasa", "Nicolae Dabija","9780060935467")
    book3 = Book("Sapiens", "Yuval Noah Harari","9780451524935")
    my_polca.add_book(book1)
    my_polca.add_book(book2)
    my_polca.display_books()
    my_polca.remove_book("9780316769488")
    my_polca.display_books()
if __name__ == "__main__":
    main()

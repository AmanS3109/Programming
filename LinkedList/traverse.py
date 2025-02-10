class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


a = Node("A")
b = Node("B")
c = Node("C")
d = Node("D")

a.next = b
b.next = c
c.next = d

def printLinkedlist(head):
    current = head
    while current is not None:
        print(current.data)
        current = current.next

printLinkedlist(a)

# recursive
def printLinkedlistRecursive(head):
    if head is None:
        return  # base case
    print(head.data)  # print the current node
    printLinkedlistRecursive(head.next)  # recursive call
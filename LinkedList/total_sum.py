class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


def sumList(head):
    sum = 0
    current = head
    while current is not None:
        sum += current.data
        current = current.next
    return sum


a = Node(2)
b = Node(8)
c = Node(3)
d = Node(7)

a.next = b
b.next = c
c.next = d

print(sumList(b))


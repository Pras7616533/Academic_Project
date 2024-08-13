def display(arr):
  print(" ".join(map(str, arr)))

def main():
  n = int(input("Enter the value of n:\n"))
  a = []
  print("Enter", n, "elements:")
  for i in range(n):
      a.append(int(input()))

  print()

  # Computation of bubble sort
  for pass_num in range(1, n):
      print(f"pass {pass_num}:")
      for j in range(n - pass_num):
          if a[j] > a[j + 1]:
              a[j], a[j + 1] = a[j + 1], a[j]  # Swap
          display(a)
      print()

  print("The sorted array after Bubble sort is:")
  display(a)

if __name__ == "__main__":
  main()

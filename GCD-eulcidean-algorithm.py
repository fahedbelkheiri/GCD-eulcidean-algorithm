def compute_gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def main():
    try:
        
        A = int(input("Enter the first integer (A): "))
        B = int(input("Enter the second integer (B): "))

        
        gcd = compute_gcd(A, B)

       
        print(f"The GCD of {A} and {B} is: {gcd}")

    except ValueError:
        print("Please enter valid integers.")


if __name__ == "__main__":
    main()
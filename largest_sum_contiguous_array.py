Python  program to find maximum contiguous subarray
 
# Function to find the maximum contiguous subarray
def maxSubArraySum(a,size):
     
    max_so_far = 0
    max_ending_here = 0
     
    for i in range(0, size):
        max_ending_here = max_ending_here + a[i]
        if max_ending_here < 0:
            max_ending_here = 0
         
        if (max_so_far < max_ending_here):
            max_so_far = max_ending_here
             
    return max_so_far
 
# Driver function to check the above function 
a = [-2, -3, 4, -1, -2, 1, 5, -3]
print"Maximum contiguous sum is", maxSubArraySum(a,len(a))
class StringCalculator
  def self.add(input)
    if input.empty?
      0
    else
      input.to_i
    end
  end
end


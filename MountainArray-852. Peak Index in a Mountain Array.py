# """
# This is MountainArray's API interface.
# You should not implement it, or speculate about its implementation
# """
#class MountainArray:
#    def get(self, index: int) -> int:
#    def length(self) -> int:
# the is find the mountain index so that we can  serach in two half. now do bs on both half 1. asc [0,peek] 2. [peek+1,n-1]

class Solution:
    def findInMountainArray(self, target: int, mountainArr: 'MountainArray') -> int:


        n = mountainArr.length()
        def find_peak_index()-> int:

            low,high = 0,n-1
            while low<high:

                mid = (low+high)//2
                mid1 = mid+1

                if mountainArr.get(mid) < mountainArr.get(mid+1):
                    low = mid+1
                else:
                    high = mid
            return low
        
        def find_target(low,high,target)-> int:

            is_desc = mountainArr.get(low) > mountainArr.get(high)
            while low<=high:

                mid = (low+high) //2 
                val = mountainArr.get(mid)

                if val == target:
                   return mid

                if not is_desc:
                      if val < target:
                         low = mid+1 
                      else:
                        high = mid-1
                else:
                   if  val < target:
                        high = mid-1
                   else:
                        low = mid+1

            return -1
        
        peek = find_peak_index()

        first_half = find_target(0,peek,target)
        second_half = find_target(peek+1,n-1,target)

        if first_half != -1:
            return first_half
        return second_half
        

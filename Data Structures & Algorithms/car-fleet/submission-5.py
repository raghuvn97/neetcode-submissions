class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        fleet = []
        cars = []

        for idx, i in enumerate(position):
            cars.append((i, speed[idx]))
        
        cars.sort()

        for c in cars:
            t = (target - c[0]) / c[1]
            if len(fleet) != 0: 
                while len(fleet) and fleet[-1] <= t:
                    fleet.pop()
            fleet.append(t)
        
        return len(fleet)
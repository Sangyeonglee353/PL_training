from queueADT import * # include everything from queueADT module
from random import randint # include randint from random module

# 4. TicketCounterSimulation: manages the actual simulation.
class TicketCounterSimulation: 
    # Create a simulation object.
    def __init__(self, numAgents, numMinutes, betweenTime, serviceTime):
        # Parameters supplied by the user
        self._arriveprob = 1.0 / betweenTime
        self._serviceTime = serviceTime 
        self._numMinutes = numMinutes # Total simulation time
        self.served = 0 # Store how many passenger served

        # Simulation components.
        self._passengers = CircularQueue() # Create the passengers object through CircularQueue() class
        self._Agents = [None] * numAgents # Create the Agents list
        for i in range(numAgents): # During the Number of Agents,
            self._Agents[i] = TicketAgent(i+1) # Store Ticketing agent info into Agents list

        # Computed during the simulation.
        self._totalWaitTime = 0 # Total Wait Time
        self._numPassengers = 0 # The number of Passengers

    # Run the simulation using the parameters supplied
    def run(self): # Define run() function
        for curTime in range(self._numMinutes + 1): # During total Minutes,
            self._handleArrival(curTime) # Excute _handleArrival()
            self._handleBeginService(curTime) # Excute _handleBeginService()
            self._handleEndService(curTime) # Excute _handleEndService()
        self.printResult() # Print Result

    # Print Result
    def printResult(self): # Define printResult() function
        # Compute Number of passengers served
        numServed = self._numPassengers - len(self._passengers)
        # Compute The average wait time
        avgwait = float(self._totalWaitTime) / numServed
        # Print the calculation results.
        print("")
        print("Number of passengers served = {}".format(numServed))
        print("Number of passengers remaining in line  = {}".format(len(self._passengers)))
        print("The average wait time was {:.2f} minutes.".format(avgwait))

    # Handle Customer Arrival
    def _handleArrival(self, curTime): # Define _handleArrival() function
        prob = randint(0.0, 1.0) # prob variable is random int using randint()
        if 0.0 <= prob and prob <= self._arriveprob:
            person = passenger(self._numPassengers + 1, curTime)
            self._passengers.enqueue( person ) # Enqueue 'person' into the Queue0
            self._numPassengers += 1 # Accumulate the number of passengers.
            print("Time {}: Passenger {} arrived".format(curTime, person.getPID())) # Print Passenger arrived info.

    # Begin Customer Service
    def _handleBeginService(self, curTime): # Define _handleBeginService() function
        i = 0 # Initialize i variable to 0.
        while i < len(self._Agents): # During the Number of Agents,
            if self._Agents[i].isFree() and not self._passengers.isEmpty() and curTime != self._numMinutes:
                passenger = self._passengers.dequeue() # Get next passenger from the Queue
                self.served += 1 # Increase served variable by 1.
                stoptime = curTime + self._serviceTime # Change stoptime
                self._Agents[i].startService(passenger, stoptime) # next agent service start
                self._totalWaitTime += (curTime - passenger.timeArrived()) # Accumulate total wait time.
                # Print Agent started serving passenger info.
                print("Time {}: Agent {} started serving passenger {}".format(curTime, self._Agents[i].getAID(), passenger.getPID()))
            i += 1 # Increase i variable by 1.

    # Stop Customer Service
    def _handleEndService(self, curTime): # Define _handleEndService() function
        i = 0 # Initialize i variable to 0.
        while i < len(self._Agents): # During the Number of Agents,
            if self._Agents[i].isFinished(curTime): # Checks whether Service time is finshed or not
                passenger = self._Agents[i].stopService() # Store the agent who finished the service.
                # Print Agent stopped serving passenger info.
                print("Time {}: Agent {} stopped serving passenger {}".format(curTime, self._Agents[i].getAID(), passenger.getPID()))
            i += 1 # Increase i variable by 1.

# 3. TicketAgent: store info related to an agent.
class TicketAgent: # Defining the TicketAgent class
    def __init__(self, aID): # Initializer of Agent info
        self._aID = aID # Agent ID
        self._passenger = None # Initialize passenger variable to None
        self._stopTime = -1

    # Return Id Number
    def getAID(self): # Define getAID() function
        return self._aID # Return Agent ID

    # Determine if Agent is Free
    def isFree(self): # Define isFree() function
        return self._passenger is None 

    # Setermine if Agent has finished a Service
    def isFinished(self, CurTime): # Define isFinished() function
        return self._passenger is not None and CurTime == self._stopTime

    # Start Attending to a Passenger
    def startService(self, passenger, stopTime): # Define startService() function
        self._passenger = passenger # Store passenger value
        self._stopTime = stopTime # Store stoptime vlaue

    # Stop Service to a Passenger
    def stopService(self): # Define stopService() fuunction
        thepassenger = self._passenger # Change thepassenger value to self._passenger value
        self._passenger = None # Initialize passenger variable to None
        return thepassenger # Return thepassenger value

# 2. Passenger: store info realted to a passenger
class passenger: # Defining the passenger class
    def __init__(self, pID, ArrivalTime): # Initializer of passenger
        self._pID = pID # Passenger ID
        self._arrivalTime = ArrivalTime # Arrival Time
        
    # Return id Number
    def getPID(self): # Define getPID() function
        return self._pID # Return Passenger ID

    # Return Arrival Time
    def timeArrived(self): # Define timeArrived() fucntion
        return self._arrivalTime # Return Arrival Time

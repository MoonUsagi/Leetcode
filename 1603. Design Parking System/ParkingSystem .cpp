class ParkingSystem {
public:
    int BigSpace,MediumSpace,SmallSpace;
    ParkingSystem(int big, int medium, int small) 
    {
        BigSpace = big;
        MediumSpace = medium;
        SmallSpace = small;
    }
    
    bool addCar(int carType) 
    {
        switch(carType)
        {
            case 1:
            {
                if(BigSpace==0) return false;
                else
                    BigSpace--;
            }
            break;

            case 2:
            {
                if(MediumSpace==0) return false;
                else
                    MediumSpace--;
            }
            break;

            case 3:
            {
                if(SmallSpace==0) return false;
                else
                    SmallSpace--;
            }
            break;
        }
        return true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
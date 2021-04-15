/**
 * \fn int parseQuantity(const char *)
 * \author Jakub Jerzy Stępień
 *
 * The function takes a value in the string format and returns it in the int format.
 */
int parseQuantity(const char * sQuantity)
{
    int iQuantity=0, tmp=0;
    for(int i=0;'0'<=(sQuantity[i])&&(sQuantity[i])<='9';i++){
        tmp=(10*iQuantity)+(int)+(sQuantity[i]-'0');
        if(tmp<iQuantity){
            return(iQuantity);
        }else{
            iQuantity=tmp;
        }
    }
    return(iQuantity);
}

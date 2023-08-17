int SinglyLinear::GetNthNodeFromLast(int iNo)
{
    int Pos=this->size-iNo+1;

    return GetNthElement(Pos);

}
// OoT3D decomp @ 002df318  name=FUN_002df318  size=100

undefined8 FUN_002df318(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  do {
    iVar3 = *param_1;
    iVar2 = (int)*(short *)((int)param_1 + 6);
    if (iVar3 <= (int)*(short *)((int)param_1 + 6) - (int)param_2) {
      iVar2 = iVar3 + (int)param_2;
    }
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2;
  if ((iVar3 < 1) || (0 < *(short *)(param_1 + 1))) {
    software_interrupt(0x22);
    param_2 = param_1;
  }
  return CONCAT44(param_2,iVar3);
}


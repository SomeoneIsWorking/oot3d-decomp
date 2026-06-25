// OoT3D decomp @ 0030b304  name=FUN_0030b304  size=164

undefined8 FUN_0030b304(int *param_1,int *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = DAT_0030b3a8;
  do {
    iVar3 = *param_1;
    if (iVar3 == -2) {
      software_interrupt(0x22);
      return CONCAT44(param_1,*puVar2);
    }
    if (iVar3 != -1) {
      if (iVar3 == 0) {
        do {
          iVar3 = *param_1;
          if (iVar3 != 0) {
            ClearExclusiveLocal();
            goto LAB_0030b37c;
          }
          bVar1 = (bool)hasExclusiveAccess(param_1);
        } while (!bVar1);
        *param_1 = -1;
LAB_0030b37c:
        param_2 = param_1;
        if (iVar3 == 0) goto LAB_0030b3a4;
      }
      else if (iVar3 == 1) {
LAB_0030b3a4:
        return CONCAT44(param_2,iVar3);
      }
    }
    software_interrupt(0x22);
    param_2 = param_1;
  } while( true );
}


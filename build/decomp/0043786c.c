// OoT3D decomp @ 0043786c  name=FUN_0043786c  size=224

int FUN_0043786c(undefined2 *param_1,undefined2 *param_2,int param_3,int param_4,int param_5,
                int param_6)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar5 = param_4 * param_4 + param_3 * param_3;
  if (param_5 * param_5 < iVar5) {
    iVar1 = iVar5 * 0x4000;
    if (iVar1 < 1) {
      iVar4 = 0;
    }
    else {
      iVar3 = 1;
      iVar4 = iVar1;
      if (1 < iVar1) {
        do {
          iVar3 = iVar3 * 2;
          iVar4 = iVar4 >> 1;
        } while (iVar3 < iVar4);
      }
      do {
        iVar4 = iVar3;
        iVar3 = FUN_00368d94(iVar1,iVar4);
        iVar3 = iVar3 + iVar4 >> 1;
      } while (iVar3 < iVar4);
    }
    if (param_6 * param_6 - iVar5 == 0 || param_6 * param_6 < iVar5) {
      param_5 = param_6 - param_5;
      iVar5 = param_5 * 0x80;
    }
    else {
      iVar5 = iVar4 + param_5 * -0x80;
      param_5 = (iVar4 >> 7) - param_5;
    }
    uVar2 = FUN_00368d94(param_3 * iVar5,iVar4);
    *param_1 = uVar2;
    uVar2 = FUN_00368d94(param_4 * iVar5,iVar4);
    *param_2 = uVar2;
    return (int)(short)param_5;
  }
  *param_2 = 0;
  *param_1 = 0;
  return 0;
}

// OoT3D decomp @ 00437764  name=FUN_00437764  size=264

int FUN_00437764(undefined2 *param_1,undefined2 *param_2,int param_3,int param_4,int param_5,
                int param_6)

{
  short sVar1;
  int iVar2;
  int unaff_r4;
  int iVar3;
  int iVar4;

  if (param_3 < 0) {
    if (-param_5 == param_3 || -param_3 < param_5) {
LAB_0043779c:
      param_3 = 0;
    }
    else {
      param_3 = param_3 + param_5;
    }
  }
  else {
    if (param_3 <= param_5) goto LAB_0043779c;
    param_3 = param_3 - param_5;
  }
  if (param_4 < 0) {
    if (-param_5 != param_4 && param_5 <= -param_4) {
      param_4 = param_4 + param_5;
      goto LAB_004377cc;
    }
  }
  else if (param_5 < param_4) {
    param_4 = param_4 - param_5;
    goto LAB_004377cc;
  }
  param_4 = 0;
LAB_004377cc:
  param_6 = param_6 - param_5;
  iVar2 = param_4 * param_4 + param_3 * param_3;
  if (param_6 * param_6 - iVar2 == 0 || param_6 * param_6 < iVar2) {
    iVar2 = iVar2 * 0x4000;
    if (iVar2 < 1) {
      iVar4 = 0;
    }
    else {
      iVar3 = 1;
      iVar4 = iVar2;
      if (1 < iVar2) {
        do {
          iVar3 = iVar3 * 2;
          iVar4 = iVar4 >> 1;
        } while (iVar3 < iVar4);
      }
      do {
        iVar4 = iVar3;
        iVar3 = FUN_00368d94(iVar2,iVar4);
        iVar3 = iVar3 + iVar4 >> 1;
      } while (iVar3 < iVar4);
    }
    sVar1 = FUN_00368d94(param_3 * param_6 * 0x80,iVar4);
    param_3 = (int)sVar1;
    sVar1 = FUN_00368d94(param_4 * param_6 * 0x80,iVar4);
    param_4 = (int)sVar1;
    unaff_r4 = param_6;
  }
  *param_1 = (short)param_3;
  *param_2 = (short)param_4;
  return (int)(short)unaff_r4;
}

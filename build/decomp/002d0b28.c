// OoT3D decomp @ 002d0b28  name=FUN_002d0b28  size=128

void FUN_002d0b28(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;

  bVar5 = param_1 == 0xc;
  if (bVar5) {
    param_1 = 0;
  }
  iVar2 = *DAT_002d0ba8;
  piVar1 = (int *)(iVar2 + 0x5d0);
  if (bVar5) {
    *piVar1 = param_1;
    *(int *)(iVar2 + 0x608) = param_1;
  }
  else {
    piVar3 = (int *)(iVar2 + 1000 + param_1 * 0x18);
    iVar2 = *piVar3;
    piVar1[param_1 + 1] = iVar2;
    piVar1[param_1 + 0xf] = iVar2;
    iVar2 = piVar3[2];
    bVar5 = iVar2 == 0x1400;
    if (!bVar5) {
      iVar2 = iVar2 + -0x1401;
      bVar5 = iVar2 == 0;
    }
    if (bVar5) {
      iVar2 = 1;
    }
    else if (iVar2 == 1) {
      iVar2 = 2;
    }
    else if (iVar2 == 5) {
      iVar2 = 4;
    }
    else {
      iVar2 = 0;
    }
    iVar4 = piVar3[3];
    if (iVar4 == 0) {
      iVar4 = piVar3[1] * iVar2;
    }
    piVar1[param_1 + 0x1b] = iVar4;
  }
  return;
}

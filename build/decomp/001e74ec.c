// OoT3D decomp @ 001e74ec  name=FUN_001e74ec  size=292

void FUN_001e74ec(int param_1,int param_2)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;

  iVar5 = *(int *)(DAT_001e7610 + param_2);
  FUN_003731e0(param_1 + 0x1a4);
  if (*(short *)(param_1 + 0x94a) == 5) {
    uVar4 = 0x3c;
  }
  else {
    uVar4 = 5;
  }
  iVar3 = FUN_0036bba8(param_2,uVar4);
  if (iVar3 == 0) {
    uVar1 = (undefined2)DAT_001e7614;
  }
  else {
    if (*(short *)(param_1 + 0x94a) == 5) {
      uVar4 = 0x3c;
    }
    else {
      uVar4 = 5;
    }
    uVar1 = FUN_0036bba8(param_2,uVar4);
  }
  *(undefined2 *)(param_1 + 0x116) = uVar1;
  *(undefined2 *)(param_1 + 0x94c) = 6;
  iVar3 = FUN_0036bc98(param_1,param_2);
  if (iVar3 == 0) {
    iVar5 = *(int *)(param_1 + 0x98);
    sVar2 = *(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe);
    if (sVar2 < 0) {
      sVar2 = -sVar2;
    }
    bVar6 = SBORROW4(iVar5,DAT_001e762c);
    iVar3 = iVar5 - DAT_001e762c;
    if (iVar5 <= DAT_001e762c) {
      bVar6 = SBORROW4((int)sVar2,0x4300);
      iVar3 = sVar2 + -0x4300;
    }
    if (iVar3 < 0 != bVar6) {
      FUN_0036bbd0(DAT_001e7630,param_1,param_2,1);
      return;
    }
  }
  else {
    iVar3 = FUN_0036bc84(param_2);
    if (iVar3 != 1) {
      if (iVar3 != 0) {
        *(short *)(DAT_001e7620 + iVar5) = (short)DAT_001e7628;
      }
      return;
    }
    FUN_00372244(param_2 + 0x5fcc,0x1e,DAT_001e7618);
    *(short *)(DAT_001e7620 + iVar5) = (short)DAT_001e761c;
    *(undefined2 *)(param_1 + 0x94c) = 5;
    *(undefined4 *)(param_1 + 0x8a8) = DAT_001e7624;
  }
  return;
}

// OoT3D decomp @ 0033f428  name=FUN_0033f428  size=160

undefined4 FUN_0033f428(uint param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;

  uVar2 = (uint)*(ushort *)(DAT_0033f4c8 + 2);
  uVar3 = (uint)*(ushort *)(DAT_0033f4c8 + 4);
  if (param_5 == 0) {
    sVar1 = *(short *)(DAT_0033f4c8 + 6);
  }
  else if (param_5 == 1) {
    sVar1 = *(short *)(DAT_0033f4c8 + 8);
  }
  else {
    if (param_5 != 2) {
      bVar4 = param_5 == 3;
      if (bVar4) {
        param_5 = (uint)*(ushort *)(DAT_0033f4c8 + 0x10);
      }
      if (bVar4 && param_5 == 0) {
        return 0;
      }
      goto LAB_0033f494;
    }
    sVar1 = *(short *)(DAT_0033f4c8 + 10);
  }
  if (sVar1 == 0) {
    return 0;
  }
LAB_0033f494:
  bVar4 = param_1 <= uVar2;
  if (bVar4) {
    param_1 = param_1 + param_3;
  }
  bVar5 = (bVar4 && uVar2 <= param_1) && param_2 <= uVar3;
  if ((bVar4 && uVar2 <= param_1) && param_2 <= uVar3) {
    bVar5 = uVar3 <= param_2 + param_4;
  }
  if (!bVar5) {
    return 0;
  }
  return 1;
}

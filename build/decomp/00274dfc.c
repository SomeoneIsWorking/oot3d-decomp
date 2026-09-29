// OoT3D decomp @ 00274dfc  name=FUN_00274dfc  size=268

void FUN_00274dfc(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;

  iVar4 = *(int *)(DAT_00274f08 + param_2);
  uVar1 = (uint)*(ushort *)(param_2 + 0x2b7e);
  bVar6 = 3 < uVar1;
  bVar5 = uVar1 != 4;
  if (bVar5) {
    uVar1 = uVar1 - 5;
    bVar6 = 4 < uVar1;
  }
  if ((bVar6 && (bVar5 && uVar1 != 5)) || (iVar2 = FUN_00366748(param_2), iVar2 != 0)) {
    if ((*(short *)(param_2 + 0x2b7e) != 3) || (iVar2 = FUN_00366748(param_2), iVar2 != 0)) {
      if (*(short *)(param_2 + 0x2b7e) != 1) {
        return;
      }
      FUN_0035a050(param_1,param_2,0);
      *(uint *)(iVar4 + 0x1714) = *(uint *)(iVar4 + 0x1714) | 0x800000;
      return;
    }
    *(undefined2 *)(param_1 + 0x22e) = 5;
    FUN_0035a008(param_2,(int)*(short *)(param_1 + 0x2ac));
    FUN_00367c7c(param_2,DAT_00274f10,0);
    FUN_0036e980(param_2,0,8);
    uVar3 = DAT_00274f14;
  }
  else {
    FUN_0035a008(param_2,(int)*(short *)(param_1 + 0x2ac));
    if (*(int *)(param_2 + *(short *)(param_1 + 0x2ac) * 4 + 0xa54) == 0) {
      *(undefined2 *)(param_1 + 0x2ac) = 0xffff;
      uVar3 = DAT_00274f0c;
    }
    else {
      uVar3 = DAT_00274f0c;
      if (*(short *)(param_1 + 0x2ac) != -1) {
        FUN_0036ae48();
        uVar3 = DAT_00274f0c;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  return;
}

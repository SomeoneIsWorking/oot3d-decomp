// OoT3D decomp @ 001ec438  name=FUN_001ec438  size=248

void FUN_001ec438(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;

  FUN_00372f38(param_1,param_2,param_1 + 0x1c0,0,0,0);
  FUN_003532e8(param_1,0);
  uVar2 = FUN_00353fd4(param_1,param_2,0);
  uVar6 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar2);
  iVar4 = (int)((ulonglong)uVar6 >> 0x20);
  *(int *)(param_1 + 0x1a4) = (int)uVar6;
  uVar3 = (uint)*(ushort *)(param_2 + 0x104);
  uVar1 = uVar3;
  if (uVar3 == 99) {
    iVar4 = *(int *)(DAT_001ec530 + 4);
    uVar1 = DAT_001ec530;
  }
  if (uVar3 == 99 && iVar4 == 0) {
    bVar5 = (*(ushort *)(DAT_001ec534 + 0xee) & 0x100) == 0;
    if (!bVar5) {
      bVar5 = *(int *)(uVar1 + 8) == 0xfff0;
    }
    if (bVar5) {
      FUN_0037572c(DAT_001ec538,param_1);
      uVar2 = DAT_001ec548;
      if (((*(ushort *)(param_1 + 0x1c) & 1) != 0) &&
         ((*(ushort *)(DAT_001ec53c + 0x8a) & 0xf) == 6)) {
        *(undefined2 *)(DAT_001ec540 + param_2) = 0;
        uVar2 = DAT_001ec544;
      }
      *(undefined4 *)(param_1 + 0x1bc) = uVar2;
      return;
    }
  }
  FUN_00374428(param_1);
  return;
}

// OoT3D decomp @ 00379768  name=FUN_00379768  size=292

void FUN_00379768(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;

  uVar1 = DAT_00379890;
  iVar4 = *(int *)(DAT_0037988c + param_2);
  uVar2 = (uint)*(ushort *)(param_2 + 0x2b7e);
  bVar6 = 3 < uVar2;
  bVar5 = uVar2 != 4;
  if (bVar5) {
    uVar2 = uVar2 - 5;
    bVar6 = 4 < uVar2;
  }
  if ((bVar6 && (bVar5 && uVar2 != 5)) || (iVar3 = FUN_00366748(param_2), iVar3 != 0)) {
    if ((*(short *)(param_2 + 0x2b7e) == 3) && (iVar3 = FUN_00366748(param_2), iVar3 == 0)) {
      *(undefined2 *)(param_2 + 0x2b7e) = 4;
      *(undefined1 *)(param_1 + 0x22d) = 1;
      FUN_00367c7c(param_2,DAT_00379898,0);
      *(undefined2 *)(param_1 + 0x22e) = 5;
      FUN_0035a008(param_2,(int)*(short *)(param_1 + 0x2ac));
      FUN_0036e980(param_2,0,8);
      *(undefined4 *)(param_1 + 0x1a4) = uVar1;
      return;
    }
    if (*(short *)(param_2 + 0x2b7e) == 1) {
      FUN_0035a050(param_1,param_2,0);
      *(uint *)(iVar4 + 0x1714) = *(uint *)(iVar4 + 0x1714) | 0x800000;
      return;
    }
  }
  else {
    FUN_00367c7c(param_2,DAT_00379894,0);
    *(undefined2 *)(param_1 + 0x22e) = 5;
    FUN_0035a008(param_2,(int)*(short *)(param_1 + 0x2ac));
    *(undefined2 *)(param_1 + 0x2ac) = 0xffff;
    FUN_0036e980(param_2,0,8);
    *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  }
  return;
}

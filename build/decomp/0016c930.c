// OoT3D decomp @ 0016c930  name=FUN_0016c930  size=168

void FUN_0016c930(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar2 == 4) && (iVar2 = FUN_00346964(param_2), iVar2 != 0)) {
    iVar2 = FUN_00369f3c(param_2);
    uVar1 = DAT_0016c9d8;
    if (iVar2 == 0) {
      if (*(short *)(DAT_0016c9e0 + 0x48) < 200) {
        FUN_0036be34(param_2,200);
        *(undefined4 *)(param_1 + 0xbb0) = uVar1;
        return;
      }
      FUN_003724dc(DAT_0016c9e8,DAT_0016c9e4,param_1,param_2,0x28);
      *(undefined4 *)(param_1 + 0xbb0) = DAT_0016c9ec;
      return;
    }
    if (iVar2 == 1) {
      FUN_0036be34(param_2,DAT_0016c9dc);
      *(undefined4 *)(param_1 + 0xbb0) = uVar1;
    }
  }
  return;
}

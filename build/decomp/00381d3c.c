// OoT3D decomp @ 00381d3c  name=FUN_00381d3c  size=116

void FUN_00381d3c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar2 == 4) && (iVar2 = FUN_00346964(param_2), iVar2 != 0)) {
    iVar2 = FUN_00369f3c(param_2);
    uVar1 = DAT_00381db8;
    if (iVar2 == 0) {
      *(byte *)(*(int *)(DAT_00381db4 + param_2) + 0x172a) =
           *(byte *)(*(int *)(DAT_00381db4 + param_2) + 0x172a) | 0x20;
      *(undefined4 *)(param_1 + 0x9ac) = uVar1;
      return;
    }
    if (iVar2 == 1) {
      *(undefined4 *)(param_1 + 0x9ac) = DAT_00381db0;
    }
  }
  return;
}

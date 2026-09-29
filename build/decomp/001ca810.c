// OoT3D decomp @ 001ca810  name=FUN_001ca810  size=252

void FUN_001ca810(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;

  iVar3 = *(int *)(DAT_001ca90c + param_2);
  if ((*(int *)(param_2 + 0x7fa8) == 0) && (iVar1 = FUN_0036a7a0(param_2), iVar1 == 0)) {
    iVar1 = FUN_003705a0(*(undefined4 *)(param_1 + 8),DAT_001ca910,param_1 + 0x28);
    if (iVar1 == 0) {
      FUN_00373264(param_1,DAT_001ca914);
    }
    else {
      if (*(short *)(param_1 + 0x1c) == 2) {
        uVar2 = *(uint *)(param_2 + 0x7fac) | 1;
      }
      else {
        if (*(short *)(param_1 + 0x1c) != 3) goto LAB_001ca894;
        uVar2 = *(uint *)(param_2 + 0x7fac) | 2;
      }
      *(uint *)(param_2 + 0x7fac) = uVar2;
    }
  }
LAB_001ca894:
  FUN_00345fe0(param_1,param_2);
  if ((*(byte *)(param_1 + 0x239) & 2) == 0) {
    if (*(int *)(param_2 + 0x7fac) == 3) {
      *(undefined4 *)(param_2 + 0x7fac) = 4;
      *(ushort *)(iVar3 + 0x90) = *(ushort *)(iVar3 + 0x90) | 0x100;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x1c0) = 0x1e;
    *(undefined4 *)(param_2 + 0x7fa8) = 1;
    *(undefined4 *)(param_1 + 0x1bc) = DAT_001ca918;
  }
  if (((*(byte *)(param_1 + 0x1e0) & 2) != 0) && (*(int *)(param_1 + 0x314) == 0)) {
    *(undefined4 *)(param_1 + 0x314) = 0x1e;
    *(byte *)(param_1 + 0x1e0) = *(byte *)(param_1 + 0x1e0) & 0xfd;
  }
  return;
}

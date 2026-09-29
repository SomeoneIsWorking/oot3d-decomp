// OoT3D decomp @ 003da18c  name=FUN_003da18c  size=240

void FUN_003da18c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  iVar3 = *(int *)(DAT_003da27c + param_2);
  iVar2 = FUN_0036a7a0(param_2);
  if ((((iVar2 == 0) && ((*(uint *)(iVar3 + 0x1714) & 0x10) == 0)) &&
      (-1 < *(char *)(DAT_003da280 + iVar3))) && (*(int *)(param_1 + 0x98) < DAT_003da284)) {
    if ((uint)DAT_003da288 < (uint)*(float *)(param_1 + 0x9c)) {
      if (DAT_003da28c - *(float *)(iVar3 + 0x1354) < *(float *)(param_1 + 0x9c)) {
        FUN_00374a58(DAT_003da290,param_1 + 0x1a4,9);
        uVar1 = DAT_003da294;
        *(undefined4 *)(param_1 + 0x6c) = DAT_003da294;
        *(undefined4 *)(param_1 + 100) = uVar1;
        *(undefined2 *)(param_1 + 0x7e0) = 0xffbb;
        *(undefined4 *)(param_1 + 0x7dc) = DAT_003da298;
        *(undefined4 *)(param_1 + 0x7e4) = *(undefined4 *)(param_1 + 0x9c);
        FUN_00330d5c(param_2,param_1,0x25);
        FUN_00371808(param_2,DAT_003da2a0,DAT_003da29c,param_1,0);
      }
    }
  }
  return;
}

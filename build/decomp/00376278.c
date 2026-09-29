// OoT3D decomp @ 00376278  name=FUN_00376278  size=44

int FUN_00376278(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;

  FUN_0037632c(param_1,param_1 + 0x1a8);
  piVar2 = (int *)(param_1 + 0x1a8);
  iVar1 = FUN_00366738();
  if (iVar1 != 1) {
    pcVar3 = *(code **)(DAT_00376328 + (uint)*(byte *)(param_1 + 0x1bd) * 4);
    (*pcVar3)(param_2,piVar2,pcVar3,extraout_r3,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
    if ((((*piVar2 == 0) || (*(int *)(*piVar2 + 0x13c) != 0)) &&
        (iVar1 = *(int *)(param_2 + 0x5e38), iVar1 < 0x32)) &&
       ((*(ushort *)(param_2 + 0x5c7a) & 1) == 0)) {
      *(int **)(param_2 + iVar1 * 4 + 0x5e3c) = piVar2;
      *(int *)(param_2 + 0x5e38) = *(int *)(param_2 + 0x5e38) + 1;
      return iVar1;
    }
  }
  return -1;
}

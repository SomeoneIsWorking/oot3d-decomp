// OoT3D decomp @ 00174374  name=FUN_00174374  size=188

void FUN_00174374(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;

  FUN_00370734(param_1 + 0x1a4);
  if (*(int *)(param_1 + 0xcc) < DAT_0017455c) {
    FUN_00373500(DAT_00174568,DAT_00174560,DAT_00174564,param_1 + 0xcc);
  }
  iVar1 = FUN_0035ea34(param_2 + 0xa98,*(undefined4 *)(param_1 + 0x7c),
                       *(undefined1 *)(param_1 + 0x81));
  if (iVar1 == 4 || iVar1 == 7) {
    iVar1 = *(int *)(param_1 + 0x98);
    bVar2 = iVar1 == DAT_0017456c;
    if (iVar1 <= DAT_0017456c) {
      bVar2 = (*(ushort *)(param_1 + 0x90) & 8) == 0;
    }
    if (bVar2) {
      if ((iVar1 < DAT_00174574) && (*(short *)(param_1 + 0x4a4) == 0)) {
        *(undefined2 *)(param_1 + 0x4a4) = 0x2d;
      }
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
  *(undefined4 *)(param_1 + 0x4a0) = DAT_00174570;
  return;
}

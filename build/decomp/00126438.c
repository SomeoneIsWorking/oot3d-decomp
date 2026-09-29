// OoT3D decomp @ 00126438  name=FUN_00126438  size=400

void FUN_00126438(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  uint uVar8;

  if (*(short *)(param_1 + 0x21e) != 0) {
    FUN_00370084(param_1 + 0x238,(int)*(short *)(param_1 + 0x21e),5,2000);
  }
  iVar5 = DAT_00126654;
  if (*(short *)(param_1 + 0x1c) == 1) {
    *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x30);
    iVar5 = (int)((ulonglong)((longlong)iVar5 * (longlong)(int)*(short *)(param_1 + 0x218)) >> 0x20)
    ;
    if (((iVar5 >> 1) - (iVar5 >> 0x1f)) * -0xb + (int)*(short *)(param_1 + 0x218) == 0) {
      FUN_0037547c(DAT_00126660,param_1 + 0x1d8,4,DAT_0012665c,DAT_0012665c,DAT_00126658);
    }
  }
  FUN_00370734(param_1 + 0x26c);
  uVar1 = DAT_00126668;
  FUN_00373500(DAT_00126664,DAT_00126668,DAT_00126664,param_1 + 0x5c);
  uVar2 = DAT_00126670;
  FUN_00373500(DAT_00126674,DAT_00126670,DAT_0012666c,param_1 + 0x54);
  FUN_00373500(DAT_00126678,uVar2,uVar1,param_1 + 0x2c);
  fVar4 = DAT_00126680;
  piVar3 = DAT_0012667c;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  uVar8 = (uint)(fVar4 / fVar7 + DAT_00126684);
  bVar6 = uVar8 == (int)*(short *)(param_1 + 0x22c);
  if (bVar6) {
    uVar8 = (uint)*(ushort *)(param_1 + 0x1c);
  }
  if (bVar6 && uVar8 == 1) {
    FUN_00375bcc(param_1,DAT_00126688);
  }
  if (*(short *)(param_1 + 0x22c) == 0) {
    if (*(short *)(param_1 + 0x1c) == 1) {
      if (*(char *)(*(int *)(param_1 + 0x124) + 0x271) == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      *(undefined4 *)(param_1 + 0x254) = DAT_0012668c;
      *(undefined4 *)(param_1 + 0x140) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x1a6) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x124) + 0x26e) = 1;
    }
  }
  return;
}

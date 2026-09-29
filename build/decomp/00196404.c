// OoT3D decomp @ 00196404  name=FUN_00196404  size=308

void FUN_00196404(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;

  iVar2 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar2 == 0) {
    return;
  }
  if (DAT_00196538[*(short *)(*DAT_00196538 + 0x1c) + -0x14] == 8) {
    if (DAT_00196538[*(short *)(DAT_00196538[1] + 0x1c) + -0x14] == 8) {
      FUN_00370350(DAT_0019653c,param_1 + 0x1a4,0x19);
      uVar1 = DAT_00196540;
      *(byte *)(param_1 + 0x128d) = *(byte *)(param_1 + 0x128d) | 1;
      uVar3 = DAT_00196544;
      *(undefined4 *)(param_1 + 0x6c) = uVar1;
      goto LAB_0019652c;
    }
LAB_0019648c:
    if (DAT_00196538[*(short *)(DAT_00196538[1] + 0x1c) + -0x14] != 9) {
      if (*(int *)(param_1 + 0x1d4) == 0x15) {
        FUN_00374a58(DAT_0019653c,param_1 + 0x1a4,0x13);
        *(byte *)(param_1 + 0x128d) = *(byte *)(param_1 + 0x128d) & 0xfe;
        uVar3 = DAT_0019654c;
      }
      else {
        uVar3 = DAT_00196550;
        if (*(int *)(param_1 + 0x1d4) != 0x18) {
          FUN_00370350(DAT_0019653c,param_1 + 0x1a4,0x18);
          uVar3 = DAT_00196550;
        }
      }
      goto LAB_0019652c;
    }
  }
  else if (DAT_00196538[*(short *)(*DAT_00196538 + 0x1c) + -0x14] != 9) goto LAB_0019648c;
  FUN_00370350(DAT_0019653c,param_1 + 0x1a4,0x19);
  *(byte *)(param_1 + 0x128d) = *(byte *)(param_1 + 0x128d) | 1;
  *(undefined1 *)(param_1 + 0x231) = 0;
  uVar3 = DAT_00196548;
LAB_0019652c:
  *(undefined4 *)(param_1 + 0x22c) = uVar3;
  return;
}

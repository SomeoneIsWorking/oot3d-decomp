// OoT3D decomp @ 00456f74  name=FUN_00456f74  size=144

void FUN_00456f74(void)

{
  int iVar1;
  int iVar2;
  int iVar3;

  FUN_002e5d60(DAT_00457004);
  iVar1 = DAT_00457008;
  iVar3 = *(int *)(DAT_00457008 + 0x14);
  while (iVar3 != iVar1) {
    if ((*(int *)(iVar3 + 0x20) < 0) &&
       (*(short *)(iVar3 + 4) == 0 && (*(ushort *)(iVar3 + 6) & 2) == 0)) {
      iVar2 = *(int *)(iVar3 + 0x14);
      *(int *)(*(int *)(iVar3 + 0x10) + 0x14) = iVar2;
      *(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x10) = *(undefined4 *)(iVar3 + 0x10);
      *(undefined4 *)(iVar3 + 0x10) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0;
      FUN_002e5bb4(iVar3 + 0x30);
      iVar3 = iVar2;
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x14);
    }
  }
  FUN_002e5cfc(DAT_00457004);
  return;
}

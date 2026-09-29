// OoT3D decomp @ 001e1870  name=FUN_001e1870  size=268

void FUN_001e1870(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  *(undefined1 *)(param_1 + 0x19a) = 1;
  FUN_00372f38(param_1,param_2,param_1 + 0x1c0,0,0);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar1 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_001e19e8 + iVar1) != 0)
     ) {
    iVar1 = iVar1 + 0x3a5c;
  }
  else {
    iVar1 = 0;
  }
  uVar2 = FUN_003532c0(iVar1 + 0x10,0);
  FUN_003532e8(param_1,1);
  uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar2);
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  iVar1 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x18) >> 0x1a);
  if (iVar1 == 0) {
    FUN_0037572c(*(undefined4 *)(((int)*(short *)(param_1 + 0x1c) & 2U) * 2 + DAT_001e19ec),param_1)
    ;
    FUN_003510b0(param_1,DAT_001e19f0);
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}

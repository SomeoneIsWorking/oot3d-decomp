// OoT3D decomp @ 003840c8  name=FUN_003840c8  size=284

void FUN_003840c8(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  uint in_fpscr;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;

  iVar2 = *(int *)(param_1 + 0x124);
  local_2c = *(undefined4 *)(iVar2 + 0xfdc);
  uStack_28 = *(undefined4 *)(iVar2 + 0xfe0);
  uStack_24 = *(undefined4 *)(iVar2 + 0xfe4);
  uVar1 = FUN_0037587c(*(int *)(param_1 + 0x124) + 0x28,param_1 + 0x28);
  *(undefined2 *)(param_1 + 0x34) = uVar1;
  if ((*(byte *)(param_1 + 0x10f9) & 2) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  FUN_0031dc84(param_1,param_2);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x1100)) {
    iVar4 = *(int *)(param_1 + 0x1104);
    while ((*(byte *)(iVar4 + iVar2 * 0x50 + 0x16) & 2) == 0) {
      iVar2 = iVar2 + 1;
      if (*(int *)(param_1 + 0x1100) <= iVar2) {
        return;
      }
    }
    psVar3 = (short *)(iVar2 * 0x50 + 0xe + iVar4);
    local_38 = VectorSignedToFloat((int)*psVar3,(byte)(in_fpscr >> 0x15) & 3);
    local_30 = VectorSignedToFloat((int)psVar3[2],(byte)(in_fpscr >> 0x15) & 3);
    local_34 = VectorSignedToFloat((int)psVar3[1],(byte)(in_fpscr >> 0x15) & 3);
    FUN_003741e4(param_2,**(undefined4 **)(iVar4 + iVar2 * 0x50 + 0x24),0,&local_38,0);
  }
  return;
}

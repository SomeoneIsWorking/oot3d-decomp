// OoT3D decomp @ 001b3a8c  name=FUN_001b3a8c  size=464

void FUN_001b3a8c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fpscr;
  undefined4 uVar4;

  uVar3 = DAT_001b3c80;
  uVar4 = 0;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar1 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_001b3c7c + iVar1) != 0)
     ) {
    iVar1 = iVar1 + 0x3a5c;
  }
  else {
    iVar1 = 0;
  }
  iVar1 = iVar1 + 0x10;
  *(undefined4 *)(param_1 + 0x318) = DAT_001b3c80;
  FUN_0037572c(DAT_001b3c84,param_1);
  uVar2 = ObjectBankArchive_00358ef8(iVar1,0);
  FUN_00358ea8(iVar1,param_2,param_1 + 0x1bc,uVar2,*(undefined4 *)(param_1 + 0x178),0,0,0,0,uVar4);
  uVar4 = FUN_0036ae14(param_1 + 0x1bc,0);
  uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  if (*(ushort *)(param_1 + 0x1c) == 0xffff) {
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1e4),1);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1e4),3);
  }
  else if ((~*(ushort *)(param_1 + 0x1c) & 0xff) == 0) {
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1e4),0);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1e4),2);
    if ((*(ushort *)(param_1 + 0x1c) & 0x8000) != 0) {
      *(undefined4 *)(param_1 + 0x318) = DAT_001b3c88;
    }
  }
  FUN_00353020(uVar3,DAT_001b3c8c,uVar4,DAT_001b3c8c,param_1 + 0x1bc,DAT_001b3c90,0);
  FUN_003532e8(param_1,0);
  if (*(short *)(param_1 + 0x1c) == -1) {
    uVar3 = FUN_003532c0(iVar1,0);
    uVar4 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar3);
    uVar3 = DAT_001b3c94;
    *(undefined4 *)(param_1 + 0x1a4) = uVar4;
    *(undefined4 *)(param_1 + 0x100) = uVar3;
    *(undefined4 *)(param_1 + 0x104) = DAT_001b3c98;
    uVar3 = DAT_001b3c9c;
  }
  else {
    *(undefined4 *)(param_1 + 0x100) = DAT_001b3ca0;
    *(undefined4 *)(param_1 + 0x104) = DAT_001b3ca4;
    uVar3 = DAT_001b3ca8;
  }
  *(undefined4 *)(param_1 + 0xfc) = uVar3;
  *(undefined2 *)(param_1 + 0x310) = 6;
  *(undefined2 *)(param_1 + 0x312) = 1000;
  *(undefined2 *)(param_1 + 0x314) = 1;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}

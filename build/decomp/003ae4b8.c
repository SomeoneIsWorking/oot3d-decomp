// OoT3D decomp @ 003ae4b8  name=FUN_003ae4b8  size=268

void FUN_003ae4b8(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint in_fpscr;

  iVar6 = *(int *)(DAT_003ae5c4 + param_2);
  iVar4 = FUN_0036bc98(param_1);
  sVar3 = (short)DAT_003ae5c8;
  if (iVar4 == 0) {
    sVar1 = *(short *)(param_1 + 0x92);
    sVar2 = *(short *)(param_1 + 0xbe);
    *(short *)(DAT_003ae5cc + param_1) = sVar3;
    if (((int)(short)(sVar1 - sVar2) + 0x27d8U <= DAT_003ae5ec) &&
       (*(int *)(param_1 + 0x98) < DAT_003ae5f0)) {
      FUN_0036bbd0(DAT_003ae5f4,param_1,param_2,7);
      return;
    }
  }
  else {
    iVar4 = FUN_0036bc84(param_2);
    if (iVar4 == 7) {
      *(short *)(DAT_003ae5cc + iVar6) = sVar3 + 1;
      *(undefined4 *)(param_1 + 0x708) = DAT_003ae5d0;
      uVar5 = FUN_0036ae14(param_1 + 0x1fc,0);
      uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(DAT_003ae5dc,DAT_003ae5d8,uVar5,DAT_003ae5d4,param_1 + 0x1fc,0);
      uVar5 = DAT_003ae5e4;
      *(undefined2 *)(DAT_003ae5e0 + param_1) = 0x28;
      FUN_00372244(param_2 + 0x5fcc,0x1e,uVar5);
      return;
    }
    *(short *)(DAT_003ae5cc + iVar6) = sVar3;
    *(undefined4 *)(param_1 + 0x708) = DAT_003ae5e8;
  }
  return;
}

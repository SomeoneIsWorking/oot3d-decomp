// OoT3D decomp @ 0010ddb8  name=FUN_0010ddb8  size=244

void FUN_0010ddb8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint in_fpscr;

  iVar2 = FUN_0036bba8(param_2,0xb);
  uVar4 = DAT_0010deb4;
  iVar1 = DAT_0010deac;
  if ((iVar2 == 0) && (iVar2 = DAT_0010deac, (*(ushort *)(DAT_0010deb0 + 0xf8) & 0x80) == 0)) {
    iVar2 = DAT_0010deac + -1;
  }
  iVar3 = FUN_0036bc98(param_1,param_2);
  if (iVar3 == 0) {
    *(short *)(DAT_0010dec4 + param_1) = (short)iVar2;
    if (((int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 0x2300U < 0x4601)
       && (*(int *)(param_1 + 0x98) < DAT_0010dec8)) {
      FUN_0036bb28(DAT_0010decc,param_1,param_2);
      return;
    }
    *(ushort *)(param_1 + 0x83c) = *(ushort *)(param_1 + 0x83c) | 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x840) = uVar4;
    if (iVar2 == iVar1) {
      uVar4 = FUN_0036ae14(param_1 + 0x1fc,0);
      uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(DAT_0010dec0,DAT_0010debc,uVar4,DAT_0010deb8,param_1 + 0x1fc,0);
      return;
    }
  }
  return;
}

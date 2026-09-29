// OoT3D decomp @ 0018f7ec  name=FUN_0018f7ec  size=728

void FUN_0018f7ec(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint in_fpscr;

  *(undefined1 *)(param_1 + 0x19a) = 1;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_0018fac4 + iVar2) != 0)
     ) {
    iVar2 = iVar2 + 0x3a5c;
  }
  else {
    iVar2 = 0;
  }
  uVar3 = ObjectBankArchive_00358ef8(iVar2 + 0x10,0);
  FUN_00353e78(iVar2 + 0x10,param_2,param_1 + 0x1a4,uVar3);
  uVar4 = FUN_0036ae18(param_1 + 0x1a4,5);
  uVar1 = DAT_0018facc;
  uVar3 = DAT_0018fac8;
  uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_0018facc,DAT_0018fac8,uVar4,DAT_0018fac8,param_1 + 0x1a4,5,0);
  FUN_0035c358(param_1 + 0x228,param_1 + 0x1a4,0,2);
  FUN_00353dd0(param_2,param_1 + 0x3f8);
  FUN_00353d24(param_2,param_1 + 0x3f8,param_1,DAT_0018fad0);
  FUN_0037572c(DAT_0018fad4,param_1);
  FUN_00372d4c(uVar3,DAT_0018fad8,param_1 + 0xbc,DAT_0018fadc);
  iVar2 = DAT_0018fae0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  if (*(int *)(iVar2 + 0x4e8) < 4) {
    iVar2 = FUN_00350cf4(9);
    if (((iVar2 != 0) && (iVar2 = FUN_00350cf4(0x25), iVar2 != 0)) &&
       (iVar2 = FUN_00350cf4(0x37), iVar2 != 0)) {
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      return;
    }
    iVar2 = FUN_00350cf4(9);
    uVar4 = DAT_0018faec;
    if (((iVar2 != 0) && (iVar2 = FUN_00350cf4(0x25), iVar2 != 0)) ||
       ((iVar2 = FUN_00350cf4(9), iVar2 != 0 && (iVar2 = FUN_00350cf4(0x37), iVar2 != 0)))) {
      uVar5 = FUN_0036ae18(param_1 + 0x1a4,0);
      uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar1,uVar3,uVar5,uVar3,param_1 + 0x1a4,0);
      *(short *)(param_1 + 0x116) = (short)DAT_0018faf0;
      *(undefined4 *)(param_1 + 0x3f4) = uVar4;
      return;
    }
    iVar2 = FUN_00350cf4(0x40);
    if (iVar2 != 0) {
      uVar5 = FUN_0036ae18(param_1 + 0x1a4,0);
      uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar1,uVar3,uVar5,uVar3,param_1 + 0x1a4,0);
      *(short *)(param_1 + 0x116) = (short)DAT_0018faf4;
      *(undefined4 *)(param_1 + 0x3f4) = uVar4;
      return;
    }
    *(undefined2 *)(param_1 + 0x116) = 0xffff;
    uVar3 = DAT_0018faf8;
  }
  else {
    uVar4 = FUN_0036ae18(param_1 + 0x1a4,0);
    uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar1,uVar3,uVar4,uVar3,param_1 + 0x1a4,0);
    *(undefined2 *)(DAT_0018fae4 + param_1) = 0;
    uVar3 = DAT_0018fae8;
  }
  *(undefined4 *)(param_1 + 0x3f4) = uVar3;
  return;
}

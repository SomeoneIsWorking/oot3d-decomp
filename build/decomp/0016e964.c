// OoT3D decomp @ 0016e964  name=FUN_0016e964  size=184

void FUN_0016e964(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint in_fpscr;

  FUN_0035fb14();
  iVar3 = FUN_0035d0bc(param_1,param_2);
  if (iVar3 != 0) {
    uVar4 = FUN_0036ae14(param_1 + 0x1a4,4);
    uVar1 = DAT_0016ea1c;
    uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_0016ea20,DAT_0016ea1c,uVar4,DAT_0016ea1c,param_1 + 0x1a4,4,0);
    uVar2 = DAT_0016ea28;
    uVar4 = DAT_0016ea24;
    *(undefined4 *)(param_1 + 100) = uVar1;
    *(undefined4 *)(param_1 + 0x70) = uVar4;
    *(undefined4 *)(param_1 + 0x498) = uVar2;
  }
  FUN_00375a18(param_1 + 0xbe,0,4,1000,10);
  iVar3 = DAT_0016ea30;
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_1 + 0xbc);
  *(ushort *)(iVar3 + param_1) = *(ushort *)(DAT_0016ea2c + param_1) & 0xff;
  return;
}

// OoT3D decomp @ 0013336c  name=FUN_0013336c  size=184

void FUN_0013336c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;

  FUN_0035fb14();
  FUN_00375a18(param_1 + 0xbe,0,4,1000,10);
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_1 + 0xbc);
  iVar2 = FUN_0035d0bc(param_1,param_2);
  if (iVar2 != 0) {
    *(undefined2 *)(param_1 + 0x516) = 0x5a;
    uVar3 = FUN_0036ae14(param_1 + 0x1a4,4);
    uVar1 = DAT_00133424;
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_00133428,DAT_00133424,uVar3,DAT_00133424,param_1 + 0x1a4,4,0);
    uVar3 = DAT_0013342c;
    *(undefined4 *)(param_1 + 100) = uVar1;
    *(undefined4 *)(param_1 + 0x70) = uVar3;
    *(undefined2 *)(param_1 + 0x510) = 7;
    *(undefined4 *)(param_1 + 0x498) = DAT_00133430;
  }
  return;
}

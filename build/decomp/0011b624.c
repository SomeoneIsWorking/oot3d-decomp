// OoT3D decomp @ 0011b624  name=FUN_0011b624  size=184

void FUN_0011b624(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;

  FUN_003731e0(param_1 + 0x1a4);
  uVar2 = uRam0011b6dc;
  iVar1 = FUN_003736fc(uRam0011b6e0,uRam0011b6dc,param_1 + 0x1a4);
  if (iVar1 != 0) {
    func_0x00375bcc(param_1,uRam0011b6e4);
    func_0x00375bcc(param_1,uRam0011b6e8);
  }
  iVar1 = FUN_003736fc(*(undefined4 *)(param_1 + 0x310),uVar2,param_1 + 0x1a4);
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_1 + 0x124);
    func_0x00374a58(uRam0011b6ec,param_1 + 0x1a4,7);
    *(undefined4 *)(param_1 + 0x2b0) = uRam0011b6f0;
    uVar2 = FUN_0036ae14(param_1 + 0x1a4,7);
    iVar1 = iRam0011b6f4;
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x310) = uVar2;
    *(undefined2 *)(iVar1 + iVar3) = 0x2d;
    *(undefined2 *)(param_1 + 0x2b8) = 0;
  }
  return;
}

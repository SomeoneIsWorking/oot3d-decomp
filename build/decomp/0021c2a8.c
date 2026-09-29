// OoT3D decomp @ 0021c2a8  name=FUN_0021c2a8  size=116

void FUN_0021c2a8(int param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  bool bVar4;
  uint in_fpscr;

  uVar2 = *(ushort *)(param_1 + 500);
  if (uVar2 == 0) {
    uVar3 = FUN_0036ae14(param_1 + 0x2fc,1);
    *(short *)(param_1 + 0x1fe) = (short)uVar3;
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uRam0021c370,DAT_0021c36c,uVar3,DAT_0021c368,param_1 + 0x2fc,1,2);
    uVar3 = uRam0021c374;
    *(undefined1 *)(param_1 + 0x1a8) = 0;
    uVar1 = uRam0021c378;
    *(undefined4 *)(param_1 + 0x2e8) = uVar3;
    FUN_00375bcc(param_1,uVar1);
    *(undefined4 *)(param_1 + 0x1a4) = uRam0021c37c;
    return;
  }
  bVar4 = uVar2 == 1;
  if (bVar4) {
    uVar2 = (ushort)*(byte *)(param_1 + 0x206);
  }
  if (bVar4 && uVar2 == 1) {
    FUN_0037547c(DAT_0021c364,0,4,DAT_0021c360,DAT_0021c360,DAT_0021c35c);
  }
  return;
}

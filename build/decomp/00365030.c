// OoT3D decomp @ 00365030  name=FUN_00365030  size=128

void FUN_00365030(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;

  uVar2 = FUN_0036ae14(param_1 + 0x1e0,2);
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_003650b8,uVar2,DAT_003650b4,DAT_003650b0,param_1 + 0x1e0,2);
  uVar2 = DAT_003650bc;
  *(undefined4 *)(param_1 + 0xbfc) = 0;
  iVar1 = DAT_003650c4;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 100) = DAT_003650c0;
  *(undefined2 *)(iVar1 + param_1) = 0;
  *(undefined4 *)(param_1 + 0xbe8) = 3;
  FUN_00375bcc(param_1,DAT_003650c8);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  *(undefined4 *)(param_1 + 0xbf0) = DAT_003650cc;
  return;
}

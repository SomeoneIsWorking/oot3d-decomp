// OoT3D decomp @ 001796b8  name=FUN_001796b8  size=232

void FUN_001796b8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;

  FUN_003731e0(param_1 + 0x1a4);
  FUN_0036fc20(DAT_001797a4,DAT_001797a0,param_1 + 0x6c);
  uVar2 = FUN_0036e800(param_1,*(undefined4 *)(DAT_001797a8 + param_2));
  FUN_00370084(param_1 + 0x36,uVar2,2,4000);
  FUN_00370084(param_1 + 0xbe,uVar2,2,DAT_001797ac);
  iVar1 = DAT_001797b0;
  if (*(short *)(param_1 + 0x724) == 0) {
    uVar2 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(DAT_001797b0 + 0x10));
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_001797b8,DAT_001797b4,uVar2,DAT_001797b4,param_1 + 0x1a4,
                 *(undefined4 *)(iVar1 + 0x10),2);
    uVar2 = DAT_001797c0;
    *(undefined4 *)(param_1 + 0x708) = DAT_001797bc;
    *(undefined4 *)(param_1 + 100) = uVar2;
    if (*(short *)(param_1 + 0x1c) < 6) {
      FUN_00375bcc(param_1,DAT_001797c4);
    }
    else {
      FUN_00375bcc(param_1,DAT_001797c8);
    }
  }
  *(undefined2 *)(param_1 + 0x71c) = 0;
  return;
}

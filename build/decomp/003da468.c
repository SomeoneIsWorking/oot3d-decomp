// OoT3D decomp @ 003da468  name=FUN_003da468  size=124

void FUN_003da468(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  *(float *)(param_1 + 100) = *(float *)(param_1 + 100) + DAT_003da4e4;
  iVar2 = FUN_003705a0(*(undefined4 *)(param_1 + 0xc),param_1 + 0x2c);
  uVar1 = DAT_003da4e8;
  if (iVar2 != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffcf;
    FUN_00375bcc(param_1,uVar1);
    if (*(short *)(param_1 + 0x1c) == 0) {
      if (*(char *)(DAT_003da4ec + param_2) == '\n') {
        *(undefined1 *)(param_1 + 3) = 10;
      }
      else {
        FUN_00374428(param_1);
      }
    }
    *(undefined4 *)(param_1 + 0x1bc) = DAT_003da4f0;
  }
  return;
}

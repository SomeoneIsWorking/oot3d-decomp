// OoT3D decomp @ 00154564  name=FUN_00154564  size=128

void FUN_00154564(int param_1)

{
  undefined4 uVar1;
  float fVar2;

  uVar1 = DAT_001545e4;
  if (*(short *)(param_1 + 0x4ac) < 0x37) {
    fVar2 = (float)FUN_003738a8(DAT_001545e4);
    *(short *)(param_1 + 0xbc) = (short)(int)fVar2;
    fVar2 = (float)FUN_003738a8(uVar1);
    *(short *)(param_1 + 0xc0) = (short)(int)fVar2;
    if (*(short *)(param_1 + 0x4ac) == 0) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xf7ffffff | 5;
      uVar1 = DAT_001545e8;
      if (*(short *)(param_1 + 0x4ae) != 0) {
        uVar1 = DAT_001545ec;
      }
      *(undefined4 *)(param_1 + 0x4a0) = uVar1;
    }
  }
  return;
}

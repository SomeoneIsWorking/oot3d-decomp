// OoT3D decomp @ 001208cc  name=FUN_001208cc  size=120

void FUN_001208cc(int param_1,undefined4 param_2)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;

  iVar1 = FUN_003731e0(param_1 + 0x1bc);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x1f8) < 0x41000000) {
      fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x4ba),
                                         (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x4ba) = (short)(int)(fVar2 - DAT_00120944);
    }
  }
  else {
    FUN_0036461c(param_1,param_2);
  }
  *(undefined2 *)(param_1 + 0x11a) = 0x78;
  return;
}

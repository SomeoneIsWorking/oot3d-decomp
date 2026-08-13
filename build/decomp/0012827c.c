// OoT3D decomp @ 0012827c  name=FUN_0012827c  size=336

void FUN_0012827c(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;

  FUN_003731e0(param_1 + 0x1a4);
  sVar1 = *(short *)(param_1 + 0x2b6);
  iVar2 = func_0x00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),3,2000,0);
  uVar3 = uRam001283cc;
  *(short *)(param_1 + 0x2b6) = (short)iVar2;
  if (((int)sVar1 + 1000U < 0x7d1) && (2000 < iVar2 + 1000U)) {
    func_0x00370350(uVar3,param_1 + 0x1a4,10);
  }
  fVar4 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
  if ((iRam001283d0 < (int)ABS(fVar4)) &&
     (fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x2b6),
                                         (byte)(in_fpscr >> 0x15) & 3),
     (int)ABS(fVar4) <= iRam001283d0)) {
    func_0x00370350(uVar3,param_1 + 0x1a4,0xe);
  }
  if (*(short *)(param_1 + 0x2dc) == 0) {
    if (iRam001283d4 <= *(int *)(param_1 + 0x98)) {
      func_0x00374a58(uVar3,param_1 + 0x1a4,4);
      *(undefined4 *)(param_1 + 0x2b0) = uRam001283dc;
      uVar3 = FUN_0036ae14(param_1 + 0x1a4,4);
      uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x310) = uVar3;
      *(undefined2 *)(param_1 + 0x2b8) = 0;
      return;
    }
    func_0x00374a58(uVar3,param_1 + 0x1a4,0xb);
    *(undefined4 *)(param_1 + 0x2b0) = uRam001283d8;
    uVar3 = FUN_0036ae14(param_1 + 0x1a4,0xb);
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x310) = uVar3;
  }
  return;
}

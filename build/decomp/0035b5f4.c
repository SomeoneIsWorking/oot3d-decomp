// OoT3D decomp @ 0035b5f4  name=FUN_0035b5f4  size=260

void FUN_0035b5f4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;

  uVar4 = FUN_0036ae14(param_1 + 0x1e0,3);
  uVar2 = DAT_0035b6fc;
  uVar1 = DAT_0035b6f8;
  uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  if (*(short *)(param_1 + 0xc0c) != 0) {
    *(undefined2 *)(param_1 + 0xc0c) = 0xffff;
  }
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0xbe8) = 6;
  fVar5 = (float)FUN_003738a8();
  fVar6 = DAT_0035b704;
  fVar3 = DAT_0035b700;
  if ((int)fVar5 + 10 < 1) {
    fVar5 = (float)FUN_003738a8(uVar2);
    fVar5 = (float)VectorSignedToFloat((int)fVar5 + 10,(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = fVar5 * fVar3 * fVar6 - fVar6;
  }
  else {
    fVar5 = (float)FUN_003738a8(uVar2);
    fVar5 = (float)VectorSignedToFloat((int)fVar5 + 10,(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = fVar6 + fVar5 * fVar3 * fVar6;
  }
  *(int *)(param_1 + 0xbfc) = (int)fVar6;
  FUN_00375c08(uVar1,uVar1,uVar4,uVar1,param_1 + 0x1e0,3,2);
  *(undefined4 *)(param_1 + 0xbf0) = DAT_0035b708;
  return;
}

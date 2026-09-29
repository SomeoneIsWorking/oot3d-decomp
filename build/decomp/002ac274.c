// OoT3D decomp @ 002ac274  name=FUN_002ac274  size=228

void FUN_002ac274(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;

  FUN_00372f38(param_1,param_2,param_1 + 0x1c8,0x25,0);
  uVar1 = FUN_00353fd4(param_1,param_2,7);
  FUN_003532e8(param_1,0);
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  FUN_003510b0(param_1,DAT_002ac358);
  iVar2 = 0;
  do {
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(DAT_002ac35c + iVar2 * 2),
                                       (byte)(in_fpscr >> 0x15) & 3);
    if ((int)ABS(fVar3 - *(float *)(param_1 + 0xc)) < 0x3f800000) {
      *(short *)(param_1 + 0x1c0) = (short)iVar2;
      break;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  *(undefined2 *)(param_1 + 0x1c6) = *(undefined2 *)(DAT_002ac360 + *(short *)(param_1 + 0x1c0) * 2)
  ;
  *(undefined4 *)(param_1 + 0x1bc) = DAT_002ac364;
  return;
}

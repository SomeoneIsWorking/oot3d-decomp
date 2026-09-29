// OoT3D decomp @ 0031dae4  name=FUN_0031dae4  size=316

void FUN_0031dae4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;

  uVar1 = (uint)*(ushort *)(param_2 + 0x22b8);
  iVar2 = (int)*(short *)(*DAT_0031dc20 + 0x110);
  fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_0031dc24 / fVar3 + DAT_0031dc28) < (int)uVar1) {
    fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    if ((int)(DAT_0031dc2c / fVar3 + DAT_0031dc28) < (int)uVar1) {
      fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
      if ((int)uVar1 <= (int)(DAT_0031dc30 / fVar3 + DAT_0031dc28)) {
        *(undefined2 *)(param_1 + 0x3f4) = 3;
        *(undefined2 *)(param_1 + 0x3f8) = 1;
        return;
      }
      fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
      if ((int)uVar1 <= (int)(DAT_0031dc34 / fVar3 + DAT_0031dc28)) {
        *(undefined2 *)(param_1 + 0x3f4) = 0;
        *(undefined2 *)(param_1 + 0x3f8) = 3;
        return;
      }
      fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
      if ((int)uVar1 <= (int)(DAT_0031dc38 / fVar3 + DAT_0031dc28)) goto LAB_0031db34;
    }
    FUN_00330988(param_1);
    *(undefined2 *)(param_1 + 0x3f8) = 3;
    return;
  }
LAB_0031db34:
  FUN_00330988(param_1);
  *(undefined2 *)(param_1 + 0x3f8) = 0;
  return;
}

// OoT3D decomp @ 003f08ac  name=FUN_003f08ac  size=284

void FUN_003f08ac(int param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;

  pfVar1 = DAT_003f09cc;
  if (((*DAT_003f09c8 & 1) == 0) &&
     (iVar2 = FUN_003679b4(DAT_003f09c8), fVar4 = DAT_003f09d8, fVar3 = DAT_003f09d4, iVar2 != 0)) {
    *pfVar1 = DAT_003f09d0;
    pfVar1[1] = fVar3;
    pfVar1[2] = fVar4;
  }
  fVar4 = *(float *)(*(int *)(DAT_003f09dc + param_2) + 0x28) - *pfVar1;
  fVar3 = *(float *)(*(int *)(DAT_003f09dc + param_2) + 0x30) - pfVar1[2];
  if (((int)SQRT(fVar4 * fVar4 + fVar3 * fVar3) < DAT_003f09e0) &&
     (iVar2 = (**(code **)(DAT_003f09e4 + param_2))(param_2), iVar2 != 0)) {
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003f09e8 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(DAT_003f09f4 + param_1) = (short)(int)(DAT_003f09ec / fVar3 + DAT_003f09f0);
    *(undefined4 *)(param_1 + 0x944) = DAT_003f09f8;
  }
  *(undefined4 *)(param_1 + 0x938) = DAT_003f09fc;
  *(undefined4 *)(param_1 + 0x93c) = DAT_003f0a00;
  *(undefined4 *)(param_1 + 0x940) = DAT_003f0a04;
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x8ec);
  return;
}

// OoT3D decomp @ 003d7f64  name=FUN_003d7f64  size=444

void FUN_003d7f64(int param_1,int param_2)

{
  uint *puVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  float fVar5;

  fVar3 = DAT_003d831c;
  pfVar2 = DAT_003d8318;
  fVar5 = DAT_003d8314;
  puVar1 = DAT_003d8310;
  if (((DAT_003d8310[1] & 1) == 0) && (iVar4 = FUN_003679b4(DAT_003d8310 + 1), iVar4 != 0)) {
    *pfVar2 = fVar3;
    pfVar2[1] = fVar5;
    pfVar2[2] = fVar3;
  }
  if (((*puVar1 & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_003d8310), pfVar2 = DAT_003d8324, fVar5 = DAT_003d8320, iVar4 != 0))
  {
    *DAT_003d8324 = fVar3;
    pfVar2[1] = fVar5;
    pfVar2[2] = fVar3;
  }
  FUN_0036e168(DAT_003d8330,DAT_003d832c,DAT_003d8328,fVar3,param_1 + 0x6c);
  fVar5 = (float)FUN_0036e168((*(float *)(param_1 + 0xc) - DAT_003d8334) - DAT_003d8338,DAT_003d8340
                              ,*(undefined4 *)(param_1 + 0x6c),DAT_003d833c,param_1 + 0x2c);
  if (fVar5 == fVar3) {
    FUN_00375c10(param_2,(int)*(short *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x228) = DAT_003d8344;
    return;
  }
  if ((*(uint *)(param_2 + 0xf8) & 1) == 0) {
    FUN_0036627c(param_2 + 0x364,0,
                 (int)(short)(int)(((*(float *)(param_1 + 0x10c) - *(float *)(param_1 + 0x2c)) +
                                   *(float *)(param_1 + 0x6c) * DAT_003d8348) * DAT_003d8374),3);
    FUN_0037547c(DAT_003d8380,param_1 + 0x28,4,DAT_003d837c,DAT_003d837c,DAT_003d8378);
    return;
  }
  if ((*(uint *)(param_2 + 0xf8) & 2) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}

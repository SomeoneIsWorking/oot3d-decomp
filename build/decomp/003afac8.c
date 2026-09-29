// OoT3D decomp @ 003afac8  name=FUN_003afac8  size=468

void FUN_003afac8(int param_1,undefined4 param_2)

{
  short sVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;

  fVar2 = DAT_003afe34;
  if (*(ushort *)(param_1 + 0x744) != 0) {
    if ((*(ushort *)(param_1 + 0x744) & 4) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    sVar1 = *(short *)(param_1 + 0x744) + -1;
    *(short *)(param_1 + 0x744) = sVar1;
    if (sVar1 != 0) {
      return;
    }
    FUN_00375c44(param_2,param_1 + 0x28,0x28,DAT_003afe44);
    FUN_00375c44(param_2,param_1 + 0x28,0x28,DAT_003afe48);
  }
  FUN_00373500(DAT_003afe54,DAT_003afe50,DAT_003afe4c,param_1 + 0x54);
  FUN_0037572c(*(undefined4 *)(param_1 + 0x54),param_1);
  fVar4 = *(float *)(param_1 + 100);
  fVar5 = *(float *)(param_1 + 0x6c);
  *(float *)(param_1 + 0x28) =
       *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x71c) * fVar4 +
       *(float *)(param_1 + 0x734) * fVar5;
  *(float *)(param_1 + 0x2c) =
       *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x720) * fVar4 +
       *(float *)(param_1 + 0x738) * fVar5;
  *(float *)(param_1 + 0x30) =
       *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x724) * fVar4 +
       *(float *)(param_1 + 0x73c) * fVar5;
  fVar4 = fVar4 + *(float *)(param_1 + 0x70);
  *(float *)(param_1 + 100) = fVar4;
  if (fVar4 < *(float *)(param_1 + 0x74)) {
    fVar4 = *(float *)(param_1 + 0x74);
  }
  *(float *)(param_1 + 100) = fVar4;
  if (fVar4 < fVar2) {
    *(undefined1 *)(param_1 + 0x718) = 0;
  }
  iVar3 = FUN_0034ecb0(param_1,param_2,1);
  if (iVar3 != 1) {
    return;
  }
  FUN_00375bcc(param_1,DAT_003afe58);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}

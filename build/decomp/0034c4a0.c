// OoT3D decomp @ 0034c4a0  name=FUN_0034c4a0  size=236

void FUN_0034c4a0(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;

  uVar3 = FUN_0036ae14(param_1 + 0x1e0,7);
  fVar2 = DAT_0034c634;
  uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_0034c638,DAT_0034c634,uVar3,DAT_0034c634,param_1 + 0x1e0,7,1);
  iVar4 = *(int *)(DAT_0034c63c + param_2);
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),1,4000,1);
  sVar1 = *(short *)(iVar4 + 0xbe);
  fVar5 = (float)FUN_002cfca0((int)(short)(sVar1 - *(short *)(param_1 + 0xbe)));
  if (fVar2 < fVar5) {
    *(undefined4 *)(param_1 + 0x6c) = DAT_0034c640;
  }
  else {
    fVar5 = (float)FUN_002cfca0((int)(short)(sVar1 - *(short *)(param_1 + 0xbe)));
    uVar3 = DAT_0034c644;
    if (fVar2 <= fVar5) {
      uVar3 = FUN_003738a8(DAT_0034c648);
    }
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
  }
  *(float *)(param_1 + 0x220) = *(float *)(param_1 + 0x6c) * DAT_0034c64c;
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0xbe) + 0x3fff;
  *(float *)(param_1 + 0xc00) = fVar2;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
